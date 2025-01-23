// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/EncapsulatedMessage.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'md5sum'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EncapsulatedMessage in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__EncapsulatedMessage
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String md5sum;
  rosidl_runtime_c__String data;
} task_manager_msgs__msg__EncapsulatedMessage;

// Struct for a sequence of task_manager_msgs__msg__EncapsulatedMessage.
typedef struct task_manager_msgs__msg__EncapsulatedMessage__Sequence
{
  task_manager_msgs__msg__EncapsulatedMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__EncapsulatedMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__ENCAPSULATED_MESSAGE__STRUCT_H_
