// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/msg/detail/task_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `config`
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"

bool
task_manager_msgs__msg__TaskDescription__init(task_manager_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    task_manager_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    task_manager_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // periodic
  // config
  if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__init(&msg->config, 0)) {
    task_manager_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__msg__TaskDescription__fini(task_manager_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // periodic
  // config
  rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(&msg->config);
}

bool
task_manager_msgs__msg__TaskDescription__are_equal(const task_manager_msgs__msg__TaskDescription * lhs, const task_manager_msgs__msg__TaskDescription * rhs)
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
  // periodic
  if (lhs->periodic != rhs->periodic) {
    return false;
  }
  // config
  if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__are_equal(
      &(lhs->config), &(rhs->config)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__msg__TaskDescription__copy(
  const task_manager_msgs__msg__TaskDescription * input,
  task_manager_msgs__msg__TaskDescription * output)
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
  // periodic
  output->periodic = input->periodic;
  // config
  if (!rcl_interfaces__msg__ParameterDescriptor__Sequence__copy(
      &(input->config), &(output->config)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__msg__TaskDescription *
task_manager_msgs__msg__TaskDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskDescription * msg = (task_manager_msgs__msg__TaskDescription *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__msg__TaskDescription));
  bool success = task_manager_msgs__msg__TaskDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__msg__TaskDescription__destroy(task_manager_msgs__msg__TaskDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__msg__TaskDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__msg__TaskDescription__Sequence__init(task_manager_msgs__msg__TaskDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskDescription * data = NULL;

  if (size) {
    data = (task_manager_msgs__msg__TaskDescription *)allocator.zero_allocate(size, sizeof(task_manager_msgs__msg__TaskDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__msg__TaskDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__msg__TaskDescription__fini(&data[i - 1]);
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
task_manager_msgs__msg__TaskDescription__Sequence__fini(task_manager_msgs__msg__TaskDescription__Sequence * array)
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
      task_manager_msgs__msg__TaskDescription__fini(&array->data[i]);
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

task_manager_msgs__msg__TaskDescription__Sequence *
task_manager_msgs__msg__TaskDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskDescription__Sequence * array = (task_manager_msgs__msg__TaskDescription__Sequence *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__msg__TaskDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__msg__TaskDescription__Sequence__destroy(task_manager_msgs__msg__TaskDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__msg__TaskDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__msg__TaskDescription__Sequence__are_equal(const task_manager_msgs__msg__TaskDescription__Sequence * lhs, const task_manager_msgs__msg__TaskDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__msg__TaskDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__msg__TaskDescription__Sequence__copy(
  const task_manager_msgs__msg__TaskDescription__Sequence * input,
  task_manager_msgs__msg__TaskDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__msg__TaskDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__msg__TaskDescription * data =
      (task_manager_msgs__msg__TaskDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__msg__TaskDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__msg__TaskDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__msg__TaskDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
