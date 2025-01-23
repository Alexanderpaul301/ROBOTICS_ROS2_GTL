// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/SyncStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SyncStatus in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__SyncStatus
{
  std_msgs__msg__Header header;
  int16_t status;
} task_manager_msgs__msg__SyncStatus;

// Struct for a sequence of task_manager_msgs__msg__SyncStatus.
typedef struct task_manager_msgs__msg__SyncStatus__Sequence
{
  task_manager_msgs__msg__SyncStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__SyncStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__SYNC_STATUS__STRUCT_H_
