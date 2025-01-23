// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:msg/TaskParameter.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__TRAITS_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/msg/detail/task_parameter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskParameter & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << ", ";
  }

  // member: dflt
  {
    out << "dflt: ";
    rosidl_generator_traits::value_to_yaml(msg.dflt, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }

  // member: dflt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dflt: ";
    rosidl_generator_traits::value_to_yaml(msg.dflt, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskParameter & msg, bool use_flow_style = false)
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
  const task_manager_msgs::msg::TaskParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::msg::TaskParameter & msg)
{
  return task_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::msg::TaskParameter>()
{
  return "task_manager_msgs::msg::TaskParameter";
}

template<>
inline const char * name<task_manager_msgs::msg::TaskParameter>()
{
  return "task_manager_msgs/msg/TaskParameter";
}

template<>
struct has_fixed_size<task_manager_msgs::msg::TaskParameter>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::msg::TaskParameter>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::msg::TaskParameter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__TRAITS_HPP_
