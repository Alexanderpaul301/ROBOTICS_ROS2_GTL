// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plist'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in msg/TaskConfig in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__TaskConfig
{
  rcl_interfaces__msg__Parameter__Sequence plist;
} task_manager_msgs__msg__TaskConfig;

// Struct for a sequence of task_manager_msgs__msg__TaskConfig.
typedef struct task_manager_msgs__msg__TaskConfig__Sequence
{
  task_manager_msgs__msg__TaskConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__TaskConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_CONFIG__STRUCT_H_
