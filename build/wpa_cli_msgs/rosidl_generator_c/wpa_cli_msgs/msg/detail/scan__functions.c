// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice
#include "wpa_cli_msgs/msg/detail/scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `interface`
#include "rosidl_runtime_c/string_functions.h"
// Member `networks`
#include "wpa_cli_msgs/msg/detail/network__functions.h"

bool
wpa_cli_msgs__msg__Scan__init(wpa_cli_msgs__msg__Scan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wpa_cli_msgs__msg__Scan__fini(msg);
    return false;
  }
  // interface
  if (!rosidl_runtime_c__String__init(&msg->interface)) {
    wpa_cli_msgs__msg__Scan__fini(msg);
    return false;
  }
  // networks
  if (!wpa_cli_msgs__msg__Network__Sequence__init(&msg->networks, 0)) {
    wpa_cli_msgs__msg__Scan__fini(msg);
    return false;
  }
  return true;
}

void
wpa_cli_msgs__msg__Scan__fini(wpa_cli_msgs__msg__Scan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // interface
  rosidl_runtime_c__String__fini(&msg->interface);
  // networks
  wpa_cli_msgs__msg__Network__Sequence__fini(&msg->networks);
}

bool
wpa_cli_msgs__msg__Scan__are_equal(const wpa_cli_msgs__msg__Scan * lhs, const wpa_cli_msgs__msg__Scan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // interface
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->interface), &(rhs->interface)))
  {
    return false;
  }
  // networks
  if (!wpa_cli_msgs__msg__Network__Sequence__are_equal(
      &(lhs->networks), &(rhs->networks)))
  {
    return false;
  }
  return true;
}

bool
wpa_cli_msgs__msg__Scan__copy(
  const wpa_cli_msgs__msg__Scan * input,
  wpa_cli_msgs__msg__Scan * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // interface
  if (!rosidl_runtime_c__String__copy(
      &(input->interface), &(output->interface)))
  {
    return false;
  }
  // networks
  if (!wpa_cli_msgs__msg__Network__Sequence__copy(
      &(input->networks), &(output->networks)))
  {
    return false;
  }
  return true;
}

wpa_cli_msgs__msg__Scan *
wpa_cli_msgs__msg__Scan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Scan * msg = (wpa_cli_msgs__msg__Scan *)allocator.allocate(sizeof(wpa_cli_msgs__msg__Scan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wpa_cli_msgs__msg__Scan));
  bool success = wpa_cli_msgs__msg__Scan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wpa_cli_msgs__msg__Scan__destroy(wpa_cli_msgs__msg__Scan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wpa_cli_msgs__msg__Scan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wpa_cli_msgs__msg__Scan__Sequence__init(wpa_cli_msgs__msg__Scan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Scan * data = NULL;

  if (size) {
    data = (wpa_cli_msgs__msg__Scan *)allocator.zero_allocate(size, sizeof(wpa_cli_msgs__msg__Scan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wpa_cli_msgs__msg__Scan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wpa_cli_msgs__msg__Scan__fini(&data[i - 1]);
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
wpa_cli_msgs__msg__Scan__Sequence__fini(wpa_cli_msgs__msg__Scan__Sequence * array)
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
      wpa_cli_msgs__msg__Scan__fini(&array->data[i]);
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

wpa_cli_msgs__msg__Scan__Sequence *
wpa_cli_msgs__msg__Scan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wpa_cli_msgs__msg__Scan__Sequence * array = (wpa_cli_msgs__msg__Scan__Sequence *)allocator.allocate(sizeof(wpa_cli_msgs__msg__Scan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wpa_cli_msgs__msg__Scan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wpa_cli_msgs__msg__Scan__Sequence__destroy(wpa_cli_msgs__msg__Scan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wpa_cli_msgs__msg__Scan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wpa_cli_msgs__msg__Scan__Sequence__are_equal(const wpa_cli_msgs__msg__Scan__Sequence * lhs, const wpa_cli_msgs__msg__Scan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wpa_cli_msgs__msg__Scan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wpa_cli_msgs__msg__Scan__Sequence__copy(
  const wpa_cli_msgs__msg__Scan__Sequence * input,
  wpa_cli_msgs__msg__Scan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wpa_cli_msgs__msg__Scan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wpa_cli_msgs__msg__Scan * data =
      (wpa_cli_msgs__msg__Scan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wpa_cli_msgs__msg__Scan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wpa_cli_msgs__msg__Scan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wpa_cli_msgs__msg__Scan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
