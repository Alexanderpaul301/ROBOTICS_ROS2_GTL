// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:msg/EncapsulatedMessage.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/msg/detail/encapsulated_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `md5sum`
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
task_manager_msgs__msg__EncapsulatedMessage__init(task_manager_msgs__msg__EncapsulatedMessage * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    task_manager_msgs__msg__EncapsulatedMessage__fini(msg);
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__init(&msg->md5sum)) {
    task_manager_msgs__msg__EncapsulatedMessage__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    task_manager_msgs__msg__EncapsulatedMessage__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__msg__EncapsulatedMessage__fini(task_manager_msgs__msg__EncapsulatedMessage * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // md5sum
  rosidl_runtime_c__String__fini(&msg->md5sum);
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
task_manager_msgs__msg__EncapsulatedMessage__are_equal(const task_manager_msgs__msg__EncapsulatedMessage * lhs, const task_manager_msgs__msg__EncapsulatedMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5sum), &(rhs->md5sum)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__msg__EncapsulatedMessage__copy(
  const task_manager_msgs__msg__EncapsulatedMessage * input,
  task_manager_msgs__msg__EncapsulatedMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // md5sum
  if (!rosidl_runtime_c__String__copy(
      &(input->md5sum), &(output->md5sum)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__msg__EncapsulatedMessage *
task_manager_msgs__msg__EncapsulatedMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__EncapsulatedMessage * msg = (task_manager_msgs__msg__EncapsulatedMessage *)allocator.allocate(sizeof(task_manager_msgs__msg__EncapsulatedMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__msg__EncapsulatedMessage));
  bool success = task_manager_msgs__msg__EncapsulatedMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__msg__EncapsulatedMessage__destroy(task_manager_msgs__msg__EncapsulatedMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__msg__EncapsulatedMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__msg__EncapsulatedMessage__Sequence__init(task_manager_msgs__msg__EncapsulatedMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__EncapsulatedMessage * data = NULL;

  if (size) {
    data = (task_manager_msgs__msg__EncapsulatedMessage *)allocator.zero_allocate(size, sizeof(task_manager_msgs__msg__EncapsulatedMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__msg__EncapsulatedMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__msg__EncapsulatedMessage__fini(&data[i - 1]);
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
task_manager_msgs__msg__EncapsulatedMessage__Sequence__fini(task_manager_msgs__msg__EncapsulatedMessage__Sequence * array)
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
      task_manager_msgs__msg__EncapsulatedMessage__fini(&array->data[i]);
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

task_manager_msgs__msg__EncapsulatedMessage__Sequence *
task_manager_msgs__msg__EncapsulatedMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__EncapsulatedMessage__Sequence * array = (task_manager_msgs__msg__EncapsulatedMessage__Sequence *)allocator.allocate(sizeof(task_manager_msgs__msg__EncapsulatedMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__msg__EncapsulatedMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__msg__EncapsulatedMessage__Sequence__destroy(task_manager_msgs__msg__EncapsulatedMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__msg__EncapsulatedMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__msg__EncapsulatedMessage__Sequence__are_equal(const task_manager_msgs__msg__EncapsulatedMessage__Sequence * lhs, const task_manager_msgs__msg__EncapsulatedMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__msg__EncapsulatedMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__msg__EncapsulatedMessage__Sequence__copy(
  const task_manager_msgs__msg__EncapsulatedMessage__Sequence * input,
  task_manager_msgs__msg__EncapsulatedMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__msg__EncapsulatedMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__msg__EncapsulatedMessage * data =
      (task_manager_msgs__msg__EncapsulatedMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__msg__EncapsulatedMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__msg__EncapsulatedMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__msg__EncapsulatedMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
