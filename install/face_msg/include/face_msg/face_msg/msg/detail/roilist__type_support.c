// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "face_msg/msg/detail/roilist__rosidl_typesupport_introspection_c.h"
#include "face_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "face_msg/msg/detail/roilist__functions.h"
#include "face_msg/msg/detail/roilist__struct.h"


// Include directives for member types
// Member `regions`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `regions`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  face_msg__msg__Roilist__init(message_memory);
}

void face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_fini_function(void * message_memory)
{
  face_msg__msg__Roilist__fini(message_memory);
}

size_t face_msg__msg__Roilist__rosidl_typesupport_introspection_c__size_function__Roilist__regions(
  const void * untyped_member)
{
  const sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (const sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return member->size;
}

const void * face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_const_function__Roilist__regions(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (const sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return &member->data[index];
}

void * face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_function__Roilist__regions(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  return &member->data[index];
}

void face_msg__msg__Roilist__rosidl_typesupport_introspection_c__fetch_function__Roilist__regions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sensor_msgs__msg__RegionOfInterest * item =
    ((const sensor_msgs__msg__RegionOfInterest *)
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_const_function__Roilist__regions(untyped_member, index));
  sensor_msgs__msg__RegionOfInterest * value =
    (sensor_msgs__msg__RegionOfInterest *)(untyped_value);
  *value = *item;
}

void face_msg__msg__Roilist__rosidl_typesupport_introspection_c__assign_function__Roilist__regions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sensor_msgs__msg__RegionOfInterest * item =
    ((sensor_msgs__msg__RegionOfInterest *)
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_function__Roilist__regions(untyped_member, index));
  const sensor_msgs__msg__RegionOfInterest * value =
    (const sensor_msgs__msg__RegionOfInterest *)(untyped_value);
  *item = *value;
}

bool face_msg__msg__Roilist__rosidl_typesupport_introspection_c__resize_function__Roilist__regions(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__RegionOfInterest__Sequence * member =
    (sensor_msgs__msg__RegionOfInterest__Sequence *)(untyped_member);
  sensor_msgs__msg__RegionOfInterest__Sequence__fini(member);
  return sensor_msgs__msg__RegionOfInterest__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_member_array[1] = {
  {
    "regions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msg__msg__Roilist, regions),  // bytes offset in struct
    NULL,  // default value
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__size_function__Roilist__regions,  // size() function pointer
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_const_function__Roilist__regions,  // get_const(index) function pointer
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__get_function__Roilist__regions,  // get(index) function pointer
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__fetch_function__Roilist__regions,  // fetch(index, &value) function pointer
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__assign_function__Roilist__regions,  // assign(index, value) function pointer
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__resize_function__Roilist__regions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_members = {
  "face_msg__msg",  // message namespace
  "Roilist",  // message name
  1,  // number of fields
  sizeof(face_msg__msg__Roilist),
  face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_member_array,  // message members
  face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_init_function,  // function to initialize message memory (memory has to be allocated)
  face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_type_support_handle = {
  0,
  &face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_face_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, face_msg, msg, Roilist)() {
  face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_type_support_handle.typesupport_identifier) {
    face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &face_msg__msg__Roilist__rosidl_typesupport_introspection_c__Roilist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
