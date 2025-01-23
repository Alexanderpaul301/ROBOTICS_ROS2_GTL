// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:srv/StopTask.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__STRUCT_H_
#define TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StopTask in the package task_manager_msgs.
typedef struct task_manager_msgs__srv__StopTask_Request
{
  int32_t id;
} task_manager_msgs__srv__StopTask_Request;

// Struct for a sequence of task_manager_msgs__srv__StopTask_Request.
typedef struct task_manager_msgs__srv__StopTask_Request__Sequence
{
  task_manager_msgs__srv__StopTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__srv__StopTask_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StopTask in the package task_manager_msgs.
typedef struct task_manager_msgs__srv__StopTask_Response
{
  int32_t id;
} task_manager_msgs__srv__StopTask_Response;

// Struct for a sequence of task_manager_msgs__srv__StopTask_Response.
typedef struct task_manager_msgs__srv__StopTask_Response__Sequence
{
  task_manager_msgs__srv__StopTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__srv__StopTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__SRV__DETAIL__STOP_TASK__STRUCT_H_
