// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:msg/TaskParameter.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/msg/detail/task_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `description`
// Member `type`
// Member `min`
// Member `max`
// Member `dflt`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
task_manager_msgs__msg__TaskParameter__init(task_manager_msgs__msg__TaskParameter * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // min
  if (!rosidl_runtime_c__String__init(&msg->min)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // max
  if (!rosidl_runtime_c__String__init(&msg->max)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // dflt
  if (!rosidl_runtime_c__String__init(&msg->dflt)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__msg__TaskParameter__fini(task_manager_msgs__msg__TaskParameter * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // min
  rosidl_runtime_c__String__fini(&msg->min);
  // max
  rosidl_runtime_c__String__fini(&msg->max);
  // dflt
  rosidl_runtime_c__String__fini(&msg->dflt);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
task_manager_msgs__msg__TaskParameter__are_equal(const task_manager_msgs__msg__TaskParameter * lhs, const task_manager_msgs__msg__TaskParameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // min
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->min), &(rhs->min)))
  {
    return false;
  }
  // max
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->max), &(rhs->max)))
  {
    return false;
  }
  // dflt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dflt), &(rhs->dflt)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__msg__TaskParameter__copy(
  const task_manager_msgs__msg__TaskParameter * input,
  task_manager_msgs__msg__TaskParameter * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // min
  if (!rosidl_runtime_c__String__copy(
      &(input->min), &(output->min)))
  {
    return false;
  }
  // max
  if (!rosidl_runtime_c__String__copy(
      &(input->max), &(output->max)))
  {
    return false;
  }
  // dflt
  if (!rosidl_runtime_c__String__copy(
      &(input->dflt), &(output->dflt)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__msg__TaskParameter *
task_manager_msgs__msg__TaskParameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskParameter * msg = (task_manager_msgs__msg__TaskParameter *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskParameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__msg__TaskParameter));
  bool success = task_manager_msgs__msg__TaskParameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__msg__TaskParameter__destroy(task_manager_msgs__msg__TaskParameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__msg__TaskParameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__msg__TaskParameter__Sequence__init(task_manager_msgs__msg__TaskParameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskParameter * data = NULL;

  if (size) {
    data = (task_manager_msgs__msg__TaskParameter *)allocator.zero_allocate(size, sizeof(task_manager_msgs__msg__TaskParameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__msg__TaskParameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__msg__TaskParameter__fini(&data[i - 1]);
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
task_manager_msgs__msg__TaskParameter__Sequence__fini(task_manager_msgs__msg__TaskParameter__Sequence * array)
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
      task_manager_msgs__msg__TaskParameter__fini(&array->data[i]);
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

task_manager_msgs__msg__TaskParameter__Sequence *
task_manager_msgs__msg__TaskParameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskParameter__Sequence * array = (task_manager_msgs__msg__TaskParameter__Sequence *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskParameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__msg__TaskParameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__msg__TaskParameter__Sequence__destroy(task_manager_msgs__msg__TaskParameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__msg__TaskParameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__msg__TaskParameter__Sequence__are_equal(const task_manager_msgs__msg__TaskParameter__Sequence * lhs, const task_manager_msgs__msg__TaskParameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__msg__TaskParameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__msg__TaskParameter__Sequence__copy(
  const task_manager_msgs__msg__TaskParameter__Sequence * input,
  task_manager_msgs__msg__TaskParameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__msg__TaskParameter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__msg__TaskParameter * data =
      (task_manager_msgs__msg__TaskParameter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__msg__TaskParameter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__msg__TaskParameter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__msg__TaskParameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
