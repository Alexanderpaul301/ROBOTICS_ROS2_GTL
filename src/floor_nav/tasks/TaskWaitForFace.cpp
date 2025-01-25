#include <math.h>
#include "TaskWaitForFace.h"
#include "face_msg/msg/roilist.hpp"
using namespace task_manager_msgs;
using namespace task_manager_lib;
using namespace floor_nav;

TaskIndicator TaskWaitForFace::iterate()
{
    face_msg::msg::roilist & roiarray = env->getFace();

    if (roiarray[0]!=NULL) {
        RCLCPP_INFO(node->get_logger(),"Detected face at %.2f %.2f",roiarray.regions[0].x_offset, roiarray.rois[0].y_offset);
    }
    else {
        RCLCPP_INFO(node->get_logger(),"No face detected");
    }
    return TaskStatus::TASK_RUNNING;
}

DYNAMIC_TASK(TaskFactoryWaitForFace)