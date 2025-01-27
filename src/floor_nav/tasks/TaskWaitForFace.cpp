#include "TaskWaitForFace.h"

using namespace task_manager_lib;
using namespace floor_nav;

TaskIndicator TaskWaitForFace::iterate()
{
    // const face_msg::msg::Roilist::SharedPtr & roiarray = env->getFace();
    auto roiarray = env->getFace();
    if (roiarray == nullptr) {
        RCLCPP_INFO(node->get_logger(),"No face detected");
        return TaskStatus::TASK_RUNNING;
    }
    else if (roiarray!=nullptr && !roiarray->regions.empty()) {
        // RCLCPP_INFO(node->get_logger(),"Detected face at %.2f %.2f",roiarray->regions[0].x_offset, roiarray->regions[0].y_offset);
        RCLCPP_INFO(node->get_logger(),"Detected face");

        return TaskStatus::TASK_COMPLETED;
    }
    else {
        RCLCPP_INFO(node->get_logger(),"No face detected");
    }

    return TaskStatus::TASK_RUNNING;
}
DYNAMIC_TASK(TaskFactoryWaitForFace);