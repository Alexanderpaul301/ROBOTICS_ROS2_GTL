
#include <vector>
#include <string>
#include <map>
#include <list>
#include <chrono>
#include <functional>


#include <rclcpp/rclcpp.hpp>
#include <tf2/utils.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <nav_msgs/msg/occupancy_grid.hpp>
#include <nav_msgs/msg/path.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#define FREE 0xFF
#define UNKNOWN 0x80
#define OCCUPIED 0x00
#define WIN_SIZE 800

using std::placeholders::_1;
using namespace std::chrono_literals;

class OccupancyGridPlanner : public rclcpp::Node {
    protected:
        rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr og_sub_;
        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr target_sub_;
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::TimerBase::SharedPtr exploration_timer_;



        std::shared_ptr<tf2_ros::TransformListener> tf_listener{nullptr};
        std::unique_ptr<tf2_ros::Buffer> tf_buffer;
        

        cv::Rect roi_;
        cv::Mat_<uint8_t> og_, cropped_og_, robot_footstep_;
        cv::Mat_<cv::Vec3b> og_rgb_, og_rgb_marked_;
        cv::Point3i og_center_;
        nav_msgs::msg::MapMetaData info_;
        std::string frame_id_;
        std::string base_link_;
        bool headless_;
        bool ready_;
        bool debug_;
        double robot_radius_;

        typedef std::multimap<float, cv::Point3i> Heap;

        cv::Point P2(const cv::Point3i & P) {return cv::Point(P.x,P.y);}

        // Callback for Occupancy Grids
        void og_callback(nav_msgs::msg::OccupancyGrid::SharedPtr msg) {
            info_ = msg->info;
            frame_id_ = msg->header.frame_id;
            // Create an image to store the value of the grid.
            og_ = cv::Mat_<uint8_t>(msg->info.height, msg->info.width,0xFF);
            robot_footstep_ = cv::Mat_<uint8_t>(msg->info.height, msg->info.width,UNKNOWN);
            og_center_ = cv::Point3i(-info_.origin.position.x/info_.resolution,
                    -info_.origin.position.y/info_.resolution,0);

            // Some variables to select the useful bounding box 
            unsigned int maxx=0, minx=msg->info.width, 
                         maxy=0, miny=msg->info.height;
            // Convert the representation into something easy to display.
            for (unsigned int j=0;j<msg->info.height;j++) {
                for (unsigned int i=0;i<msg->info.width;i++) {
                    int8_t v = msg->data[j*msg->info.width + i];
                    switch (v) {
                        case 0: 
                            og_(j,i) = FREE; 
                            break;
                        case 100: 
                            og_(j,i) = OCCUPIED; 
                            break;
                        case -1: 
                        default:
                            og_(j,i) = UNKNOWN; 
                            break;
                    }
                    // Update the bounding box of free or occupied cells.
                    if (og_(j,i) != UNKNOWN) {
                        minx = std::min(minx,i);
                        miny = std::min(miny,j);
                        maxx = std::max(maxx,i);
                        maxy = std::max(maxy,j);
                    }
                }
            }
            
            // dilatation part
            int erosion_type = cv::MORPH_RECT ;
            int erosion_size = robot_radius_/info_.resolution ;
            cv::Mat element = cv::getStructuringElement(erosion_type,
                    cv::Size(2*erosion_size+1,2*erosion_size+1),
                    cv::Point( erosion_size, erosion_size));
            cv::erode( og_, og_, element );
            // -----------------------
            
            // ! Make sure that the surface under the robot is considered to be FREE
            // ! this gets the current pose in transform, it comes from the target callback 
    
            // ! I had to add a try and catch to this method because I wasn't able to get consistently tf2
            try {
                geometry_msgs::msg::TransformStamped transformStamped = 
                    tf_buffer->lookupTransform(frame_id_, base_link_, msg->header.stamp);

                cv::Point3i start3D;
                double s_yaw = tf2::getYaw(transformStamped.transform.rotation);
                start3D = cv::Point3i(
                    transformStamped.transform.translation.x / info_.resolution, 
                    transformStamped.transform.translation.y / info_.resolution,
                    (unsigned int)(round(s_yaw / (M_PI/4))) % 8
                ) + og_center_;

                cv::Point2i start(start3D.x, start3D.y);

                if (start.x >= 0 && start.x < robot_footstep_.cols && 
                    start.y >= 0 && start.y < robot_footstep_.rows) {
                    cv::circle(robot_footstep_, start, 
                            3*robot_radius_ / info_.resolution, 
                            FREE, cv::FILLED);
                }

                // ! We use a OR to print the footprint of the robot
                for(int y = 0; y < og_.rows; y++) {
                    for(int x = 0; x < og_.cols; x++) {
                        // ! If the footprint and the og_ cells are not occupied we free the cell
                        if(robot_footstep_(y,x) == FREE && og_(y,x) != OCCUPIED) {
                            og_(y,x) = FREE;
                        }
                        else {
                            // ! The cell remains the same
                        }
                    }
                }   

                // Only proceed if the start point is within the map bounds
                if (start.x >= 0 && start.x < og_.cols && start.y >= 0 && start.y < og_.rows) {
                    // First ensure the robot's position is marked as FREE
                    og_(start.y, start.x) = FREE;
                    
                    // Create a map to track which cells have been visited during flood fill
                    cv::Mat_<uint8_t> visitedMap(og_.rows, og_.cols);
                    visitedMap.setTo(0);  // Initialize all values to 0
                    
                    // Create a fresh map only with OCCUPIED cells
                    cv::Mat_<uint8_t> connectedMap(og_.rows, og_.cols);
                    connectedMap.setTo(UNKNOWN);  // Initialize all to UNKNOWN
                    
                    // Copy OCCUPIED cells from original map
                    for (int y = 0; y < og_.rows; y++) {
                        for (int x = 0; x < og_.cols; x++) {
                            if (og_(y, x) == OCCUPIED) {
                                connectedMap(y, x) = OCCUPIED;
                            }
                        }
                    }
                    
                    // Start BFS from robot position
                    std::queue<cv::Point> queue;
                    queue.push(start);
                    visitedMap(start.y, start.x) = 1;  // Mark start as visited
                    connectedMap(start.y, start.x) = FREE;  // Mark start as FREE
                    
                    while (!queue.empty()) {
                        cv::Point pt = queue.front();
                        queue.pop();
                        
                        // Check 4 neighbors
                        const int dx[4] = {0, 0, -1, 1};
                        const int dy[4] = {-1, 1, 0, 0};
                        
                        for (int i = 0; i < 4; i++) {
                            int nx = pt.x + dx[i];
                            int ny = pt.y + dy[i];
                            
                            // Check if within bounds and not visited
                            if (nx >= 0 && nx < og_.cols && ny >= 0 && ny < og_.rows && visitedMap(ny, nx) == 0) {
                                visitedMap(ny, nx) = 1;  // Mark as visited
                                
                                // IMPORTANT: Only add to queue if it was FREE in original map
                                if (og_(ny, nx) == FREE) {
                                    connectedMap(ny, nx) = FREE;
                                    queue.push(cv::Point(nx, ny));
                                }
                            }
                        }
                    }
                    
                    // Now replace original map with connected map
                    og_ = connectedMap;
                    
                    RCLCPP_DEBUG(this->get_logger(), "Applied BFS flood fill from (%d,%d)", start.x, start.y);
                }

            } catch (const tf2::TransformException & ex) {
                RCLCPP_WARN(this->get_logger(), 
                        "Could not transform %s to %s: %s",
                        frame_id_.c_str(), base_link_.c_str(), 
                        ex.what());
                og_(cv::Range(og_.rows/2-5, og_.rows/2+5), 
                cv::Range(og_.cols/2-5, og_.cols/2+5)).setTo(FREE);
            }


            if (!ready_) {
                ready_ = true;
                RCLCPP_INFO(this->get_logger(),"Received occupancy grid, ready_ to plan");
            }

            // The lines below are only for display
            unsigned int w = maxx - minx;
            unsigned int h = maxy - miny;
            roi_ = cv::Rect(minx,miny,w,h);
            if (!headless_) {
                cv::cvtColor(og_, og_rgb_, cv::COLOR_GRAY2RGB);
                //! We update the RGB map by calling the find_frontier_points function
                std::vector<cv::Point3i> frontiers = find_frontier_points();
                // og_rgb_(50,50) = cv::Vec3b(255,0,0);
                // Compute a sub-image that covers only the useful part of the
                // grid.
                cropped_og_ = cv::Mat_<uint8_t>(og_,roi_);
                if ((w > WIN_SIZE) || (h > WIN_SIZE)) {
                    // The occupancy grid is too large to display. We need to scale
                    // it first.
                    double ratio = w / ((double)h);
                    cv::Size new_size;
                    if (ratio >= 1) {
                        new_size = cv::Size(WIN_SIZE,WIN_SIZE/ratio);
                    } else {
                        new_size = cv::Size(WIN_SIZE*ratio,WIN_SIZE);
                    }
                    cv::Mat_<uint8_t> resized_og;
                    cv::resize(cropped_og_,resized_og,new_size);
                    cv::imshow( "OccGrid", resized_og );
                } else {

                    cv::Mat resized;
                    cv::resize(og_, resized, cv::Size(800, 600)); //! change the dimension of the image
                    cv::imshow("OccGrid", resized);
                    // cv::imshow( "OccGrid", cropped_og_ );
                    // cv::imshow( "OccGrid", og_rgb_ );
                }
            }
        }

        // Generic test if a point is within the occupancy grid
        bool isInGrid(const cv::Point3i & P) {
            if ((P.x < 0) || (P.x >= (signed)info_.width) 
                    || (P.y < 0) || (P.y >= (signed)info_.height)) {
                return false;
            }
            return true;
        }

        double heuristic(const cv::Point3i & P, const cv::Point3i & target) {
            return hypot(target.x - P.x, target.y - P.y);
        }

        template <class iterator_in, class iterator_out>
            void rotate_pattern_90(iterator_in in_start, iterator_in in_end, iterator_out out_start) {
                while (in_start != in_end) {
                    const cv::Point3i & Pin = *in_start;
                    *out_start = cv::Point3i(-Pin.y, Pin.x, Pin.z);
                    in_start++;
                    out_start++;
                }
            }

        // This is called when a new goal is posted by RViz. We don't use a
        // mutex here, because it can only be called in spinOnce.
        void target_callback(geometry_msgs::msg::PoseStamped::SharedPtr msg) {
            geometry_msgs::msg::TransformStamped transformStamped;
            geometry_msgs::msg::PoseStamped pose;
            if (!ready_) {
                RCLCPP_WARN(this->get_logger(),"Ignoring target while the occupancy grid has not been received");
                return;
            }
            RCLCPP_INFO(this->get_logger(),"Received planning request in frame %s (base link %s, frame id %s)",
                    msg->header.frame_id.c_str(),
                    base_link_.c_str(),
                    frame_id_.c_str());
            og_rgb_marked_ = og_rgb_.clone();
            // Convert the destination point in the occupancy grid frame. 
            // The debug case is useful is the map is published without
            // gmapping running (for instance with map_server).
            if (debug_) {
                pose = *msg;
            } else {
                try{
                    std::string errStr;
                    // This converts target in the grid frame.
                    if (!tf_buffer->canTransform(frame_id_, msg->header.frame_id, msg->header.stamp,
                                rclcpp::Duration(std::chrono::duration<double>(1.0)),&errStr)) {
                        RCLCPP_ERROR(this->get_logger(),"Cannot transform target: %s",errStr.c_str());
                        return;
                    }
                    transformStamped = tf_buffer->lookupTransform(frame_id_, msg->header.frame_id, msg->header.stamp);
                    tf2::doTransform(*msg,pose,transformStamped);

                    // this gets the current pose in transform
                    if (!tf_buffer->canTransform(frame_id_, base_link_, msg->header.stamp,
                                rclcpp::Duration(std::chrono::duration<double>(1.0)),&errStr)) {
                        RCLCPP_ERROR(this->get_logger(),"Cannot transform base_link: %s",errStr.c_str());
                        return;
                    }
                    transformStamped = tf_buffer->lookupTransform(frame_id_, base_link_, tf2::TimePointZero);
                }
                catch (const tf2::TransformException & ex){
                    RCLCPP_ERROR(this->get_logger(),"%s",ex.what());
                }
            }
            // Now scale the target to the grid resolution and shift it to the
            // grid center.
            double t_yaw = tf2::getYaw(pose.pose.orientation);
            cv::Point3i target = cv::Point3i(pose.pose.position.x / info_.resolution, 
                    pose.pose.position.y / info_.resolution, (unsigned int)(round(t_yaw / (M_PI/4))) % 8)
                + og_center_;
            RCLCPP_INFO(this->get_logger(),"Planning target: %.2f %.2f %.2f-> %d %d %d",
                    pose.pose.position.x, pose.pose.position.y, t_yaw, target.x, target.y, target.z);
            cv::circle(og_rgb_marked_,P2(target), 10, cv::Scalar(0,0,255));
            if (!headless_) {
                cv::imshow( "OccGrid", og_rgb_marked_ );
            }
            if (!isInGrid(target)) {
                RCLCPP_ERROR(this->get_logger(),"Invalid target point (%.2f %.2f) -> (%d %d)",
                        pose.pose.position.x, pose.pose.position.y, target.x, target.y);
                return;
            }
            // Only accept target which are FREE in the grid (HW, Step 5).
            if (og_(P2(target)) != FREE) {
                RCLCPP_ERROR(this->get_logger(),"Invalid target point: occupancy = %d",og_(P2(target)));
                return;
            }

            // Now get the current point in grid coordinates.
            cv::Point3i start;
            double s_yaw = 0;
            if (debug_) {
                start = og_center_;
            } else {
                s_yaw = tf2::getYaw(transformStamped.transform.rotation);
                start = cv::Point3i(transformStamped.transform.translation.x / info_.resolution, 
                        transformStamped.transform.translation.y / info_.resolution, (unsigned int)(round(s_yaw / (M_PI/4))) % 8)
                    + og_center_;
            }
            RCLCPP_INFO(this->get_logger(),"Planning origin %.2f %.2f %.2f -> %d %d %d",
                    transformStamped.transform.translation.x, transformStamped.transform.translation.y,
                    s_yaw, start.x, start.y, start.z);
            cv::circle(og_rgb_marked_,P2(start), 10, cv::Scalar(0,255,0));
            if (!headless_) {
                cv::imshow( "OccGrid", og_rgb_marked_ );
            }
            if (!isInGrid(start)) {
                RCLCPP_ERROR(this->get_logger(),"Invalid starting point (%.2f %.2f) -> (%d %d)",
                        transformStamped.transform.translation.x, transformStamped.transform.translation.y,
                        start.x, start.y);
                return;
            }
            // If the starting point is not FREE there is a bug somewhere, but
            // better to check
            if (og_(P2(start)) != FREE) {
                RCLCPP_ERROR(this->get_logger(),"Invalid start point: occupancy = %d",og_(P2(start)));
                return;
            }
            RCLCPP_INFO(this->get_logger(),"Starting planning from (%d, %d) to (%d, %d)",start.x,start.y, target.x, target.y);
        }

        // ! We created a new fonction called
        bool planToPixelTarget(cv::Point3i start, cv::Point3i target,nav_msgs::msg::Path &path_out) {
            int dims[3] = {og_.size().width, og_.size().height, 8};
            cv::Mat_<float> cell_value(3, dims, NAN);
            cv::Mat_<cv::Vec3s> predecessor(3, dims);

            cv::Point3i neighbours_0[5] = {cv::Point3i(1,0,0), 
                cv::Point3i(1,1,1), cv::Point3i(1,-1,-1), cv::Point3i(0,0,1), cv::Point3i(0,0,-1)};
            cv::Point3i neighbours_45[5] = {cv::Point3i(1,1,0), 
                cv::Point3i(0,1,1), cv::Point3i(1,0,-1), cv::Point3i(0,0,1), cv::Point3i(0,0,-1)};

            std::vector<std::vector<cv::Point3i>> neighbours(8, std::vector<cv::Point3i>(5));
            rotate_pattern_90(neighbours_0, neighbours_0 + 5, neighbours[2].begin());
            rotate_pattern_90(neighbours_45, neighbours_45 + 5, neighbours[3].begin());
            rotate_pattern_90(neighbours[2].begin(), neighbours[2].end(), neighbours[4].begin());
            rotate_pattern_90(neighbours[3].begin(), neighbours[3].end(), neighbours[5].begin());
            rotate_pattern_90(neighbours[4].begin(), neighbours[4].end(), neighbours[6].begin());
            rotate_pattern_90(neighbours[5].begin(), neighbours[5].end(), neighbours[7].begin());
            rotate_pattern_90(neighbours[6].begin(), neighbours[6].end(), neighbours[0].begin());
            rotate_pattern_90(neighbours[7].begin(), neighbours[7].end(), neighbours[1].begin());

            float cost_0[5] = {1, 2 * sqrt(2), 2 * sqrt(2), 10, 10};
            float cost_45[5] = {sqrt(2), 2, 2, 10, 10};

            Heap heap;
            heap.insert(Heap::value_type(heuristic(start, target), start));
            cell_value(start.x, start.y, start.z) = 0;

            while (!heap.empty()) {
                auto hit = heap.begin();
                cv::Point3i this_cell = hit->second;
                if (this_cell == target) break;
                float this_cost = cell_value(this_cell.x, this_cell.y, this_cell.z);
                heap.erase(hit);

                for (unsigned int i = 0; i < 5; i++) {
                    cv::Point3i dest = this_cell + neighbours[this_cell.z][i];
                    dest.z = (dest.z + 8) % 8;
                    if (!isInGrid(dest)) continue;
                    uint8_t og = og_(P2(dest));
                    if (og != FREE) continue;

                    float cv = cell_value(dest.x, dest.y, dest.z);
                    float new_cost = this_cost + ((dest.z & 1) ? cost_45[i] : cost_0[i]);
                    if (isnan(cv) || (new_cost < cv)) {
                        predecessor.at<cv::Vec3s>(dest.x, dest.y, dest.z) = cv::Vec3s(this_cell.x, this_cell.y, this_cell.z);
                        cell_value(dest.x, dest.y, dest.z) = new_cost;
                        heap.insert(Heap::value_type(new_cost + heuristic(dest, target), dest));
                    }
                }
            }

            if (isnan(cell_value(target.x, target.y, target.z))) {
                RCLCPP_ERROR(this->get_logger(), "No path found");
                return false;
            }

            std::list<cv::Point3i> lpath;
            while (target != start) {
                lpath.push_front(target);
                cv::Vec3s p = predecessor(target.x, target.y, target.z);
                target.x = p[0]; target.y = p[1]; target.z = p[2];
                if (lpath.size() > 10000) {
                    RCLCPP_ERROR(this->get_logger(), "Path too long or loop detected");
                    return false;
                }
            }
            lpath.push_front(start);

            nav_msgs::msg::Path path;
            path.header.stamp = this->get_clock()->now();
            path.header.frame_id = frame_id_;
            path.poses.resize(lpath.size());

            unsigned int ipose = 0;
            for (auto &P : lpath) {
                path.poses[ipose].header = path.header;
                cv::Point3i relative = P - og_center_;
                path.poses[ipose].pose.position.x = relative.x * info_.resolution;
                path.poses[ipose].pose.position.y = relative.y * info_.resolution;
                tf2::Quaternion Q;
                Q.setRPY(0, 0, relative.z * M_PI / 4);
                path.poses[ipose].pose.orientation = tf2::toMsg(Q);
                ipose++;
            }

            path_out = path;
            return true;
        }




        // ! Need to modify the type of this function so that I can have a list of frontier points as the output.
        std::vector<cv::Point3i> find_frontier_points() {
            std::vector<cv::Point3i> frontier_points;
            
            cv::cvtColor(og_, og_rgb_, cv::COLOR_GRAY2RGB);

            for (int y = 1; y < og_.rows - 1; y++) {
                for (int x = 1; x < og_.cols - 1; x++) {
                    //! Only free cells can be frontiers
                    if (og_(y,x) != FREE) continue;
                    
                    bool is_frontier = false;
                    
                    //! Check for the 8 neighbours I would have liked to use directly the neighbours object but I had issues using it
                    for (int dy = -1; dy <= 1; dy++) {
                        for (int dx = -1; dx <= 1; dx++) {

                            if (dx == 0 && dy == 0) continue;
                            
                            //! If one of the neighbours is unknown it is a frontier point
                            if (og_(y+dy, x+dx) == UNKNOWN) {
                                is_frontier = true;
                                og_rgb_(y, x) = cv::Vec3b(255, 0, 0); //! Draw the frontiers in blue
                                break;
                            }
                        }
                        if (is_frontier) {
                        cv::Point3i frontier_point(x,y,0);
                        frontier_points.emplace_back(frontier_point);
                        break;
                        }
                    }  
                }
            }
            
            return frontier_points;
        }


        cv::Point3i get_robot_position() {
        geometry_msgs::msg::TransformStamped transformStamped;
        try {
            transformStamped = tf_buffer->lookupTransform(frame_id_, base_link_, tf2::TimePointZero);
        } catch (const tf2::TransformException & ex) {
            RCLCPP_ERROR(this->get_logger(), "%s", ex.what());
            return cv::Point3i(-1, -1, 0); //! Invalid
        }
        double s_yaw = tf2::getYaw(transformStamped.transform.rotation);
        return cv::Point3i(transformStamped.transform.translation.x / info_.resolution,
                        transformStamped.transform.translation.y / info_.resolution,
                        (unsigned int)(round(s_yaw / (M_PI/4))) % 8)
            + og_center_;
        }


    bool find_best_frontier(const cv::Point3i &start, cv::Point3i &best_frontier) {
        double best_score = -std::numeric_limits<double>::max();
        bool found = false;
        const int scan_range = 40;
        const double min_safe_radius = 1.0 / info_.resolution;  // Minimum safe distance in pixels
        const double max_preferred_radius = 3 * min_safe_radius;  // 3x min radius
        
        // Get robot orientation (0-7, where 0 is facing right, 2 is up, etc.)
        const int robot_orientation = start.z;

        // Define search bounds
        const int min_x = std::max(3, start.x - scan_range);
        const int max_x = std::min(og_.cols - 4, start.x + scan_range);
        const int min_y = std::max(3, start.y - scan_range);
        const int max_y = std::min(og_.rows - 4, start.y + scan_range);

        // Pre-compute direction vectors for front preference
        const std::array<cv::Point2i, 8> direction_vectors = {
            cv::Point2i(1, 0),   // 0: right
            cv::Point2i(1, 1),    // 1: up-right
            cv::Point2i(0, 1),    // 2: up
            cv::Point2i(-1, 1),   // 3: up-left
            cv::Point2i(-1, 0),   // 4: left
            cv::Point2i(-1, -1),  // 5: down-left
            cv::Point2i(0, -1),   // 6: down
            cv::Point2i(1, -1)    // 7: down-right
        };

        for (int y = min_y; y <= max_y; ++y) {
            for (int x = min_x; x <= max_x; ++x) {
                // Only consider free cells
                if (og_(y, x) != FREE) continue;

                // Count unknown neighbors (information gain)
                int unknown_count = 0;
                for (int dy = -1; dy <= 1; ++dy) {
                    for (int dx = -1; dx <= 1; ++dx) {
                        if (dx == 0 && dy == 0) continue;
                        if (og_(y + dy, x + dx) == UNKNOWN) {
                            unknown_count++;
                        }
                    }
                }

                // Must have at least 3 unknown neighbors to be considered a frontier
                if (unknown_count < 3) continue;
                if (unknown_count > 6) continue;

                double dist = hypot(x - start.x, y - start.y);
                
                // Skip points too close to robot
                if (dist < min_safe_radius) continue;

                // Calculate direction score (prefer points in front)
                cv::Point2i vec(x - start.x, y - start.y);
                double dot_product = direction_vectors[robot_orientation].x * vec.x + 
                                direction_vectors[robot_orientation].y * vec.y;
                double direction_score = (dot_product > 0) ? 1.0 : 0.2;

                // Calculate distance penalty
                double distance_penalty = 1.0;
                if (dist > max_preferred_radius) {
                    // Strong penalty for points beyond preferred radius
                    distance_penalty = 0.2 * (max_preferred_radius / dist);
                }

                // Combined score
                double score = (unknown_count * 0.3) +        // Information gain (40%)
                            (direction_score * 0.5) +      // Front preference (30%)
                            (distance_penalty * 0.2);      // Distance (30%)

                if (score > best_score) {
                    best_score = score;
                    best_frontier = cv::Point3i(x, y, 0);
                    found = true;
                }
            }
        }

        // Debug output
        if (found) {
            double dist = hypot(best_frontier.x - start.x, best_frontier.y - start.y);
            RCLCPP_INFO(this->get_logger(), 
                    "Best frontier at (%d,%d): %.2fm away, %d unknowns, score %.2f",
                    best_frontier.x, best_frontier.y, 
                    dist * info_.resolution,
                    count_unknown_neighbors(best_frontier),
                    best_score);
        } else {
            RCLCPP_WARN(this->get_logger(), "No valid frontier points found");
        }

        return found;
    }

    // Helper function to count unknown neighbors
    int count_unknown_neighbors(const cv::Point3i &point) {
        int count = 0;
        for (int dy = -1; dy <= 1; ++dy) {
            for (int dx = -1; dx <= 1; ++dx) {
                if (dx == 0 && dy == 0) continue;
                if (og_(point.y + dy, point.x + dx) == UNKNOWN) {
                    count++;
                }
            }
        }
        return count;
    }


    public:
        OccupancyGridPlanner() : rclcpp::Node("occgrid_planner") {
            ready_ = false;
            
            this->declare_parameter("~/base_frame",std::string("body"));
            this->declare_parameter("~/debug",false);
            this->declare_parameter("~/headless",true);
            this->declare_parameter("~/robot_radius",0.1);
            base_link_ = this->get_parameter("~/base_frame").as_string();
            debug_ = this->get_parameter("~/debug").as_bool();
            headless_ = this->get_parameter("~/headless").as_bool();
            robot_radius_ = this->get_parameter("~/robot_radius").as_double();
            tf_buffer = std::make_unique<tf2_ros::Buffer>(this->get_clock());
            tf_listener = std::make_shared<tf2_ros::TransformListener>(*tf_buffer);
            og_sub_ = this->create_subscription<nav_msgs::msg::OccupancyGrid>("~/occ_grid",1,
                    std::bind(&OccupancyGridPlanner::og_callback,this,std::placeholders::_1));
            target_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("~/goal",1,
                    std::bind(&OccupancyGridPlanner::target_callback,this,std::placeholders::_1));
            path_pub_ = this->create_publisher<nav_msgs::msg::Path>("~/path",1);

            if (!headless_) {
                cv::namedWindow( "OccGrid", cv::WINDOW_AUTOSIZE );
                timer_ = this->create_wall_timer( 50ms,
                        std::bind(&OccupancyGridPlanner::timer_cb, this));
            }

            exploration_timer_ = this->create_wall_timer(15s, std::bind(&OccupancyGridPlanner::frontier_timer_cb, this));

        }

        void timer_cb() {
            cv::waitKey(5);
        }

        void frontier_timer_cb() {
            if (!ready_) return;

            cv::Point3i current_pos = get_robot_position();
            cv::Point3i best_frontier;
            bool found = find_best_frontier(current_pos, best_frontier);

            if (found) {
                RCLCPP_INFO(this->get_logger(), "New frontier target at (%d, %d)", best_frontier.x, best_frontier.y);
                nav_msgs::msg::Path path;
                if (planToPixelTarget(current_pos, best_frontier,path)) {
                    path_pub_->publish(path);
                }
            } else {
                RCLCPP_INFO(this->get_logger(), "No frontier found");
            }
        }

};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OccupancyGridPlanner>());
    rclcpp::shutdown();
}