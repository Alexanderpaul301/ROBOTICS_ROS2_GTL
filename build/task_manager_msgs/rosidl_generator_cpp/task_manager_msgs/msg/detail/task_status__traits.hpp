// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'plist'
#include "rcl_interfaces/msg/detail/parameter__traits.hpp"

namespace task_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: status_string
  {
    out << "status_string: ";
    rosidl_generator_traits::value_to_yaml(msg.status_string, out);
    out << ", ";
  }

  // member: status_time
  {
    out << "status_time: ";
    to_flow_style_yaml(msg.status_time, out);
    out << ", ";
  }

  // member: plist
  {
    if (msg.plist.size() == 0) {
      out << "plist: []";
    } else {
      out << "plist: [";
      size_t pending_items = msg.plist.size();
      for (auto item : msg.plist) {
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
  const TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: status_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_string: ";
    rosidl_generator_traits::value_to_yaml(msg.status_string, out);
    out << "\n";
  }

  // member: status_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_time:\n";
    to_block_style_yaml(msg.status_time, out, indentation + 2);
  }

  // member: plist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.plist.size() == 0) {
      out << "plist: []\n";
    } else {
      out << "plist:\n";
      for (auto item : msg.plist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskStatus & msg, bool use_flow_style = false)
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
  const task_manager_msgs::msg::TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::msg::TaskStatus & msg)
{
  return task_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::msg::TaskStatus>()
{
  return "task_manager_msgs::msg::TaskStatus";
}

template<>
inline const char * name<task_manager_msgs::msg::TaskStatus>()
{
  return "task_manager_msgs/msg/TaskStatus";
}

template<>
struct has_fixed_size<task_manager_msgs::msg::TaskStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::msg::TaskStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::msg::TaskStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
