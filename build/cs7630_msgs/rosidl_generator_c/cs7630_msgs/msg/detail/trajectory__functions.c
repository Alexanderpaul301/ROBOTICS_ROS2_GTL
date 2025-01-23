// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cs7630_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "cs7630_msgs/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ts`
#include "cs7630_msgs/msg/detail/trajectory_element__functions.h"

bool
cs7630_msgs__msg__Trajectory__init(cs7630_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cs7630_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // ts
  if (!cs7630_msgs__msg__TrajectoryElement__Sequence__init(&msg->ts, 0)) {
    cs7630_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
cs7630_msgs__msg__Trajectory__fini(cs7630_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ts
  cs7630_msgs__msg__TrajectoryElement__Sequence__fini(&msg->ts);
}

bool
cs7630_msgs__msg__Trajectory__are_equal(const cs7630_msgs__msg__Trajectory * lhs, const cs7630_msgs__msg__Trajectory * rhs)
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
  // ts
  if (!cs7630_msgs__msg__TrajectoryElement__Sequence__are_equal(
      &(lhs->ts), &(rhs->ts)))
  {
    return false;
  }
  return true;
}

bool
cs7630_msgs__msg__Trajectory__copy(
  const cs7630_msgs__msg__Trajectory * input,
  cs7630_msgs__msg__Trajectory * output)
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
  // ts
  if (!cs7630_msgs__msg__TrajectoryElement__Sequence__copy(
      &(input->ts), &(output->ts)))
  {
    return false;
  }
  return true;
}

cs7630_msgs__msg__Trajectory *
cs7630_msgs__msg__Trajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__Trajectory * msg = (cs7630_msgs__msg__Trajectory *)allocator.allocate(sizeof(cs7630_msgs__msg__Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cs7630_msgs__msg__Trajectory));
  bool success = cs7630_msgs__msg__Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cs7630_msgs__msg__Trajectory__destroy(cs7630_msgs__msg__Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cs7630_msgs__msg__Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cs7630_msgs__msg__Trajectory__Sequence__init(cs7630_msgs__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__Trajectory * data = NULL;

  if (size) {
    data = (cs7630_msgs__msg__Trajectory *)allocator.zero_allocate(size, sizeof(cs7630_msgs__msg__Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cs7630_msgs__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cs7630_msgs__msg__Trajectory__fini(&data[i - 1]);
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
cs7630_msgs__msg__Trajectory__Sequence__fini(cs7630_msgs__msg__Trajectory__Sequence * array)
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
      cs7630_msgs__msg__Trajectory__fini(&array->data[i]);
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

cs7630_msgs__msg__Trajectory__Sequence *
cs7630_msgs__msg__Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__Trajectory__Sequence * array = (cs7630_msgs__msg__Trajectory__Sequence *)allocator.allocate(sizeof(cs7630_msgs__msg__Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cs7630_msgs__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cs7630_msgs__msg__Trajectory__Sequence__destroy(cs7630_msgs__msg__Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cs7630_msgs__msg__Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cs7630_msgs__msg__Trajectory__Sequence__are_equal(const cs7630_msgs__msg__Trajectory__Sequence * lhs, const cs7630_msgs__msg__Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cs7630_msgs__msg__Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cs7630_msgs__msg__Trajectory__Sequence__copy(
  const cs7630_msgs__msg__Trajectory__Sequence * input,
  cs7630_msgs__msg__Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cs7630_msgs__msg__Trajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cs7630_msgs__msg__Trajectory * data =
      (cs7630_msgs__msg__Trajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cs7630_msgs__msg__Trajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cs7630_msgs__msg__Trajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cs7630_msgs__msg__Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
