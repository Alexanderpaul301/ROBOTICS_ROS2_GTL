// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:srv/StopTask.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__BUILDER_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/srv/detail/stop_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_StopTask_Request_id
{
public:
  Init_StopTask_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_manager_msgs::srv::StopTask_Request id(::task_manager_msgs::srv::StopTask_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::srv::StopTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::StopTask_Request>()
{
  return task_manager_msgs::srv::builder::Init_StopTask_Request_id();
}

}  // namespace task_manager_msgs


namespace task_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_StopTask_Response_id
{
public:
  Init_StopTask_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_manager_msgs::srv::StopTask_Response id(::task_manager_msgs::srv::StopTask_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::srv::StopTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::StopTask_Response>()
{
  return task_manager_msgs::srv::builder::Init_StopTask_Response_id();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__BUILDER_HPP_
