// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:msg/EncapsulatedMessage.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__TRAITS_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/msg/detail/encapsulated_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncapsulatedMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: md5sum
  {
    out << "md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.md5sum, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncapsulatedMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: md5sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5sum: ";
    rosidl_generator_traits::value_to_yaml(msg.md5sum, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncapsulatedMessage & msg, bool use_flow_style = false)
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

}  // namespace task_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_manager_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_manager_msgs::msg::EncapsulatedMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::msg::EncapsulatedMessage & msg)
{
  return task_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::msg::EncapsulatedMessage>()
{
  return "task_manager_msgs::msg::EncapsulatedMessage";
}

template<>
inline const char * name<task_manager_msgs::msg::EncapsulatedMessage>()
{
  return "task_manager_msgs/msg/EncapsulatedMessage";
}

template<>
struct has_fixed_size<task_manager_msgs::msg::EncapsulatedMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::msg::EncapsulatedMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::msg::EncapsulatedMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__TRAITS_HPP_
