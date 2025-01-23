// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice

#ifndef FACE_MSG__MSG__DETAIL__ROILIST__STRUCT_H_
#define FACE_MSG__MSG__DETAIL__ROILIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'regions'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/Roilist in the package face_msg.
/**
  * RoiList.msg
 */
typedef struct face_msg__msg__Roilist
{
  sensor_msgs__msg__RegionOfInterest__Sequence regions;
} face_msg__msg__Roilist;

// Struct for a sequence of face_msg__msg__Roilist.
typedef struct face_msg__msg__Roilist__Sequence
{
  face_msg__msg__Roilist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} face_msg__msg__Roilist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSG__MSG__DETAIL__ROILIST__STRUCT_H_
