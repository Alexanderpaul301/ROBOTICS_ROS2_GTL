// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#ifndef CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_
#define CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_

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
// Member 'rois'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/ROIArray in the package cs7630_msgs.
/**
  * ROIArray.msg
 */
typedef struct cs7630_msgs__msg__ROIArray
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__RegionOfInterest__Sequence rois;
} cs7630_msgs__msg__ROIArray;

// Struct for a sequence of cs7630_msgs__msg__ROIArray.
typedef struct cs7630_msgs__msg__ROIArray__Sequence
{
  cs7630_msgs__msg__ROIArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cs7630_msgs__msg__ROIArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CS7630_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_
