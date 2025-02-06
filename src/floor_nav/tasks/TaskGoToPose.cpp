    #include <math.h>
    #include "TaskGoToPose.h"
    #include <vector>
    #include <iostream>
    using namespace std;
    using namespace task_manager_msgs;
    using namespace task_manager_lib;
    using namespace floor_nav;

    // #define DEBUG_GOTOPOSE
    #ifdef DEBUG_GOTOPOSE
    #warning Debugging task GOTOPOSE
    #endif


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

        flag_holo=cfg->flag_holo;

        stupid=cfg->stupid;
        if (stupid==true){
    
            if (r < cfg->dist_threshold) {
                
                if (fabs(remainder(cfg->goal_teta-teta,2*M_PI))<cfg->angle_threshold){
                    if (flag_holo==false)
                    {
                        env->publishVelocity(0.0,0.0);
                    }
                    else
                    {
                        env->publishVelocity(0.0,0.0,0.0);
                    }
                    return TaskStatus::TASK_COMPLETED;
                }
                else{
                double sigma = remainder(cfg->goal_teta-teta,2*M_PI);
                double rot = ((sigma>0.0)?+1.0:-1.0)*cfg->max_angular_velocity*cfg->k_alpha;
                if (flag_holo==false)
                {
                    env->publishVelocity(0.0,rot);
                }
                else
                {
                    env->publishVelocity(0.0,0.0,rot);
                }
                
                }
            }
            else {

            double alpha = remainder(atan2((y_init + cfg->goal_y-y),x_init + cfg->goal_x-x)-teta,2*M_PI);
    #ifdef DEBUG_GOTOPOSE
        printf("c %.1f %.1f %.1f g %.1f %.1f r %.3f alpha %.1f\n",
                x, y, teta*180./M_PI,
                cfg->goal_x,cfg->goal_y,r,alpha*180./M_PI);
    #endif
        if (fabs(alpha) > M_PI/9) {
            double rot = ((alpha>0)?+1:-1)*cfg->max_angular_velocity;
    #ifdef DEBUG_GOTOPOSE
            printf("Cmd v %.2f r %.2f\n",0.,rot);
    #endif
            if (flag_holo==false)
            {
            env->publishVelocity(0,rot);
            }
            else
            {
            env->publishVelocity(0,0,rot);
            }
        } else {

            if (flag_holo==false)
            {
            double vel = cfg->k_v * r;
            double rot = std::max(std::min(cfg->k_alpha*alpha,cfg->max_angular_velocity),-cfg->max_angular_velocity);
            if (vel > cfg->max_velocity) vel = cfg->max_velocity;
            if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;
            if (rot > cfg->max_angular_velocity) rot = cfg->max_angular_velocity;
            if (rot <-cfg->max_angular_velocity) rot = -cfg->max_angular_velocity;
#ifdef DEBUG_GOTO
            printf("Cmd v %.2f r %.2f\n",vel,rot);
#endif
            env->publishVelocity(vel, rot);
            }
            else {
            double vel = cfg->k_v * r;
            double rot = std::max(std::min(cfg->k_alpha*alpha,cfg->max_angular_velocity),-cfg->max_angular_velocity);
            if (vel > cfg->max_velocity) vel = cfg->max_velocity;
            if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;
            if (rot > cfg->max_angular_velocity) rot = cfg->max_angular_velocity;
            if (rot <-cfg->max_angular_velocity) rot = -cfg->max_angular_velocity;

            double velx = vel *cos(alpha);
            double vely = vel *sin(alpha);

#ifdef DEBUG_GOTO
            printf("Cmd v %.2f r %.2f\n",vel,rot);
#endif
            env->publishVelocity(velx,vely, rot);}
        }

            }
        } // End of the stupid method
        else {
            // Smart method
            double alpha = -cfg->goal_teta + remainder(atan2((y_init + cfg->goal_y - y), x_init + cfg->goal_x - x) - teta, 2 * M_PI);
            double beta = -cfg->goal_teta - alpha;

            double v = cfg->k_r * r;
            double w = cfg->k_alpha * alpha + cfg->k_beta * beta;
            if (v > cfg->max_velocity) v = cfg->max_velocity;
            if (v <-cfg->max_velocity) v = -cfg->max_velocity;
            if (w > cfg->max_angular_velocity) w = cfg->max_angular_velocity;
            if (w <-cfg->max_angular_velocity) w = -cfg->max_angular_velocity;

            if (flag_holo==false)
                {
                    env->publishVelocity(v, w);
                }
                else
                {
                    double vx= v * cos(alpha);
                    double vy= v * sin(alpha);
                    env->publishVelocity(vx, vy, w);
                }


            if (r < cfg->dist_threshold && (cfg->goal_teta-teta) < cfg->angle_threshold) {

                if (flag_holo==false)
                {
                    env->publishVelocity(0.0, 0.0);
                }
                else
                {
                    env->publishVelocity(0.0, 0.0, 0.0);
                }
                return TaskStatus::TASK_COMPLETED;
            }
            
        }
        return TaskStatus::TASK_RUNNING;

    }
       

    TaskIndicator TaskGoToPose::terminate()
    {
         if (flag_holo==false)
        {
            env->publishVelocity(0,0);
        }
        else
        {
            env->publishVelocity(0,0,0);
        }
        
        return TaskStatus::TASK_TERMINATED;
    }

    DYNAMIC_TASK(TaskFactoryGoToPose);
