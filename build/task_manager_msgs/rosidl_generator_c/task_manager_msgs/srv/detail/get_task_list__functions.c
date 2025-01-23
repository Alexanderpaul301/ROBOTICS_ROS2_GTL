// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/srv/detail/get_task_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
task_manager_msgs__srv__GetTaskList_Request__init(task_manager_msgs__srv__GetTaskList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
task_manager_msgs__srv__GetTaskList_Request__fini(task_manager_msgs__srv__GetTaskList_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
task_manager_msgs__srv__GetTaskList_Request__are_equal(const task_manager_msgs__srv__GetTaskList_Request * lhs, const task_manager_msgs__srv__GetTaskList_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
task_manager_msgs__srv__GetTaskList_Request__copy(
  const task_manager_msgs__srv__GetTaskList_Request * input,
  task_manager_msgs__srv__GetTaskList_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

task_manager_msgs__srv__GetTaskList_Request *
task_manager_msgs__srv__GetTaskList_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Request * msg = (task_manager_msgs__srv__GetTaskList_Request *)allocator.allocate(sizeof(task_manager_msgs__srv__GetTaskList_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__srv__GetTaskList_Request));
  bool success = task_manager_msgs__srv__GetTaskList_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__srv__GetTaskList_Request__destroy(task_manager_msgs__srv__GetTaskList_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__srv__GetTaskList_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__srv__GetTaskList_Request__Sequence__init(task_manager_msgs__srv__GetTaskList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Request * data = NULL;

  if (size) {
    data = (task_manager_msgs__srv__GetTaskList_Request *)allocator.zero_allocate(size, sizeof(task_manager_msgs__srv__GetTaskList_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__srv__GetTaskList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__srv__GetTaskList_Request__fini(&data[i - 1]);
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
task_manager_msgs__srv__GetTaskList_Request__Sequence__fini(task_manager_msgs__srv__GetTaskList_Request__Sequence * array)
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
      task_manager_msgs__srv__GetTaskList_Request__fini(&array->data[i]);
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

task_manager_msgs__srv__GetTaskList_Request__Sequence *
task_manager_msgs__srv__GetTaskList_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Request__Sequence * array = (task_manager_msgs__srv__GetTaskList_Request__Sequence *)allocator.allocate(sizeof(task_manager_msgs__srv__GetTaskList_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__srv__GetTaskList_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__srv__GetTaskList_Request__Sequence__destroy(task_manager_msgs__srv__GetTaskList_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__srv__GetTaskList_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__srv__GetTaskList_Request__Sequence__are_equal(const task_manager_msgs__srv__GetTaskList_Request__Sequence * lhs, const task_manager_msgs__srv__GetTaskList_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__srv__GetTaskList_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__srv__GetTaskList_Request__Sequence__copy(
  const task_manager_msgs__srv__GetTaskList_Request__Sequence * input,
  task_manager_msgs__srv__GetTaskList_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__srv__GetTaskList_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__srv__GetTaskList_Request * data =
      (task_manager_msgs__srv__GetTaskList_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__srv__GetTaskList_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__srv__GetTaskList_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__srv__GetTaskList_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `tlist`
#include "task_manager_msgs/msg/detail/task_description__functions.h"

bool
task_manager_msgs__srv__GetTaskList_Response__init(task_manager_msgs__srv__GetTaskList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // tlist
  if (!task_manager_msgs__msg__TaskDescription__Sequence__init(&msg->tlist, 0)) {
    task_manager_msgs__srv__GetTaskList_Response__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__srv__GetTaskList_Response__fini(task_manager_msgs__srv__GetTaskList_Response * msg)
{
  if (!msg) {
    return;
  }
  // tlist
  task_manager_msgs__msg__TaskDescription__Sequence__fini(&msg->tlist);
}

bool
task_manager_msgs__srv__GetTaskList_Response__are_equal(const task_manager_msgs__srv__GetTaskList_Response * lhs, const task_manager_msgs__srv__GetTaskList_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tlist
  if (!task_manager_msgs__msg__TaskDescription__Sequence__are_equal(
      &(lhs->tlist), &(rhs->tlist)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__srv__GetTaskList_Response__copy(
  const task_manager_msgs__srv__GetTaskList_Response * input,
  task_manager_msgs__srv__GetTaskList_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // tlist
  if (!task_manager_msgs__msg__TaskDescription__Sequence__copy(
      &(input->tlist), &(output->tlist)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__srv__GetTaskList_Response *
task_manager_msgs__srv__GetTaskList_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Response * msg = (task_manager_msgs__srv__GetTaskList_Response *)allocator.allocate(sizeof(task_manager_msgs__srv__GetTaskList_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__srv__GetTaskList_Response));
  bool success = task_manager_msgs__srv__GetTaskList_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__srv__GetTaskList_Response__destroy(task_manager_msgs__srv__GetTaskList_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__srv__GetTaskList_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__srv__GetTaskList_Response__Sequence__init(task_manager_msgs__srv__GetTaskList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Response * data = NULL;

  if (size) {
    data = (task_manager_msgs__srv__GetTaskList_Response *)allocator.zero_allocate(size, sizeof(task_manager_msgs__srv__GetTaskList_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__srv__GetTaskList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__srv__GetTaskList_Response__fini(&data[i - 1]);
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
task_manager_msgs__srv__GetTaskList_Response__Sequence__fini(task_manager_msgs__srv__GetTaskList_Response__Sequence * array)
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
      task_manager_msgs__srv__GetTaskList_Response__fini(&array->data[i]);
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

task_manager_msgs__srv__GetTaskList_Response__Sequence *
task_manager_msgs__srv__GetTaskList_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__GetTaskList_Response__Sequence * array = (task_manager_msgs__srv__GetTaskList_Response__Sequence *)allocator.allocate(sizeof(task_manager_msgs__srv__GetTaskList_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__srv__GetTaskList_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__srv__GetTaskList_Response__Sequence__destroy(task_manager_msgs__srv__GetTaskList_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__srv__GetTaskList_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__srv__GetTaskList_Response__Sequence__are_equal(const task_manager_msgs__srv__GetTaskList_Response__Sequence * lhs, const task_manager_msgs__srv__GetTaskList_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__srv__GetTaskList_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__srv__GetTaskList_Response__Sequence__copy(
  const task_manager_msgs__srv__GetTaskList_Response__Sequence * input,
  task_manager_msgs__srv__GetTaskList_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__srv__GetTaskList_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__srv__GetTaskList_Response * data =
      (task_manager_msgs__srv__GetTaskList_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__srv__GetTaskList_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__srv__GetTaskList_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__srv__GetTaskList_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
