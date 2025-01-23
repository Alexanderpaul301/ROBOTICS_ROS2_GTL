// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice

#ifndef FACE_MSG__MSG__DETAIL__ROILIST__TRAITS_HPP_
#define FACE_MSG__MSG__DETAIL__ROILIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "face_msg/msg/detail/roilist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'regions'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace face_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Roilist & msg,
  std::ostream & out)
{
  out << "{";
  // member: regions
  {
    if (msg.regions.size() == 0) {
      out << "regions: []";
    } else {
      out << "regions: [";
      size_t pending_items = msg.regions.size();
      for (auto item : msg.regions) {
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
  const Roilist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: regions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.regions.size() == 0) {
      out << "regions: []\n";
    } else {
      out << "regions:\n";
      for (auto item : msg.regions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Roilist & msg, bool use_flow_style = false)
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

}  // namespace face_msg

namespace rosidl_generator_traits
{

[[deprecated("use face_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const face_msg::msg::Roilist & msg,
  std::ostream & out, size_t indentation = 0)
{
  face_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use face_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const face_msg::msg::Roilist & msg)
{
  return face_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<face_msg::msg::Roilist>()
{
  return "face_msg::msg::Roilist";
}

template<>
inline const char * name<face_msg::msg::Roilist>()
{
  return "face_msg/msg/Roilist";
}

template<>
struct has_fixed_size<face_msg::msg::Roilist>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<face_msg::msg::Roilist>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<face_msg::msg::Roilist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FACE_MSG__MSG__DETAIL__ROILIST__TRAITS_HPP_
