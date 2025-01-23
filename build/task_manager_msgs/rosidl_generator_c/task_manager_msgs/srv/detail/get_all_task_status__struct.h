// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:srv/GetAllTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__STRUCT_H_
#define TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAllTaskStatus in the package task_manager_msgs.
typedef struct task_manager_msgs__srv__GetAllTaskStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} task_manager_msgs__srv__GetAllTaskStatus_Request;

// Struct for a sequence of task_manager_msgs__srv__GetAllTaskStatus_Request.
typedef struct task_manager_msgs__srv__GetAllTaskStatus_Request__Sequence
{
  task_manager_msgs__srv__GetAllTaskStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__srv__GetAllTaskStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'running_tasks'
// Member 'zombie_tasks'
#include "task_manager_msgs/msg/detail/task_status__struct.h"

/// Struct defined in srv/GetAllTaskStatus in the package task_manager_msgs.
typedef struct task_manager_msgs__srv__GetAllTaskStatus_Response
{
  task_manager_msgs__msg__TaskStatus__Sequence running_tasks;
  task_manager_msgs__msg__TaskStatus__Sequence zombie_tasks;
} task_manager_msgs__srv__GetAllTaskStatus_Response;

// Struct for a sequence of task_manager_msgs__srv__GetAllTaskStatus_Response.
typedef struct task_manager_msgs__srv__GetAllTaskStatus_Response__Sequence
{
  task_manager_msgs__srv__GetAllTaskStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__srv__GetAllTaskStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__GET_ALL_TASK_STATUS__STRUCT_H_
