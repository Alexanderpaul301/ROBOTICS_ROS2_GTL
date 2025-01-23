// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskStatus_plist
{
public:
  explicit Init_TaskStatus_plist(::task_manager_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::msg::TaskStatus plist(::task_manager_msgs::msg::TaskStatus::_plist_type arg)
  {
    msg_.plist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_status_time
{
public:
  explicit Init_TaskStatus_status_time(::task_manager_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_plist status_time(::task_manager_msgs::msg::TaskStatus::_status_time_type arg)
  {
    msg_.status_time = std::move(arg);
    return Init_TaskStatus_plist(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_status_string
{
public:
  explicit Init_TaskStatus_status_string(::task_manager_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_status_time status_string(::task_manager_msgs::msg::TaskStatus::_status_string_type arg)
  {
    msg_.status_string = std::move(arg);
    return Init_TaskStatus_status_time(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_status
{
public:
  explicit Init_TaskStatus_status(::task_manager_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_status_string status(::task_manager_msgs::msg::TaskStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskStatus_status_string(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_name
{
public:
  explicit Init_TaskStatus_name(::task_manager_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_status name(::task_manager_msgs::msg::TaskStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TaskStatus_status(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_id
{
public:
  Init_TaskStatus_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskStatus_name id(::task_manager_msgs::msg::TaskStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TaskStatus_name(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::TaskStatus>()
{
  return task_manager_msgs::msg::builder::Init_TaskStatus_id();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
