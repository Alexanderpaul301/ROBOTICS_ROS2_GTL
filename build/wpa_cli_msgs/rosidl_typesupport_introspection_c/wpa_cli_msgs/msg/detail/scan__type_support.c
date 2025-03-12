// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wpa_cli_msgs/msg/detail/scan__rosidl_typesupport_introspection_c.h"
#include "wpa_cli_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wpa_cli_msgs/msg/detail/scan__functions.h"
#include "wpa_cli_msgs/msg/detail/scan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `interface`
#include "rosidl_runtime_c/string_functions.h"
// Member `networks`
#include "wpa_cli_msgs/msg/network.h"
// Member `networks`
#include "wpa_cli_msgs/msg/detail/network__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wpa_cli_msgs__msg__Scan__init(message_memory);
}

void wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function(void * message_memory)
{
  wpa_cli_msgs__msg__Scan__fini(message_memory);
}

size_t wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__networks(
  const void * untyped_member)
{
  const wpa_cli_msgs__msg__Network__Sequence * member =
    (const wpa_cli_msgs__msg__Network__Sequence *)(untyped_member);
  return member->size;
}

const void * wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks(
  const void * untyped_member, size_t index)
{
  const wpa_cli_msgs__msg__Network__Sequence * member =
    (const wpa_cli_msgs__msg__Network__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks(
  void * untyped_member, size_t index)
{
  wpa_cli_msgs__msg__Network__Sequence * member =
    (wpa_cli_msgs__msg__Network__Sequence *)(untyped_member);
  return &member->data[index];
}

void wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__networks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wpa_cli_msgs__msg__Network * item =
    ((const wpa_cli_msgs__msg__Network *)
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks(untyped_member, index));
  wpa_cli_msgs__msg__Network * value =
    (wpa_cli_msgs__msg__Network *)(untyped_value);
  *value = *item;
}

void wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__networks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wpa_cli_msgs__msg__Network * item =
    ((wpa_cli_msgs__msg__Network *)
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks(untyped_member, index));
  const wpa_cli_msgs__msg__Network * value =
    (const wpa_cli_msgs__msg__Network *)(untyped_value);
  *item = *value;
}

bool wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__networks(
  void * untyped_member, size_t size)
{
  wpa_cli_msgs__msg__Network__Sequence * member =
    (wpa_cli_msgs__msg__Network__Sequence *)(untyped_member);
  wpa_cli_msgs__msg__Network__Sequence__fini(member);
  return wpa_cli_msgs__msg__Network__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs__msg__Scan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs__msg__Scan, interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "networks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs__msg__Scan, networks),  // bytes offset in struct
    NULL,  // default value
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__size_function__Scan__networks,  // size() function pointer
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_const_function__Scan__networks,  // get_const(index) function pointer
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__get_function__Scan__networks,  // get(index) function pointer
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__fetch_function__Scan__networks,  // fetch(index, &value) function pointer
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__assign_function__Scan__networks,  // assign(index, value) function pointer
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__resize_function__Scan__networks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members = {
  "wpa_cli_msgs__msg",  // message namespace
  "Scan",  // message name
  3,  // number of fields
  sizeof(wpa_cli_msgs__msg__Scan),
  wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array,  // message members
  wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_init_function,  // function to initialize message memory (memory has to be allocated)
  wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle = {
  0,
  &wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wpa_cli_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wpa_cli_msgs, msg, Scan)() {
  wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wpa_cli_msgs, msg, Network)();
  if (!wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier) {
    wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wpa_cli_msgs__msg__Scan__rosidl_typesupport_introspection_c__Scan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
