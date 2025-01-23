// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
#define TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TASK_NEWBORN'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_NEWBORN = 0
};

/// Constant 'TASK_CONFIGURED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_CONFIGURED = 1
};

/// Constant 'TASK_INITIALISED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_INITIALISED = 2
};

/// Constant 'TASK_RUNNING'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_RUNNING = 3
};

/// Constant 'TASK_COMPLETED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_COMPLETED = 4
};

/// Constant 'TASK_TERMINATED'.
/**
  * To be used as a bit mask
 */
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_TERMINATED = 128
};

/// Constant 'TASK_INTERRUPTED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_INTERRUPTED = 6
};

/// Constant 'TASK_FAILED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_FAILED = 7
};

/// Constant 'TASK_TIMEOUT'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_TIMEOUT = 8
};

/// Constant 'TASK_CONFIGURATION_FAILED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_CONFIGURATION_FAILED = 9
};

/// Constant 'TASK_INITIALISATION_FAILED'.
enum
{
  task_manager_msgs__msg__TaskStatus__TASK_INITIALISATION_FAILED = 10
};

// Include directives for member types
// Member 'name'
// Member 'status_string'
#include "rosidl_runtime_c/string.h"
// Member 'status_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'plist'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in msg/TaskStatus in the package task_manager_msgs.
typedef struct task_manager_msgs__msg__TaskStatus
{
  uint32_t id;
  rosidl_runtime_c__String name;
  uint8_t status;
  rosidl_runtime_c__String status_string;
  builtin_interfaces__msg__Time status_time;
  rcl_interfaces__msg__Parameter__Sequence plist;
} task_manager_msgs__msg__TaskStatus;

// Struct for a sequence of task_manager_msgs__msg__TaskStatus.
typedef struct task_manager_msgs__msg__TaskStatus__Sequence
{
  task_manager_msgs__msg__TaskStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager_msgs__msg__TaskStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
