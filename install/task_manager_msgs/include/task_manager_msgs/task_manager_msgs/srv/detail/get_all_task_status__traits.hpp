// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:srv/GetAllTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__TRAITS_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/srv/detail/get_all_task_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAllTaskStatus_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAllTaskStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAllTaskStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_manager_msgs::srv::GetAllTaskStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::srv::GetAllTaskStatus_Request & msg)
{
  return task_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::srv::GetAllTaskStatus_Request>()
{
  return "task_manager_msgs::srv::GetAllTaskStatus_Request";
}

template<>
inline const char * name<task_manager_msgs::srv::GetAllTaskStatus_Request>()
{
  return "task_manager_msgs/srv/GetAllTaskStatus_Request";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::GetAllTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<task_manager_msgs::srv::GetAllTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<task_manager_msgs::srv::GetAllTaskStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'running_tasks'
// Member 'zombie_tasks'
#include "task_manager_msgs/msg/detail/task_status__traits.hpp"

namespace task_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAllTaskStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: running_tasks
  {
    if (msg.running_tasks.size() == 0) {
      out << "running_tasks: []";
    } else {
      out << "running_tasks: [";
      size_t pending_items = msg.running_tasks.size();
      for (auto item : msg.running_tasks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: zombie_tasks
  {
    if (msg.zombie_tasks.size() == 0) {
      out << "zombie_tasks: []";
    } else {
      out << "zombie_tasks: [";
      size_t pending_items = msg.zombie_tasks.size();
      for (auto item : msg.zombie_tasks) {
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
  const GetAllTaskStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: running_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.running_tasks.size() == 0) {
      out << "running_tasks: []\n";
    } else {
      out << "running_tasks:\n";
      for (auto item : msg.running_tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: zombie_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.zombie_tasks.size() == 0) {
      out << "zombie_tasks: []\n";
    } else {
      out << "zombie_tasks:\n";
      for (auto item : msg.zombie_tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAllTaskStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_manager_msgs::srv::GetAllTaskStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::srv::GetAllTaskStatus_Response & msg)
{
  return task_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::srv::GetAllTaskStatus_Response>()
{
  return "task_manager_msgs::srv::GetAllTaskStatus_Response";
}

template<>
inline const char * name<task_manager_msgs::srv::GetAllTaskStatus_Response>()
{
  return "task_manager_msgs/srv/GetAllTaskStatus_Response";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::GetAllTaskStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::srv::GetAllTaskStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::srv::GetAllTaskStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_manager_msgs::srv::GetAllTaskStatus>()
{
  return "task_manager_msgs::srv::GetAllTaskStatus";
}

template<>
inline const char * name<task_manager_msgs::srv::GetAllTaskStatus>()
{
  return "task_manager_msgs/srv/GetAllTaskStatus";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::GetAllTaskStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<task_manager_msgs::srv::GetAllTaskStatus_Request>::value &&
    has_fixed_size<task_manager_msgs::srv::GetAllTaskStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_manager_msgs::srv::GetAllTaskStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<task_manager_msgs::srv::GetAllTaskStatus_Request>::value &&
    has_bounded_size<task_manager_msgs::srv::GetAllTaskStatus_Response>::value
  >
{
};

template<>
struct is_service<task_manager_msgs::srv::GetAllTaskStatus>
  : std::true_type
{
};

template<>
struct is_service_request<task_manager_msgs::srv::GetAllTaskStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_manager_msgs::srv::GetAllTaskStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__TRAITS_HPP_
