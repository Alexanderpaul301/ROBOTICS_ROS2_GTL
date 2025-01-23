// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:srv/StartTask.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__BUILDER_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/srv/detail/start_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTask_Request_config
{
public:
  explicit Init_StartTask_Request_config(::task_manager_msgs::srv::StartTask_Request & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::srv::StartTask_Request config(::task_manager_msgs::srv::StartTask_Request::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::srv::StartTask_Request msg_;
};

class Init_StartTask_Request_name
{
public:
  Init_StartTask_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartTask_Request_config name(::task_manager_msgs::srv::StartTask_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_StartTask_Request_config(msg_);
  }

private:
  ::task_manager_msgs::srv::StartTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::StartTask_Request>()
{
  return task_manager_msgs::srv::builder::Init_StartTask_Request_name();
}

}  // namespace task_manager_msgs


namespace task_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTask_Response_id
{
public:
  Init_StartTask_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_manager_msgs::srv::StartTask_Response id(::task_manager_msgs::srv::StartTask_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::srv::StartTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::srv::StartTask_Response>()
{
  return task_manager_msgs::srv::builder::Init_StartTask_Response_id();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__BUILDER_HPP_
