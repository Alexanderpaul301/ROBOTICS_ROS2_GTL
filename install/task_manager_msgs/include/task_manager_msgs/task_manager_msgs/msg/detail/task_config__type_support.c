// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "task_manager_msgs/msg/detail/task_config__rosidl_typesupport_introspection_c.h"
#include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "task_manager_msgs/msg/detail/task_config__functions.h"
#include "task_manager_msgs/msg/detail/task_config__struct.h"


// Include directives for member types
// Member `plist`
#include "rcl_interfaces/msg/parameter.h"
// Member `plist`
#include "rcl_interfaces/msg/detail/parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task_manager_msgs__msg__TaskConfig__init(message_memory);
}

void task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_fini_function(void * message_memory)
{
  task_manager_msgs__msg__TaskConfig__fini(message_memory);
}

size_t task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__size_function__TaskConfig__plist(
  const void * untyped_member)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return member->size;
}

const void * task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_const_function__TaskConfig__plist(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_function__TaskConfig__plist(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__fetch_function__TaskConfig__plist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rcl_interfaces__msg__Parameter * item =
    ((const rcl_interfaces__msg__Parameter *)
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_const_function__TaskConfig__plist(untyped_member, index));
  rcl_interfaces__msg__Parameter * value =
    (rcl_interfaces__msg__Parameter *)(untyped_value);
  *value = *item;
}

void task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__assign_function__TaskConfig__plist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rcl_interfaces__msg__Parameter * item =
    ((rcl_interfaces__msg__Parameter *)
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_function__TaskConfig__plist(untyped_member, index));
  const rcl_interfaces__msg__Parameter * value =
    (const rcl_interfaces__msg__Parameter *)(untyped_value);
  *item = *value;
}

bool task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__resize_function__TaskConfig__plist(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  rcl_interfaces__msg__Parameter__Sequence__fini(member);
  return rcl_interfaces__msg__Parameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_member_array[1] = {
  {
    "plist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__msg__TaskConfig, plist),  // bytes offset in struct
    NULL,  // default value
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__size_function__TaskConfig__plist,  // size() function pointer
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_const_function__TaskConfig__plist,  // get_const(index) function pointer
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__get_function__TaskConfig__plist,  // get(index) function pointer
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__fetch_function__TaskConfig__plist,  // fetch(index, &value) function pointer
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__assign_function__TaskConfig__plist,  // assign(index, value) function pointer
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__resize_function__TaskConfig__plist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_members = {
  "task_manager_msgs__msg",  // message namespace
  "TaskConfig",  // message name
  1,  // number of fields
  sizeof(task_manager_msgs__msg__TaskConfig),
  task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_member_array,  // message members
  task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_type_support_handle = {
  0,
  &task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, msg, TaskConfig)() {
  task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, Parameter)();
  if (!task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_type_support_handle.typesupport_identifier) {
    task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task_manager_msgs__msg__TaskConfig__rosidl_typesupport_introspection_c__TaskConfig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
