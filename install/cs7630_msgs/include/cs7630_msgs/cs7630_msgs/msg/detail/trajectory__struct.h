// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cs7630_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define CS7630_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

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
// Member 'ts'
#include "cs7630_msgs/msg/detail/trajectory_element__struct.h"

/// Struct defined in msg/Trajectory in the package cs7630_msgs.
typedef struct cs7630_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  cs7630_msgs__msg__TrajectoryElement__Sequence ts;
} cs7630_msgs__msg__Trajectory;

// Struct for a sequence of cs7630_msgs__msg__Trajectory.
typedef struct cs7630_msgs__msg__Trajectory__Sequence
{
  cs7630_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cs7630_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CS7630_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
