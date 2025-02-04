    #include <math.h>
    #include "TaskGoToPose.h"
    #include <iostream>
    using namespace std;
    using namespace task_manager_msgs;
    using namespace task_manager_lib;
    using namespace floor_nav;




    TaskIndicator TaskGoToPose::initialise() 
    {
        RCLCPP_INFO(getNode()->get_logger(),"Going to %.2f %.2f",cfg->goal_x,cfg->goal_y);
        if (cfg->relative) {
            const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
            x_init = tpose.x;
            y_init = tpose.y;
            teta_init = tpose.theta;
        } else {
            x_init = 0.0;
            y_init = 0.0;
            teta_init = 0.0;
        }
        return TaskStatus::TASK_INITIALISED;
    }


    TaskIndicator TaskGoToPose::iterate()
    {  
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        x = tpose.x;
        y = tpose.y;
        teta = tpose.theta;

        double r = hypot(y_init + cfg->goal_y-y,x_init + cfg->goal_x-x);


        stupid=cfg->stupid;
        if (stupid==true){
    
            if (r < cfg->dist_threshold) {
                if (fabs(remainder(cfg->goal_teta-teta,2*M_PI))<cfg->angle_threshold){
                    if (cfg->flag_holo==false){
                        env->publishVelocity(0.0,0.0);
                        return TaskStatus::TASK_COMPLETED;
                    }
                    else{
                        env->publishVelocity(0.0,0.0,0.0);
                        return TaskStatus::TASK_COMPLETED;
                    }

                }
                else{
                double sigma = remainder(cfg->goal_teta-teta,2*M_PI);
                double rot = ((sigma>0.0)?+1.0:-1.0)*cfg->max_angular_velocity*cfg->k_alpha/8.0;
                if (cfg->flag_holo==false){
                    env->publishVelocity(0.0,rot);
                }
                else{
                    env->publishVelocity(0.0,0.0,rot);
                }
                return TaskStatus::TASK_RUNNING;
                }
            }
            else {

                double alpha = remainder(atan2((y_init + cfg->goal_y-y),x_init + cfg->goal_x-x)-teta,2*M_PI);

                if (cfg->flag_holo==false){
                    if (fabs(alpha) > M_PI/9) {
                        double rot = ((alpha>0)?+1:-1)*cfg->max_angular_velocity;
                    
                        env->publishVelocity(0,rot);
                    }

                    else {
                    double vel = cfg->k_v * r;
                    double rot = std::max(std::min(cfg->k_alpha*alpha,cfg->max_angular_velocity),-cfg->max_angular_velocity);
                    if (vel > cfg->max_velocity) vel = cfg->max_velocity;
                    if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;
                    if (rot > cfg->max_angular_velocity) rot = cfg->max_angular_velocity;
                    if (rot <-cfg->max_angular_velocity) rot = -cfg->max_angular_velocity;

                    env->publishVelocity(vel, rot);
                    return TaskStatus::TASK_RUNNING;
                    }
                } 

                else {
                    double vel = cfg->k_v * r;

                    if (vel > cfg->max_velocity) vel = cfg->max_velocity;
                    if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;

                    double vel_x = vel * cos(alpha);
                    double vel_y = vel * sin(alpha);

                    env->publishVelocity(vel_x, vel_y, 0);
                    return TaskStatus::TASK_RUNNING;
                }
                

            }
        } // End of the stupid method


        else {
            // Smart method
            double alpha = -cfg->goal_teta + remainder(atan2((y_init + cfg->goal_y - y), x_init + cfg->goal_x - x) - teta, 2 * M_PI);
            double beta = -cfg->goal_teta - alpha;

            double v = cfg->k_r * r;
            double w = cfg->k_alpha * alpha + cfg->k_beta * beta;

            if (cfg->flag_holo == false) {
                env->publishVelocity(v, w);
            } 

            else {
                double vel_x = v * cos(alpha);
                double vel_y = v * sin(alpha);
                env->publishVelocity(vel_x, vel_y, w);
            }
        

            if (r < cfg->dist_threshold && (cfg->goal_teta-teta) < cfg->angle_threshold) {
                env->publishVelocity(0.0, 0.0, 0.0);
                return TaskStatus::TASK_COMPLETED;
            }
            
        }
        return TaskStatus::TASK_RUNNING;
         
    }
       

    TaskIndicator TaskGoToPose::terminate()
    {

        env->publishVelocity(0,0,0);
        return TaskStatus::TASK_TERMINATED;
    }

    DYNAMIC_TASK(TaskFactoryGoToPose);
