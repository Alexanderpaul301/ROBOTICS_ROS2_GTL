// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice
#include "face_msg/msg/detail/roilist__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "face_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "face_msg/msg/detail/roilist__struct.h"
#include "face_msg/msg/detail/roilist__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/region_of_interest__functions.h"  // regions

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_face_msg
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_face_msg
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_face_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)();


using _Roilist__ros_msg_type = face_msg__msg__Roilist;

static bool _Roilist__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Roilist__ros_msg_type * ros_message = static_cast<const _Roilist__ros_msg_type *>(untyped_ros_message);
  // Field name: regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    size_t size = ros_message->regions.size;
    auto array_ptr = ros_message->regions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Roilist__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Roilist__ros_msg_type * ros_message = static_cast<_Roilist__ros_msg_type *>(untyped_ros_message);
  // Field name: regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->regions.data) {
      sensor_msgs__msg__RegionOfInterest__Sequence__fini(&ros_message->regions);
    }
    if (!sensor_msgs__msg__RegionOfInterest__Sequence__init(&ros_message->regions, size)) {
      fprintf(stderr, "failed to create array for field 'regions'");
      return false;
    }
    auto array_ptr = ros_message->regions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msg
size_t get_serialized_size_face_msg__msg__Roilist(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Roilist__ros_msg_type * ros_message = static_cast<const _Roilist__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name regions
  {
    size_t array_size = ros_message->regions.size;
    auto array_ptr = ros_message->regions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sensor_msgs__msg__RegionOfInterest(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Roilist__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_face_msg__msg__Roilist(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msg
size_t max_serialized_size_face_msg__msg__Roilist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: regions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__RegionOfInterest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = face_msg__msg__Roilist;
    is_plain =
      (
      offsetof(DataType, regions) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Roilist__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_face_msg__msg__Roilist(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Roilist = {
  "face_msg::msg",
  "Roilist",
  _Roilist__cdr_serialize,
  _Roilist__cdr_deserialize,
  _Roilist__get_serialized_size,
  _Roilist__max_serialized_size
};

static rosidl_message_type_support_t _Roilist__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Roilist,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, face_msg, msg, Roilist)() {
  return &_Roilist__type_support;
}

#if defined(__cplusplus)
}
#endif
