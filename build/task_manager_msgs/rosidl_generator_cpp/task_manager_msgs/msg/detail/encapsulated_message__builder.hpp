// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager_msgs:msg/EncapsulatedMessage.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__BUILDER_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_manager_msgs/msg/detail/encapsulated_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_EncapsulatedMessage_data
{
public:
  explicit Init_EncapsulatedMessage_data(::task_manager_msgs::msg::EncapsulatedMessage & msg)
  : msg_(msg)
  {}
  ::task_manager_msgs::msg::EncapsulatedMessage data(::task_manager_msgs::msg::EncapsulatedMessage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager_msgs::msg::EncapsulatedMessage msg_;
};

class Init_EncapsulatedMessage_md5sum
{
public:
  explicit Init_EncapsulatedMessage_md5sum(::task_manager_msgs::msg::EncapsulatedMessage & msg)
  : msg_(msg)
  {}
  Init_EncapsulatedMessage_data md5sum(::task_manager_msgs::msg::EncapsulatedMessage::_md5sum_type arg)
  {
    msg_.md5sum = std::move(arg);
    return Init_EncapsulatedMessage_data(msg_);
  }

private:
  ::task_manager_msgs::msg::EncapsulatedMessage msg_;
};

class Init_EncapsulatedMessage_type
{
public:
  Init_EncapsulatedMessage_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncapsulatedMessage_md5sum type(::task_manager_msgs::msg::EncapsulatedMessage::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EncapsulatedMessage_md5sum(msg_);
  }

private:
  ::task_manager_msgs::msg::EncapsulatedMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager_msgs::msg::EncapsulatedMessage>()
{
  return task_manager_msgs::msg::builder::Init_EncapsulatedMessage_type();
}

}  // namespace task_manager_msgs

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__BUILDER_HPP_
