// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from face_msg:msg/Roilist.idl
// generated code does not contain a copyright notice
#include "face_msg/msg/detail/roilist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `regions`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
face_msg__msg__Roilist__init(face_msg__msg__Roilist * msg)
{
  if (!msg) {
    return false;
  }
  // regions
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__init(&msg->regions, 0)) {
    face_msg__msg__Roilist__fini(msg);
    return false;
  }
  return true;
}

void
face_msg__msg__Roilist__fini(face_msg__msg__Roilist * msg)
{
  if (!msg) {
    return;
  }
  // regions
  sensor_msgs__msg__RegionOfInterest__Sequence__fini(&msg->regions);
}

bool
face_msg__msg__Roilist__are_equal(const face_msg__msg__Roilist * lhs, const face_msg__msg__Roilist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // regions
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__are_equal(
      &(lhs->regions), &(rhs->regions)))
  {
    return false;
  }
  return true;
}

bool
face_msg__msg__Roilist__copy(
  const face_msg__msg__Roilist * input,
  face_msg__msg__Roilist * output)
{
  if (!input || !output) {
    return false;
  }
  // regions
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__copy(
      &(input->regions), &(output->regions)))
  {
    return false;
  }
  return true;
}

face_msg__msg__Roilist *
face_msg__msg__Roilist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msg__msg__Roilist * msg = (face_msg__msg__Roilist *)allocator.allocate(sizeof(face_msg__msg__Roilist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(face_msg__msg__Roilist));
  bool success = face_msg__msg__Roilist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
face_msg__msg__Roilist__destroy(face_msg__msg__Roilist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    face_msg__msg__Roilist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
face_msg__msg__Roilist__Sequence__init(face_msg__msg__Roilist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msg__msg__Roilist * data = NULL;

  if (size) {
    data = (face_msg__msg__Roilist *)allocator.zero_allocate(size, sizeof(face_msg__msg__Roilist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = face_msg__msg__Roilist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        face_msg__msg__Roilist__fini(&data[i - 1]);
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
face_msg__msg__Roilist__Sequence__fini(face_msg__msg__Roilist__Sequence * array)
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
      face_msg__msg__Roilist__fini(&array->data[i]);
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

face_msg__msg__Roilist__Sequence *
face_msg__msg__Roilist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msg__msg__Roilist__Sequence * array = (face_msg__msg__Roilist__Sequence *)allocator.allocate(sizeof(face_msg__msg__Roilist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = face_msg__msg__Roilist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
face_msg__msg__Roilist__Sequence__destroy(face_msg__msg__Roilist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    face_msg__msg__Roilist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
face_msg__msg__Roilist__Sequence__are_equal(const face_msg__msg__Roilist__Sequence * lhs, const face_msg__msg__Roilist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!face_msg__msg__Roilist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
face_msg__msg__Roilist__Sequence__copy(
  const face_msg__msg__Roilist__Sequence * input,
  face_msg__msg__Roilist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(face_msg__msg__Roilist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    face_msg__msg__Roilist * data =
      (face_msg__msg__Roilist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!face_msg__msg__Roilist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          face_msg__msg__Roilist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!face_msg__msg__Roilist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
