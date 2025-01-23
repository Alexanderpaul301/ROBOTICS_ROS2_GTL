// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "task_manager_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "task_manager_msgs/msg/detail/task_config__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace task_manager_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task_manager_msgs
cdr_serialize(
  const task_manager_msgs::msg::TaskConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task_manager_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  task_manager_msgs::msg::TaskConfig & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task_manager_msgs
get_serialized_size(
  const task_manager_msgs::msg::TaskConfig & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task_manager_msgs
max_serialized_size_TaskConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace task_manager_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_task_manager_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, task_manager_msgs, msg, TaskConfig)();

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
