// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/TaskParameter.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__STRUCT_H_

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
// Member 'type'
// Member 'min'
// Member 'max'
// Member 'dflt'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TaskParameter in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__TaskParameter
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String min;
  rosidl_runtime_c__String max;
  rosidl_runtime_c__String dflt;
  rosidl_runtime_c__String value;
} task_manager_msgs__msg__TaskParameter;

// Struct for a sequence of task_manager_msgs__msg__TaskParameter.
typedef struct task_manager_msgs__msg__TaskParameter__Sequence
{
  task_manager_msgs__msg__TaskParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__TaskParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_PARAMETER__STRUCT_H_
