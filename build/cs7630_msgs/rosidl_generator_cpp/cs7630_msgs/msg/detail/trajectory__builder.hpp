// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cs7630_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define CS7630_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cs7630_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cs7630_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_ts
{
public:
  explicit Init_Trajectory_ts(::cs7630_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::cs7630_msgs::msg::Trajectory ts(::cs7630_msgs::msg::Trajectory::_ts_type arg)
  {
    msg_.ts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cs7630_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_ts header(::cs7630_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_ts(msg_);
  }

private:
  ::cs7630_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cs7630_msgs::msg::Trajectory>()
{
  return cs7630_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace cs7630_msgs

#endif  // CS7630_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
