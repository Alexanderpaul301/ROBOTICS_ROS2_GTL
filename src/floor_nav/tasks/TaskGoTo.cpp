#include <math.h>
#include "TaskGoTo.h"
using namespace task_manager_msgs;
using namespace task_manager_lib;
using namespace floor_nav;
using namespace std;



TaskIndicator TaskGoTo::initialise() 
{
    RCLCPP_INFO(getNode()->get_logger(),"Going to %.2f %.2f",cfg->goal_x,cfg->goal_y);
    if (cfg->relative) {
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        x_init = tpose.x;
        y_init = tpose.y;
    } else {
        x_init = 0.0;
        y_init = 0.0;
    }
    return TaskStatus::TASK_INITIALISED;
}


TaskIndicator TaskGoTo::iterate()
{
    bool flag_holo=cfg->flag_holo;
    if (flag_holo==false){
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        double r = hypot(y_init + cfg->goal_y-tpose.y,x_init + cfg->goal_x-tpose.x);
        if (r < cfg->dist_threshold) {
            return TaskStatus::TASK_COMPLETED;
        }
        double alpha = remainder(atan2((y_init + cfg->goal_y-tpose.y),x_init + cfg->goal_x-tpose.x)-tpose.theta,2*M_PI);

        printf("c %.1f %.1f %.1f g %.1f %.1f r %.3f alpha %.1f\n",
                tpose.x, tpose.y, tpose.theta*180./M_PI,
                cfg->goal_x,cfg->goal_y,r,alpha*180./M_PI);

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

            env->publishVelocity(vel,rot);
        }
        return TaskStatus::TASK_RUNNING;
    }
    else{
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        double r = hypot(y_init + cfg->goal_y-tpose.y,x_init + cfg->goal_x-tpose.x);
        if (r < cfg->dist_threshold) {
            return TaskStatus::TASK_COMPLETED;
        }
        double alpha = remainder(atan2((y_init + cfg->goal_y-tpose.y),x_init + cfg->goal_x-tpose.x)-tpose.theta,2*M_PI);

        printf("c %.1f %.1f %.1f g %.1f %.1f r %.3f alpha %.1f\n",
                tpose.x, tpose.y, tpose.theta*180./M_PI,
                cfg->goal_x,cfg->goal_y,r,alpha*180./M_PI);

        double vel = cfg->k_v * r;

        if (vel > cfg->max_velocity) vel = cfg->max_velocity;
        if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;

        double vel_x = vel * cos(alpha);
        double vel_y = vel * sin(alpha);

        env->publishVelocity(vel_x, vel_y, 0);

        return TaskStatus::TASK_RUNNING;
    }
}

TaskIndicator TaskGoTo::terminate()
{
    env->publishVelocity(0,0,0);
	return TaskStatus::TASK_TERMINATED;
}

DYNAMIC_TASK(TaskFactoryGoTo);
