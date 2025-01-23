// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager_msgs:srv/StartTask.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__TRAITS_HPP_
#define TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_manager_msgs/srv/detail/start_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'config'
#include "rcl_interfaces/msg/detail/parameter__traits.hpp"

namespace task_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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
  const StartTask_Request & msg,
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

inline std::string to_yaml(const StartTask_Request & msg, bool use_flow_style = false)
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
  const task_manager_msgs::srv::StartTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::srv::StartTask_Request & msg)
{
  return task_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::srv::StartTask_Request>()
{
  return "task_manager_msgs::srv::StartTask_Request";
}

template<>
inline const char * name<task_manager_msgs::srv::StartTask_Request>()
{
  return "task_manager_msgs/srv/StartTask_Request";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::StartTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager_msgs::srv::StartTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager_msgs::srv::StartTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace task_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartTask_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartTask_Response & msg, bool use_flow_style = false)
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
  const task_manager_msgs::srv::StartTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_manager_msgs::srv::StartTask_Response & msg)
{
  return task_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_manager_msgs::srv::StartTask_Response>()
{
  return "task_manager_msgs::srv::StartTask_Response";
}

template<>
inline const char * name<task_manager_msgs::srv::StartTask_Response>()
{
  return "task_manager_msgs/srv/StartTask_Response";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::StartTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<task_manager_msgs::srv::StartTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<task_manager_msgs::srv::StartTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_manager_msgs::srv::StartTask>()
{
  return "task_manager_msgs::srv::StartTask";
}

template<>
inline const char * name<task_manager_msgs::srv::StartTask>()
{
  return "task_manager_msgs/srv/StartTask";
}

template<>
struct has_fixed_size<task_manager_msgs::srv::StartTask>
  : std::integral_constant<
    bool,
    has_fixed_size<task_manager_msgs::srv::StartTask_Request>::value &&
    has_fixed_size<task_manager_msgs::srv::StartTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_manager_msgs::srv::StartTask>
  : std::integral_constant<
    bool,
    has_bounded_size<task_manager_msgs::srv::StartTask_Request>::value &&
    has_bounded_size<task_manager_msgs::srv::StartTask_Response>::value
  >
{
};

template<>
struct is_service<task_manager_msgs::srv::StartTask>
  : std::true_type
{
};

template<>
struct is_service_request<task_manager_msgs::srv::StartTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_manager_msgs::srv::StartTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__START_TASK__TRAITS_HPP_
