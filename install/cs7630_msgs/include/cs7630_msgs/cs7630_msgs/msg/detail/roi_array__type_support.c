// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cs7630_msgs/msg/detail/roi_array__rosidl_typesupport_introspection_c.h"
#include "cs7630_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cs7630_msgs/msg/detail/roi_array__functions.h"
#include "cs7630_msgs/msg/detail/roi_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rois`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `rois`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cs7630_msgs__msg__ROIArray__init(message_memory);
}

void cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_fini_function(void * message_memory)
{
  cs7630_msgs__msg__ROIArray__fini(message_memory);
}

size_t cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__size_function__ROIArray__rois(
  const void * untyped_member)
{
  const sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (const sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return member->size;
}

const void * cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_const_function__ROIArray__rois(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (const sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_function__ROIArray__rois(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return &member->data[index];
}

void cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__fetch_function__ROIArray__rois(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__RegionOfInterest * item =
    ((const sensor_msgs__msg__RegionOfInterest *)
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_const_function__ROIArray__rois(untyped_member, index));
  sensor_msgs__msg__RegionOfInterest * value =
    (sensor_msgs__msg__RegionOfInterest *)(untyped_value);
  *value = *item;
}

void cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__assign_function__ROIArray__rois(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__RegionOfInterest * item =
    ((sensor_msgs__msg__RegionOfInterest *)
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_function__ROIArray__rois(untyped_member, index));
  const sensor_msgs__msg__RegionOfInterest * value =
    (const sensor_msgs__msg__RegionOfInterest *)(untyped_value);
  *item = *value;
}

bool cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__resize_function__ROIArray__rois(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  sensor_msgs__msg__RegionOfInterest__Sequence__fini(member);
  return sensor_msgs__msg__RegionOfInterest__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cs7630_msgs__msg__ROIArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rois",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cs7630_msgs__msg__ROIArray, rois),  // bytes offset in struct
    NULL,  // default value
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__size_function__ROIArray__rois,  // size() function pointer
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_const_function__ROIArray__rois,  // get_const(index) function pointer
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__get_function__ROIArray__rois,  // get(index) function pointer
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__fetch_function__ROIArray__rois,  // fetch(index, &value) function pointer
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__assign_function__ROIArray__rois,  // assign(index, value) function pointer
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__resize_function__ROIArray__rois  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_members = {
  "cs7630_msgs__msg",  // message namespace
  "ROIArray",  // message name
  2,  // number of fields
  sizeof(cs7630_msgs__msg__ROIArray),
  cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_member_array,  // message members
  cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_init_function,  // function to initialize message memory (memory has to be allocated)
  cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_type_support_handle = {
  0,
  &cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cs7630_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cs7630_msgs, msg, ROIArray)() {
  cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_type_support_handle.typesupport_identifier) {
    cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cs7630_msgs__msg__ROIArray__rosidl_typesupport_introspection_c__ROIArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
