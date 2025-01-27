#include "TaskStareAtFace.h"

using namespace task_manager_lib;
using namespace floor_nav;

TaskIndicator TaskStareAtFace::iterate()
{
    // const face_msg::msg::Roilist::SharedPtr & roiarray = env->getFace();
    auto roiarray = env->getFace();

    if (roiarray!=nullptr && !roiarray->regions.empty()) {

        const float center_position = 125.0 - float(roiarray->regions[0].width)/2; 
        float speed_factor = float(roiarray->regions[0].x_offset)-center_position;
        const float epsilon = 2.0;

        if (std::abs(speed_factor) > epsilon) 
        {
            float speed = speed_factor / 250; // Compute the speed
            // Log x_offset and speed
            RCLCPP_INFO(env->getNode()->get_logger(), "x_offset: %f, speed: %f", speed_factor, speed);
            env->publishVelocity(0.0, -speed); // Turn to align
            return TaskStatus::TASK_RUNNING;
        }
        else
        {
            // Face is centered
            env->publishVelocity(0.0, 0.0);
            return TaskStatus::TASK_COMPLETED;
        }
    }
    else
    {
        RCLCPP_INFO(env->getNode()->get_logger(), "No face detected.");
        return TaskStatus::TASK_RUNNING;
    }
}

DYNAMIC_TASK(TaskFactoryStareAtFace);
