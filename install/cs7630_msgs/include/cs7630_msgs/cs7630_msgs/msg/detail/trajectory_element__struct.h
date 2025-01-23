// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cs7630_msgs:msg/TrajectoryElement.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__STRUCT_H_
#define CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TrajectoryElement in the package cs7630_msgs.
typedef struct cs7630_msgs__msg__TrajectoryElement
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
} cs7630_msgs__msg__TrajectoryElement;

// Struct for a sequence of cs7630_msgs__msg__TrajectoryElement.
typedef struct cs7630_msgs__msg__TrajectoryElement__Sequence
{
  cs7630_msgs__msg__TrajectoryElement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cs7630_msgs__msg__TrajectoryElement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CS7630_MSGS__MSG__DETAIL__TRAJECTORY_ELEMENT__STRUCT_H_
