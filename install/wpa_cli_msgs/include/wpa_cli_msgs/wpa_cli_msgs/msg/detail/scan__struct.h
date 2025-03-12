// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_H_
#define WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_H_

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
// Member 'interface'
#include "rosidl_runtime_c/string.h"
// Member 'networks'
#include "wpa_cli_msgs/msg/detail/network__struct.h"

/// Struct defined in msg/Scan in the package wpa_cli_msgs.
typedef struct wpa_cli_msgs__msg__Scan
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String interface;
  wpa_cli_msgs__msg__Network__Sequence networks;
} wpa_cli_msgs__msg__Scan;

// Struct for a sequence of wpa_cli_msgs__msg__Scan.
typedef struct wpa_cli_msgs__msg__Scan__Sequence
{
  wpa_cli_msgs__msg__Scan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wpa_cli_msgs__msg__Scan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WPA_CLI_MSGS__MSG__DETAIL__SCAN__STRUCT_H_
