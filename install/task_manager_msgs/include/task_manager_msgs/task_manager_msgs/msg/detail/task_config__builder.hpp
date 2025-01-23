// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/task_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskConfig_plist
{
public:
  Init_TaskConfig_plist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_manager_msgs::msg::TaskConfig plist(::task_manager_msgs::msg::TaskConfig::_plist_type arg)
  {
    msg_.plist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::TaskConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::TaskConfig>()
{
  return task_manager_msgs::msg::builder::Init_TaskConfig_plist();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__BUILDER_HPP_
