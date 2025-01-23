// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice

#ifndef FACE_MSG__MSG__DETAIL__ROILIST__BUILDER_HPP_
#define FACE_MSG__MSG__DETAIL__ROILIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "face_msg/msg/detail/roilist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace face_msg
{

namespace msg
{

namespace builder
{

class Init_Roilist_regions
{
public:
  Init_Roilist_regions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::face_msg::msg::Roilist regions(::face_msg::msg::Roilist::_regions_type arg)
  {
    msg_.regions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::face_msg::msg::Roilist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::face_msg::msg::Roilist>()
{
  return face_msg::msg::builder::Init_Roilist_regions();
}

}  // namespace face_msg

#endif  // FACE_MSG__MSG__DETAIL__ROILIST__BUILDER_HPP_
