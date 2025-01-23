// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/TaskParameter.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/task_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskParameter_value
{
public:
  explicit Init_TaskParameter_value(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::msg::TaskParameter value(::task_manager_msgs::msg::TaskParameter::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_dflt
{
public:
  explicit Init_TaskParameter_dflt(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  Init_TaskParameter_value dflt(::task_manager_msgs::msg::TaskParameter::_dflt_type arg)
  {
    msg_.dflt = std::move(arg);
    return Init_TaskParameter_value(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_max
{
public:
  explicit Init_TaskParameter_max(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  Init_TaskParameter_dflt max(::task_manager_msgs::msg::TaskParameter::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_TaskParameter_dflt(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_min
{
public:
  explicit Init_TaskParameter_min(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  Init_TaskParameter_max min(::task_manager_msgs::msg::TaskParameter::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_TaskParameter_max(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_type
{
public:
  explicit Init_TaskParameter_type(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  Init_TaskParameter_min type(::task_manager_msgs::msg::TaskParameter::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TaskParameter_min(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_description
{
public:
  explicit Init_TaskParameter_description(::task_manager_msgs::msg::TaskParameter & msg)
  : msg_(msg)
  {}
  Init_TaskParameter_type description(::task_manager_msgs::msg::TaskParameter::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_TaskParameter_type(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

class Init_TaskParameter_name
{
public:
  Init_TaskParameter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskParameter_description name(::task_manager_msgs::msg::TaskParameter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TaskParameter_description(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::TaskParameter>()
{
  return task_manager_msgs::msg::builder::Init_TaskParameter_name();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__BUILDER_HPP_
