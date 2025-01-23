#include "TaskWaitForFace.h"
#include "face_msgs/msg/face.hpp"
#include "rclcpp/rclcpp.hpp"
using namespace task_manager_msgs;
using namespace task_manager_lib;
using namespace task_manager_turtlesim;

void TaskWaitForFaceConfig::update() {
    face_id = get<int>("face_id");
    
}

TaskIndicator TaskWaitForFace::iterate()
{
    cfg->update();
    const face_msgs::msg::Face & face = env->getFace();



}