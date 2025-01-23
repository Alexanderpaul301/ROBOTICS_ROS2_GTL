// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cs7630_msgs:msg/ROIArray.idl
// generated code does not contain a copyright notice
#include "cs7630_msgs/msg/detail/roi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rois`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
cs7630_msgs__msg__ROIArray__init(cs7630_msgs__msg__ROIArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cs7630_msgs__msg__ROIArray__fini(msg);
    return false;
  }
  // rois
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__init(&msg->rois, 0)) {
    cs7630_msgs__msg__ROIArray__fini(msg);
    return false;
  }
  return true;
}

void
cs7630_msgs__msg__ROIArray__fini(cs7630_msgs__msg__ROIArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rois
  sensor_msgs__msg__RegionOfInterest__Sequence__fini(&msg->rois);
}

bool
cs7630_msgs__msg__ROIArray__are_equal(const cs7630_msgs__msg__ROIArray * lhs, const cs7630_msgs__msg__ROIArray * rhs)
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
  // rois
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__are_equal(
      &(lhs->rois), &(rhs->rois)))
  {
    return false;
  }
  return true;
}

bool
cs7630_msgs__msg__ROIArray__copy(
  const cs7630_msgs__msg__ROIArray * input,
  cs7630_msgs__msg__ROIArray * output)
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
  // rois
  if (!sensor_msgs__msg__RegionOfInterest__Sequence__copy(
      &(input->rois), &(output->rois)))
  {
    return false;
  }
  return true;
}

cs7630_msgs__msg__ROIArray *
cs7630_msgs__msg__ROIArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__ROIArray * msg = (cs7630_msgs__msg__ROIArray *)allocator.allocate(sizeof(cs7630_msgs__msg__ROIArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cs7630_msgs__msg__ROIArray));
  bool success = cs7630_msgs__msg__ROIArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cs7630_msgs__msg__ROIArray__destroy(cs7630_msgs__msg__ROIArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cs7630_msgs__msg__ROIArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cs7630_msgs__msg__ROIArray__Sequence__init(cs7630_msgs__msg__ROIArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__ROIArray * data = NULL;

  if (size) {
    data = (cs7630_msgs__msg__ROIArray *)allocator.zero_allocate(size, sizeof(cs7630_msgs__msg__ROIArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cs7630_msgs__msg__ROIArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cs7630_msgs__msg__ROIArray__fini(&data[i - 1]);
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
cs7630_msgs__msg__ROIArray__Sequence__fini(cs7630_msgs__msg__ROIArray__Sequence * array)
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
      cs7630_msgs__msg__ROIArray__fini(&array->data[i]);
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

cs7630_msgs__msg__ROIArray__Sequence *
cs7630_msgs__msg__ROIArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cs7630_msgs__msg__ROIArray__Sequence * array = (cs7630_msgs__msg__ROIArray__Sequence *)allocator.allocate(sizeof(cs7630_msgs__msg__ROIArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cs7630_msgs__msg__ROIArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cs7630_msgs__msg__ROIArray__Sequence__destroy(cs7630_msgs__msg__ROIArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cs7630_msgs__msg__ROIArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cs7630_msgs__msg__ROIArray__Sequence__are_equal(const cs7630_msgs__msg__ROIArray__Sequence * lhs, const cs7630_msgs__msg__ROIArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cs7630_msgs__msg__ROIArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cs7630_msgs__msg__ROIArray__Sequence__copy(
  const cs7630_msgs__msg__ROIArray__Sequence * input,
  cs7630_msgs__msg__ROIArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cs7630_msgs__msg__ROIArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cs7630_msgs__msg__ROIArray * data =
      (cs7630_msgs__msg__ROIArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cs7630_msgs__msg__ROIArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cs7630_msgs__msg__ROIArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cs7630_msgs__msg__ROIArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
