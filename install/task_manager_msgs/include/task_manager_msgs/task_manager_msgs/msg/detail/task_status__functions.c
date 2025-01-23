// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/msg/detail/task_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `status_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `status_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `plist`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
task_manager_msgs__msg__TaskStatus__init(task_manager_msgs__msg__TaskStatus * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    task_manager_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  // status
  // status_string
  if (!rosidl_runtime_c__String__init(&msg->status_string)) {
    task_manager_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  // status_time
  if (!builtin_interfaces__msg__Time__init(&msg->status_time)) {
    task_manager_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  // plist
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->plist, 0)) {
    task_manager_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__msg__TaskStatus__fini(task_manager_msgs__msg__TaskStatus * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // status
  // status_string
  rosidl_runtime_c__String__fini(&msg->status_string);
  // status_time
  builtin_interfaces__msg__Time__fini(&msg->status_time);
  // plist
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->plist);
}

bool
task_manager_msgs__msg__TaskStatus__are_equal(const task_manager_msgs__msg__TaskStatus * lhs, const task_manager_msgs__msg__TaskStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // status_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_string), &(rhs->status_string)))
  {
    return false;
  }
  // status_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->status_time), &(rhs->status_time)))
  {
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
task_manager_msgs__msg__TaskStatus__copy(
  const task_manager_msgs__msg__TaskStatus * input,
  task_manager_msgs__msg__TaskStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // status_string
  if (!rosidl_runtime_c__String__copy(
      &(input->status_string), &(output->status_string)))
  {
    return false;
  }
  // status_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->status_time), &(output->status_time)))
  {
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

task_manager_msgs__msg__TaskStatus *
task_manager_msgs__msg__TaskStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskStatus * msg = (task_manager_msgs__msg__TaskStatus *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__msg__TaskStatus));
  bool success = task_manager_msgs__msg__TaskStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__msg__TaskStatus__destroy(task_manager_msgs__msg__TaskStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__msg__TaskStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__msg__TaskStatus__Sequence__init(task_manager_msgs__msg__TaskStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskStatus * data = NULL;

  if (size) {
    data = (task_manager_msgs__msg__TaskStatus *)allocator.zero_allocate(size, sizeof(task_manager_msgs__msg__TaskStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__msg__TaskStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__msg__TaskStatus__fini(&data[i - 1]);
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
task_manager_msgs__msg__TaskStatus__Sequence__fini(task_manager_msgs__msg__TaskStatus__Sequence * array)
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
      task_manager_msgs__msg__TaskStatus__fini(&array->data[i]);
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

task_manager_msgs__msg__TaskStatus__Sequence *
task_manager_msgs__msg__TaskStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__msg__TaskStatus__Sequence * array = (task_manager_msgs__msg__TaskStatus__Sequence *)allocator.allocate(sizeof(task_manager_msgs__msg__TaskStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__msg__TaskStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__msg__TaskStatus__Sequence__destroy(task_manager_msgs__msg__TaskStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__msg__TaskStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__msg__TaskStatus__Sequence__are_equal(const task_manager_msgs__msg__TaskStatus__Sequence * lhs, const task_manager_msgs__msg__TaskStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__msg__TaskStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__msg__TaskStatus__Sequence__copy(
  const task_manager_msgs__msg__TaskStatus__Sequence * input,
  task_manager_msgs__msg__TaskStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__msg__TaskStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__msg__TaskStatus * data =
      (task_manager_msgs__msg__TaskStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__msg__TaskStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__msg__TaskStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__msg__TaskStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
