// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_
#define CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cs7630_msgs/msg/detail/roi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cs7630_msgs
{

namespace msg
{

namespace builder
{

class Init_ROIArray_rois
{
public:
  explicit Init_ROIArray_rois(::cs7630_msgs::msg::ROIArray & msg)
  : msg_(msg)
  {}
  ::cs7630_msgs::msg::ROIArray rois(::cs7630_msgs::msg::ROIArray::_rois_type arg)
  {
    msg_.rois = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cs7630_msgs::msg::ROIArray msg_;
};

class Init_ROIArray_header
{
public:
  Init_ROIArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ROIArray_rois header(::cs7630_msgs::msg::ROIArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ROIArray_rois(msg_);
  }

private:
  ::cs7630_msgs::msg::ROIArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cs7630_msgs::msg::ROIArray>()
{
  return cs7630_msgs::msg::builder::Init_ROIArray_header();
}

}  // namespace cs7630_msgs

#endif  // CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__BUILDER_HPP_
