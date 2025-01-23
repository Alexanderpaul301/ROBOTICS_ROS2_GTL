// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/task_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskDescription_config
{
public:
  explicit Init_TaskDescription_config(::task_manager_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::msg::TaskDescription config(::task_manager_msgs::msg::TaskDescription::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_periodic
{
public:
  explicit Init_TaskDescription_periodic(::task_manager_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_config periodic(::task_manager_msgs::msg::TaskDescription::_periodic_type arg)
  {
    msg_.periodic = std::move(arg);
    return Init_TaskDescription_config(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_description
{
public:
  explicit Init_TaskDescription_description(::task_manager_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_periodic description(::task_manager_msgs::msg::TaskDescription::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_TaskDescription_periodic(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_name
{
public:
  Init_TaskDescription_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskDescription_description name(::task_manager_msgs::msg::TaskDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TaskDescription_description(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::TaskDescription>()
{
  return task_manager_msgs::msg::builder::Init_TaskDescription_name();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_
