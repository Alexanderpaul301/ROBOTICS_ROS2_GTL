// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'config'
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"

/// Struct defined in msg/TaskDescription in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__TaskDescription
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String description;
  bool periodic;
  rcl_interfaces__msg__ParameterDescriptor__Sequence config;
} task_manager_msgs__msg__TaskDescription;

// Struct for a sequence of task_manager_msgs__msg__TaskDescription.
typedef struct task_manager_msgs__msg__TaskDescription__Sequence
{
  task_manager_msgs__msg__TaskDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__TaskDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_DESCRIPTION__STRUCT_H_
