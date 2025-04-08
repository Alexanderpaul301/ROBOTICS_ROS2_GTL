
#include <math.h>
#include "TaskGoToBack.h"
using namespace task_manager_msgs;
using namespace task_manager_lib;
using namespace floor_nav;

// #define DEBUG_GOTO
#ifdef DEBUG_GOTO
#warning Debugging task GOTO
#endif


TaskIndicator TaskGoToBack::initialise() 
{
    RCLCPP_INFO(getNode()->get_logger(),"Going to %.2f %.2f",cfg->goal_x,cfg->goal_y);
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        x_init = tpose.x;
        y_init = tpose.y;
    return TaskStatus::TASK_INITIALISED;
}


TaskIndicator TaskGoTo::iterate()
{
    const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
    double r = hypot(0.0-tpose.y,0.0-tpose.x);

    if (r < cfg->dist_threshold) {
		return TaskStatus::TASK_COMPLETED;
    }

    double alpha = remainder(atan2(-tpose.y, -tpose.x) - tpose.theta, 2 * M_PI);

#ifdef DEBUG_GOTO
    printf("Current: (%.2f, %.2f, %.2f°), Dist: %.2f, Alpha: %.2f°\n",
           tpose.x, tpose.y, tpose.theta * 180.0 / M_PI, r, alpha * 180.0 / M_PI);
#endif
    if (fabs(alpha) > M_PI/9) {
        double rot = ((alpha>0)?+1:-1)*cfg->max_angular_velocity;
#ifdef DEBUG_GOTO
        printf("Cmd v %.2f r %.2f\n",0.,rot);
#endif
            env->publishVelocity(0,rot);
        
    }else {
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
	return TaskStatus::TASK_RUNNING;
}


TaskIndicator TaskGoToBack::terminate()
{
        env->publishVelocity(0,0);
	return TaskStatus::TASK_TERMINATED;
}

DYNAMIC_TASK(TaskFactoryGoToBack);