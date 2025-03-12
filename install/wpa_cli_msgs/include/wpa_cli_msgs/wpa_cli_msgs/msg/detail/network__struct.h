// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wpa_cli_msgs:msg/Network.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_
#define WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bssid'
// Member 'ssid'
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Network in the package wpa_cli_msgs.
typedef struct wpa_cli_msgs__msg__Network
{
  rosidl_runtime_c__String bssid;
  rosidl_runtime_c__String ssid;
  int32_t channel;
  int32_t level;
  rosidl_runtime_c__String info;
} wpa_cli_msgs__msg__Network;

// Struct for a sequence of wpa_cli_msgs__msg__Network.
typedef struct wpa_cli_msgs__msg__Network__Sequence
{
  wpa_cli_msgs__msg__Network * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wpa_cli_msgs__msg__Network__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WPA_CLI_MSGS__MSG__DETAIL__NETWORK__STRUCT_H_
