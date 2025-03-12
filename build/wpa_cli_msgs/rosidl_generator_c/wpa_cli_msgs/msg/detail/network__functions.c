// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wpa_cli_msgs:msg/Network.idl
// generated code does not contain a copyright notice
#include "wpa_cli_msgs/msg/detail/network__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bssid`
// Member `ssid`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
wpa_cli_msgs__msg__Network__init(wpa_cli_msgs__msg__Network * msg)
{
  if (!msg) {
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__init(&msg->bssid)) {
    wpa_cli_msgs__msg__Network__fini(msg);
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    wpa_cli_msgs__msg__Network__fini(msg);
    return false;
  }
  // channel
  // level
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    wpa_cli_msgs__msg__Network__fini(msg);
    return false;
  }
  return true;
}

void
wpa_cli_msgs__msg__Network__fini(wpa_cli_msgs__msg__Network * msg)
{
  if (!msg) {
    return;
  }
  // bssid
  rosidl_runtime_c__String__fini(&msg->bssid);
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // channel
  // level
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

bool
wpa_cli_msgs__msg__Network__are_equal(const wpa_cli_msgs__msg__Network * lhs, const wpa_cli_msgs__msg__Network * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bssid), &(rhs->bssid)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ssid), &(rhs->ssid)))
  {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
wpa_cli_msgs__msg__Network__copy(
  const wpa_cli_msgs__msg__Network * input,
  wpa_cli_msgs__msg__Network * output)
{
  if (!input || !output) {
    return false;
  }
  // bssid
  if (!rosidl_runtime_c__String__copy(
      &(input->bssid), &(output->bssid)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__copy(
      &(input->ssid), &(output->ssid)))
  {
    return false;
  }
  // channel
  output->channel = input->channel;
  // level
  output->level = input->level;
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

wpa_cli_msgs__msg__Network *
wpa_cli_msgs__msg__Network__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Network * msg = (wpa_cli_msgs__msg__Network *)allocator.allocate(sizeof(wpa_cli_msgs__msg__Network), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wpa_cli_msgs__msg__Network));
  bool success = wpa_cli_msgs__msg__Network__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wpa_cli_msgs__msg__Network__destroy(wpa_cli_msgs__msg__Network * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wpa_cli_msgs__msg__Network__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wpa_cli_msgs__msg__Network__Sequence__init(wpa_cli_msgs__msg__Network__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Network * data = NULL;

  if (size) {
    data = (wpa_cli_msgs__msg__Network *)allocator.zero_allocate(size, sizeof(wpa_cli_msgs__msg__Network), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wpa_cli_msgs__msg__Network__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wpa_cli_msgs__msg__Network__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wpa_cli_msgs__msg__Network__Sequence__fini(wpa_cli_msgs__msg__Network__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wpa_cli_msgs__msg__Network__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wpa_cli_msgs__msg__Network__Sequence *
wpa_cli_msgs__msg__Network__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Network__Sequence * array = (wpa_cli_msgs__msg__Network__Sequence *)allocator.allocate(sizeof(wpa_cli_msgs__msg__Network__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wpa_cli_msgs__msg__Network__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wpa_cli_msgs__msg__Network__Sequence__destroy(wpa_cli_msgs__msg__Network__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wpa_cli_msgs__msg__Network__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wpa_cli_msgs__msg__Network__Sequence__are_equal(const wpa_cli_msgs__msg__Network__Sequence * lhs, const wpa_cli_msgs__msg__Network__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wpa_cli_msgs__msg__Network__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wpa_cli_msgs__msg__Network__Sequence__copy(
  const wpa_cli_msgs__msg__Network__Sequence * input,
  wpa_cli_msgs__msg__Network__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wpa_cli_msgs__msg__Network);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wpa_cli_msgs__msg__Network * data =
      (wpa_cli_msgs__msg__Network *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wpa_cli_msgs__msg__Network__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wpa_cli_msgs__msg__Network__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wpa_cli_msgs__msg__Network__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
