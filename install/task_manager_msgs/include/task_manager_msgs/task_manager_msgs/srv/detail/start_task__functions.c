// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_manager_msgs:srv/StartTask.idl
// generated code does not contain a copyright notice
#include "task_manager_msgs/srv/detail/start_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `config`
#include "rcl_interfaces/msg/detail/parameter__functions.h"

bool
task_manager_msgs__srv__StartTask_Request__init(task_manager_msgs__srv__StartTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    task_manager_msgs__srv__StartTask_Request__fini(msg);
    return false;
  }
  // config
  if (!rcl_interfaces__msg__Parameter__Sequence__init(&msg->config, 0)) {
    task_manager_msgs__srv__StartTask_Request__fini(msg);
    return false;
  }
  return true;
}

void
task_manager_msgs__srv__StartTask_Request__fini(task_manager_msgs__srv__StartTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // config
  rcl_interfaces__msg__Parameter__Sequence__fini(&msg->config);
}

bool
task_manager_msgs__srv__StartTask_Request__are_equal(const task_manager_msgs__srv__StartTask_Request * lhs, const task_manager_msgs__srv__StartTask_Request * rhs)
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
  // config
  if (!rcl_interfaces__msg__Parameter__Sequence__are_equal(
      &(lhs->config), &(rhs->config)))
  {
    return false;
  }
  return true;
}

bool
task_manager_msgs__srv__StartTask_Request__copy(
  const task_manager_msgs__srv__StartTask_Request * input,
  task_manager_msgs__srv__StartTask_Request * output)
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
  // config
  if (!rcl_interfaces__msg__Parameter__Sequence__copy(
      &(input->config), &(output->config)))
  {
    return false;
  }
  return true;
}

task_manager_msgs__srv__StartTask_Request *
task_manager_msgs__srv__StartTask_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Request * msg = (task_manager_msgs__srv__StartTask_Request *)allocator.allocate(sizeof(task_manager_msgs__srv__StartTask_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__srv__StartTask_Request));
  bool success = task_manager_msgs__srv__StartTask_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__srv__StartTask_Request__destroy(task_manager_msgs__srv__StartTask_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__srv__StartTask_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__srv__StartTask_Request__Sequence__init(task_manager_msgs__srv__StartTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Request * data = NULL;

  if (size) {
    data = (task_manager_msgs__srv__StartTask_Request *)allocator.zero_allocate(size, sizeof(task_manager_msgs__srv__StartTask_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__srv__StartTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__srv__StartTask_Request__fini(&data[i - 1]);
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
task_manager_msgs__srv__StartTask_Request__Sequence__fini(task_manager_msgs__srv__StartTask_Request__Sequence * array)
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
      task_manager_msgs__srv__StartTask_Request__fini(&array->data[i]);
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

task_manager_msgs__srv__StartTask_Request__Sequence *
task_manager_msgs__srv__StartTask_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Request__Sequence * array = (task_manager_msgs__srv__StartTask_Request__Sequence *)allocator.allocate(sizeof(task_manager_msgs__srv__StartTask_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__srv__StartTask_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__srv__StartTask_Request__Sequence__destroy(task_manager_msgs__srv__StartTask_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__srv__StartTask_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__srv__StartTask_Request__Sequence__are_equal(const task_manager_msgs__srv__StartTask_Request__Sequence * lhs, const task_manager_msgs__srv__StartTask_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__srv__StartTask_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__srv__StartTask_Request__Sequence__copy(
  const task_manager_msgs__srv__StartTask_Request__Sequence * input,
  task_manager_msgs__srv__StartTask_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__srv__StartTask_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__srv__StartTask_Request * data =
      (task_manager_msgs__srv__StartTask_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__srv__StartTask_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__srv__StartTask_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__srv__StartTask_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
task_manager_msgs__srv__StartTask_Response__init(task_manager_msgs__srv__StartTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // id
  return true;
}

void
task_manager_msgs__srv__StartTask_Response__fini(task_manager_msgs__srv__StartTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // id
}

bool
task_manager_msgs__srv__StartTask_Response__are_equal(const task_manager_msgs__srv__StartTask_Response * lhs, const task_manager_msgs__srv__StartTask_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
task_manager_msgs__srv__StartTask_Response__copy(
  const task_manager_msgs__srv__StartTask_Response * input,
  task_manager_msgs__srv__StartTask_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

task_manager_msgs__srv__StartTask_Response *
task_manager_msgs__srv__StartTask_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Response * msg = (task_manager_msgs__srv__StartTask_Response *)allocator.allocate(sizeof(task_manager_msgs__srv__StartTask_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_manager_msgs__srv__StartTask_Response));
  bool success = task_manager_msgs__srv__StartTask_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_manager_msgs__srv__StartTask_Response__destroy(task_manager_msgs__srv__StartTask_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_manager_msgs__srv__StartTask_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_manager_msgs__srv__StartTask_Response__Sequence__init(task_manager_msgs__srv__StartTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Response * data = NULL;

  if (size) {
    data = (task_manager_msgs__srv__StartTask_Response *)allocator.zero_allocate(size, sizeof(task_manager_msgs__srv__StartTask_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_manager_msgs__srv__StartTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_manager_msgs__srv__StartTask_Response__fini(&data[i - 1]);
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
task_manager_msgs__srv__StartTask_Response__Sequence__fini(task_manager_msgs__srv__StartTask_Response__Sequence * array)
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
      task_manager_msgs__srv__StartTask_Response__fini(&array->data[i]);
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

task_manager_msgs__srv__StartTask_Response__Sequence *
task_manager_msgs__srv__StartTask_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_manager_msgs__srv__StartTask_Response__Sequence * array = (task_manager_msgs__srv__StartTask_Response__Sequence *)allocator.allocate(sizeof(task_manager_msgs__srv__StartTask_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_manager_msgs__srv__StartTask_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_manager_msgs__srv__StartTask_Response__Sequence__destroy(task_manager_msgs__srv__StartTask_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_manager_msgs__srv__StartTask_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_manager_msgs__srv__StartTask_Response__Sequence__are_equal(const task_manager_msgs__srv__StartTask_Response__Sequence * lhs, const task_manager_msgs__srv__StartTask_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_manager_msgs__srv__StartTask_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_manager_msgs__srv__StartTask_Response__Sequence__copy(
  const task_manager_msgs__srv__StartTask_Response__Sequence * input,
  task_manager_msgs__srv__StartTask_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_manager_msgs__srv__StartTask_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_manager_msgs__srv__StartTask_Response * data =
      (task_manager_msgs__srv__StartTask_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_manager_msgs__srv__StartTask_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_manager_msgs__srv__StartTask_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_manager_msgs__srv__StartTask_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
