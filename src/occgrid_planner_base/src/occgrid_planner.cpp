
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
        rclcpp::TimerBase::SharedPtr timer_, timer2_;


        std::shared_ptr<tf2_ros::TransformListener> tf_listener{nullptr};
        std::unique_ptr<tf2_ros::Buffer> tf_buffer;

        cv::Rect roi_;
        cv::Mat_<uint8_t> og_, cropped_og_, robot_footstep_;
        cv::Mat_<cv::Vec3b> og_rgb_, og_rgb_marked_, frontier_map_;
        cv::Point3i og_center_;
        nav_msgs::msg::MapMetaData info_;
        std::string frame_id_;
        std::string base_link_;
        bool headless_;
        bool ready_;
        bool debug_;
        double robot_radius_;

        nav_msgs::msg::OccupancyGrid::SharedPtr current_og_;
        cv::Point3i current_start_;

        typedef std::multimap<float, cv::Point3i> Heap;

        cv::Point P2(const cv::Point3i & P) {return cv::Point(P.x,P.y);}

        // Callback for Occupancy Grids
        void og_callback(nav_msgs::msg::OccupancyGrid::SharedPtr msg) {
            current_og_ = msg;
            info_ = msg->info;
            frame_id_ = msg->header.frame_id;
            geometry_msgs::msg::TransformStamped transformStamped;
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
                        // case -1:   // We know consider the unknown cells to be free.
                        // default:
                        //     og_(j,i) = FREE; 
                        //     break;
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
                            robot_radius_ / info_.resolution, 
                            FREE, cv::FILLED);
                }

                // ! We use a OR to print the footprint of the robot
                og_ = og_ | robot_footstep_;  

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
                    // cv::imshow( "OccGrid", cropped_og_ );
                    cv::imshow( "OccGrid", og_rgb_ );
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

            // ! We will need to create a planner in pixels.
            RCLCPP_INFO(this->get_logger(),"Starting planning from (%d, %d) to (%d, %d)",start.x,start.y, target.x, target.y);
            
        }

            // ! This line represent the boundary between meters and pixels. (Everything on top is in meter and everything under is in pixels)
        void planToPixelTarget(cv::Point3i start, cv::Point3i target){
            // Here the Dijskstra algorithm starts 
            // The best distance to the goal computed so far. This is
            // initialised with Not-A-Number. 
            int dims[3] = {og_.size().width, og_.size().height, 8};
            cv::Mat_<float> cell_value(3,dims, NAN);
            // For each cell we need to store a pointer to the coordinates of
            // its best predecessor. 
            cv::Mat_<cv::Vec3s> predecessor(3,dims);

            // The neighbour of a given cell in relative coordinates. The order
            // is important. If we use 4-connexity, then we can use only the
            // first 4 values of the array. If we use 8-connexity we use the
            // full array.
            cv::Point3i neighbours_0[5] = {cv::Point3i(1,0,0), 
                cv::Point3i(1,1,1), cv::Point3i(1,-1,-1), cv::Point3i(0,0,1), cv::Point3i(0,0,-1)};
            cv::Point3i neighbours_45[5] = {cv::Point3i(1,1,0), 
                cv::Point3i(0,1,1), cv::Point3i(1,0,-1), cv::Point3i(0,0,1), cv::Point3i(0,0,-1)};

            std::vector< std::vector<cv::Point3i> > neighbours(8,std::vector<cv::Point3i>(5));
            rotate_pattern_90(neighbours_0,neighbours_0+5,neighbours[2].begin());
            rotate_pattern_90(neighbours_45,neighbours_45+5,neighbours[3].begin());
            rotate_pattern_90(neighbours[2].begin(),neighbours[2].end(),neighbours[4].begin());
            rotate_pattern_90(neighbours[3].begin(),neighbours[3].end(),neighbours[5].begin());
            rotate_pattern_90(neighbours[4].begin(),neighbours[4].end(),neighbours[6].begin());
            rotate_pattern_90(neighbours[5].begin(),neighbours[5].end(),neighbours[7].begin());
            rotate_pattern_90(neighbours[6].begin(),neighbours[6].end(),neighbours[0].begin());
            rotate_pattern_90(neighbours[7].begin(),neighbours[7].end(),neighbours[1].begin());
            // Cost of displacement corresponding the neighbours. Diagonal
            // moves are 44% longer.
            float cost_0[5] = {1, 2*sqrt(2), 2*sqrt(2), 10, 10};
            float cost_45[5] = {sqrt(2), 2, 2, 10, 10};


            // The core of Dijkstra's Algorithm, a sorted heap, where the first
            // element is always the closer to the start.
            Heap heap;
            heap.insert(Heap::value_type(heuristic(start,target), start));
            cell_value(start.x,start.y,start.z) = 0;
            while (!heap.empty()) {
                // Select the cell at the top of the heap
                Heap::iterator hit = heap.begin();
                // the cell it contains is this_cell
                cv::Point3i this_cell = hit->second;
                if (this_cell == target) {
                    break;
                }
                // and its score is this_cost
                float this_cost = cell_value(this_cell.x,this_cell.y,this_cell.z);
                // We can remove it from the heap now.
                heap.erase(hit);
                // Now see where we can go from this_cell
                for (unsigned int i=0;i<5;i++) {
                    cv::Point3i dest = this_cell + neighbours[this_cell.z][i];
                    dest.z = (dest.z + 8) % 8;
                    if (!isInGrid(dest)) {
                        // outside the grid
                        continue;
                    }
                    uint8_t og = og_(P2(dest));
                    if (og != FREE) {
                        // occupied or unknown
                        continue;
                    }
                    float cv = cell_value(dest.x,dest.y,dest.z);
                    float new_cost = this_cost + ((dest.z&1)?(cost_45[i]):(cost_0[i]));
                    if (isnan(cv) || (new_cost < cv)) {
                        // found shortest path (or new path), updating the
                        // predecessor and the value of the cell
                        predecessor.at<cv::Vec3s>(dest.x,dest.y,dest.z) = cv::Vec3s(this_cell.x,this_cell.y,this_cell.z);
                        cell_value(dest.x,dest.y,dest.z) = new_cost;
                        // And insert the selected cells in the map.
                        heap.insert(Heap::value_type(new_cost+heuristic(dest,target),dest));
                    }
                }
            }
            if (isnan(cell_value(target.x,target.y,target.z))) {
                // No path found
                RCLCPP_ERROR(this->get_logger(),"No path found from (%d, %d, %d) to (%d, %d, %d)",
                        start.x,start.y,start.z,target.x,target.y,target.z);
                return;
            }
            RCLCPP_INFO(this->get_logger(),"Planning completed");
            // Now extract the path by starting from goal and going through the
            // predecessors until the starting point
            std::list<cv::Point3i> lpath;
            while (target != start) {
                lpath.push_front(target);
                cv::Vec3s p = predecessor(target.x,target.y,target.z);
                target.x = p[0]; target.y = p[1]; target.z = p[2];
                assert(lpath.size()<10000);
            }
            lpath.push_front(start);
            // Finally create a ROS path message
            nav_msgs::msg::Path path;
            path.header.stamp = this->get_clock()->now();
            path.header.frame_id = frame_id_;
            path.poses.resize(lpath.size());
            std::list<cv::Point3i>::const_iterator it = lpath.begin();
            unsigned int ipose = 0;
            while (it != lpath.end()) {
                // time stamp is not updated because we're not creating a
                // trajectory at this stage
                path.poses[ipose].header = path.header;
                cv::Point3i P = *it - og_center_;
                path.poses[ipose].pose.position.x = (P.x) * info_.resolution;
                path.poses[ipose].pose.position.y = (P.y) * info_.resolution;
                tf2::Quaternion Q;
                Q.setRPY(0,0,P.z*M_PI/4);
                path.poses[ipose].pose.orientation = tf2::toMsg(Q);
                ipose++;
                it ++;
            }
            path_pub_->publish(path);
            RCLCPP_INFO(this->get_logger(),"Request completed");
            return;
        }


        // ! Need to modify the type of this function so that I can have a list of frontier points as the output.
        std::vector<cv::Point3i> find_frontier_points() {
            std::vector<cv::Point3i> frontier_points;
            
            cv::cvtColor(og_, og_rgb_, cv::COLOR_GRAY2RGB);

            for (int y = 1; y < og_.rows - 1; y++) {
                for (int x = 1; x < og_.cols - 1; x++) {
                    // Seulement les cellules libres peuvent être frontières
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
                timer2_= this->create_wall_timer( 5000ms, 
                    std::bind(&OccupancyGridPlanner::frontier_callback,this));
            }
        }

        void timer_cb() {
            cv::waitKey(5);
        }


        void frontier_callback() {
            RCLCPP_INFO(this->get_logger(),"Frontier callback !");
            if (!current_og_) return;// Vérifier si le message est disponible
            

            try {
                geometry_msgs::msg::TransformStamped transformStamped = 
                    tf_buffer->lookupTransform(
                        frame_id_, 
                        base_link_, 
                        current_og_->header.stamp // Utiliser le timestamp du message stocké
                    );

                // Utiliser current_start_ déjà mis à jour
                cv::Point2i start(current_start_.x, current_start_.y);

                std::vector<cv::Point3i> frontier_points = find_frontier_points();
                
                if (frontier_points.empty()) return;

                // Calcul du meilleur point frontière
                float best_score = 0;
                size_t best_index = 0;
                for (size_t i = 0; i < frontier_points.size(); i++) {
                    float score = cv::norm(P2(frontier_points[i]) - start);
                    if (score > best_score) {
                        best_score = score;
                        best_index = i;
                    }
                }

            cv::Point3i target = frontier_points[best_index];
            
            planToPixelTarget(current_start_, target);

            } 
            
            catch (const tf2::TransformException & ex) {
                RCLCPP_WARN(get_logger(), "Erreur TF: %s", ex.what());
            }
        }
                            
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OccupancyGridPlanner>());
    rclcpp::shutdown();
}

