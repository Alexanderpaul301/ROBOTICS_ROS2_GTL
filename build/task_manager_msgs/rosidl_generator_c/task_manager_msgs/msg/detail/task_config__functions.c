// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/msg/detail/task_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `plist`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
task_manager_msgs__msg__TaskConfig__init(task_manager_msgs__msg__TaskConfig * msg)
{
  if (!msg) {
    return false;
  }
  // plist
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->plist, 0)) {
    task_manager_msgs__msg__TaskConfig__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__msg__TaskConfig__fini(task_manager_msgs__msg__TaskConfig * msg)
{
  if (!msg) {
    return;
  }
  // plist
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->plist);
}

bool
task_manager_msgs__msg__TaskConfig__are_equal(const task_manager_msgs__msg__TaskConfig * lhs, const task_manager_msgs__msg__TaskConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plist
  if (!rcl_interfaces__msg__Parameter__Sequence__are_equal(
      &(lhs->plist), &(rhs->plist)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__msg__TaskConfig__copy(
  const task_manager_msgs__msg__TaskConfig * input,
  task_manager_msgs__msg__TaskConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // plist
  if (!rcl_interfaces__msg__Parameter__Sequence__copy(
      &(input->plist), &(output->plist)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__msg__TaskConfig *
task_manager_msgs__msg__TaskConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskConfig * msg = (task_manager_msgs__msg__TaskConfig *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__msg__TaskConfig));
  bool success = task_manager_msgs__msg__TaskConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__msg__TaskConfig__destroy(task_manager_msgs__msg__TaskConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__msg__TaskConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__msg__TaskConfig__Sequence__init(task_manager_msgs__msg__TaskConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskConfig * data = NULL;

  if (size) {
    data = (task_manager_msgs__msg__TaskConfig *)allocator.zero_allocate(size, sizeof(task_manager_msgs__msg__TaskConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__msg__TaskConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__msg__TaskConfig__fini(&data[i - 1]);
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
task_manager_msgs__msg__TaskConfig__Sequence__fini(task_manager_msgs__msg__TaskConfig__Sequence * array)
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
      task_manager_msgs__msg__TaskConfig__fini(&array->data[i]);
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

task_manager_msgs__msg__TaskConfig__Sequence *
task_manager_msgs__msg__TaskConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskConfig__Sequence * array = (task_manager_msgs__msg__TaskConfig__Sequence *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__msg__TaskConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__msg__TaskConfig__Sequence__destroy(task_manager_msgs__msg__TaskConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__msg__TaskConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__msg__TaskConfig__Sequence__are_equal(const task_manager_msgs__msg__TaskConfig__Sequence * lhs, const task_manager_msgs__msg__TaskConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__msg__TaskConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__msg__TaskConfig__Sequence__copy(
  const task_manager_msgs__msg__TaskConfig__Sequence * input,
  task_manager_msgs__msg__TaskConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__msg__TaskConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__msg__TaskConfig * data =
      (task_manager_msgs__msg__TaskConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__msg__TaskConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__msg__TaskConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__msg__TaskConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
