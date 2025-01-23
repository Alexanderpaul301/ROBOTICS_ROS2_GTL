// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:srv/GetAllTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__BUILDER_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/srv/detail/get_all_task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::GetAllTaskStatus_Request>()
{
  return ::task_manager_msgs::srv::GetAllTaskStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace task_manager_msgs


namespace task_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAllTaskStatus_Response_zombie_tasks
{
public:
  explicit Init_GetAllTaskStatus_Response_zombie_tasks(::task_manager_msgs::srv::GetAllTaskStatus_Response & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::srv::GetAllTaskStatus_Response zombie_tasks(::task_manager_msgs::srv::GetAllTaskStatus_Response::_zombie_tasks_type arg)
  {
    msg_.zombie_tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::srv::GetAllTaskStatus_Response msg_;
};

class Init_GetAllTaskStatus_Response_running_tasks
{
public:
  Init_GetAllTaskStatus_Response_running_tasks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAllTaskStatus_Response_zombie_tasks running_tasks(::task_manager_msgs::srv::GetAllTaskStatus_Response::_running_tasks_type arg)
  {
    msg_.running_tasks = std::move(arg);
    return Init_GetAllTaskStatus_Response_zombie_tasks(msg_);
  }

private:
  ::task_manager_msgs::srv::GetAllTaskStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::GetAllTaskStatus_Response>()
{
  return task_manager_msgs::srv::builder::Init_GetAllTaskStatus_Response_running_tasks();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__BUILDER_HPP_
