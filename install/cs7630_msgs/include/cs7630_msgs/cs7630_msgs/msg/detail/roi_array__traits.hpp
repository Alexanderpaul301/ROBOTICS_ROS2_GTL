// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__TRAITS_HPP_
#define CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cs7630_msgs/msg/detail/roi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rois'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace cs7630_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ROIArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rois
  {
    if (msg.rois.size() == 0) {
      out << "rois: []";
    } else {
      out << "rois: [";
      size_t pending_items = msg.rois.size();
      for (auto item : msg.rois) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ROIArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: rois
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rois.size() == 0) {
      out << "rois: []\n";
    } else {
      out << "rois:\n";
      for (auto item : msg.rois) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ROIArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cs7630_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cs7630_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cs7630_msgs::msg::ROIArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  cs7630_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cs7630_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cs7630_msgs::msg::ROIArray & msg)
{
  return cs7630_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cs7630_msgs::msg::ROIArray>()
{
  return "cs7630_msgs::msg::ROIArray";
}

template<>
inline const char * name<cs7630_msgs::msg::ROIArray>()
{
  return "cs7630_msgs/msg/ROIArray";
}

template<>
struct has_fixed_size<cs7630_msgs::msg::ROIArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cs7630_msgs::msg::ROIArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cs7630_msgs::msg::ROIArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__TRAITS_HPP_
