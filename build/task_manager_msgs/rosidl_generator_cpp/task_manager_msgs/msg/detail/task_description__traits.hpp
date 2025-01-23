// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/msg/detail/task_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'config'
#include "rcl_interfaces/msg/detail/parameter_descriptor__traits.hpp"

namespace task_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskDescription & msg,
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

  // member: periodic
  {
    out << "periodic: ";
    rosidl_generator_traits::value_to_yaml(msg.periodic, out);
    out << ", ";
  }

  // member: config
  {
    if (msg.config.size() == 0) {
      out << "config: []";
    } else {
      out << "config: [";
      size_t pending_items = msg.config.size();
      for (auto item : msg.config) {
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
  const TaskDescription & msg,
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

  // member: periodic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periodic: ";
    rosidl_generator_traits::value_to_yaml(msg.periodic, out);
    out << "\n";
  }

  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.config.size() == 0) {
      out << "config: []\n";
    } else {
      out << "config:\n";
      for (auto item : msg.config) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskDescription & msg, bool use_flow_style = false)
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
  const task_manager_msgs::msg::TaskDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::msg::TaskDescription & msg)
{
  return task_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::msg::TaskDescription>()
{
  return "task_manager_msgs::msg::TaskDescription";
}

template<>
inline const char * name<task_manager_msgs::msg::TaskDescription>()
{
  return "task_manager_msgs/msg/TaskDescription";
}

template<>
struct has_fixed_size<task_manager_msgs::msg::TaskDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::msg::TaskDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::msg::TaskDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
