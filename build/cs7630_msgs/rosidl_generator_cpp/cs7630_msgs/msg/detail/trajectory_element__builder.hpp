// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cs7630_msgs:msg/TrajectoryElement.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__BUILDER_HPP_
#define CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cs7630_msgs/msg/detail/trajectory_element__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cs7630_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryElement_twist
{
public:
  explicit Init_TrajectoryElement_twist(::cs7630_msgs::msg::TrajectoryElement & msg)
  : msg_(msg)
  {}
  ::cs7630_msgs::msg::TrajectoryElement twist(::cs7630_msgs::msg::TrajectoryElement::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cs7630_msgs::msg::TrajectoryElement msg_;
};

class Init_TrajectoryElement_pose
{
public:
  explicit Init_TrajectoryElement_pose(::cs7630_msgs::msg::TrajectoryElement & msg)
  : msg_(msg)
  {}
  Init_TrajectoryElement_twist pose(::cs7630_msgs::msg::TrajectoryElement::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrajectoryElement_twist(msg_);
  }

private:
  ::cs7630_msgs::msg::TrajectoryElement msg_;
};

class Init_TrajectoryElement_header
{
public:
  Init_TrajectoryElement_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryElement_pose header(::cs7630_msgs::msg::TrajectoryElement::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryElement_pose(msg_);
  }

private:
  ::cs7630_msgs::msg::TrajectoryElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cs7630_msgs::msg::TrajectoryElement>()
{
  return cs7630_msgs::msg::builder::Init_TrajectoryElement_header();
}

}  // namespace cs7630_msgs

#endif  // CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__BUILDER_HPP_
