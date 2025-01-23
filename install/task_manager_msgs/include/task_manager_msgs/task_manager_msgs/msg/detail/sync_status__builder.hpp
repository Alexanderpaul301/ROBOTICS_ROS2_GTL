// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/SyncStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/sync_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncStatus_status
{
public:
  explicit Init_SyncStatus_status(::task_manager_msgs::msg::SyncStatus & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::msg::SyncStatus status(::task_manager_msgs::msg::SyncStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::SyncStatus msg_;
};

class Init_SyncStatus_header
{
public:
  Init_SyncStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncStatus_status header(::task_manager_msgs::msg::SyncStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SyncStatus_status(msg_);
  }

private:
  ::task_manager_msgs::msg::SyncStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::SyncStatus>()
{
  return task_manager_msgs::msg::builder::Init_SyncStatus_header();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__BUILDER_HPP_
