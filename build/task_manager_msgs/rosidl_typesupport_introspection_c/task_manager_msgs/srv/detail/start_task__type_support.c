// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from task_manager_msgs:srv/StartTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "task_manager_msgs/srv/detail/start_task__rosidl_typesupport_introspection_c.h"
#include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "task_manager_msgs/srv/detail/start_task__functions.h"
#include "task_manager_msgs/srv/detail/start_task__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `config`
#include "rcl_interfaces/msg/parameter.h"
// Member `config`
#include "rcl_interfaces/msg/detail/parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task_manager_msgs__srv__StartTask_Request__init(message_memory);
}

void task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_fini_function(void * message_memory)
{
  task_manager_msgs__srv__StartTask_Request__fini(message_memory);
}

size_t task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__size_function__StartTask_Request__config(
  const void * untyped_member)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return member->size;
}

const void * task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_const_function__StartTask_Request__config(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__Parameter__Sequence * member =
    (const rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_function__StartTask_Request__config(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__fetch_function__StartTask_Request__config(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rcl_interfaces__msg__Parameter * item =
    ((const rcl_interfaces__msg__Parameter *)
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_const_function__StartTask_Request__config(untyped_member, index));
  rcl_interfaces__msg__Parameter * value =
    (rcl_interfaces__msg__Parameter *)(untyped_value);
  *value = *item;
}

void task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__assign_function__StartTask_Request__config(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rcl_interfaces__msg__Parameter * item =
    ((rcl_interfaces__msg__Parameter *)
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_function__StartTask_Request__config(untyped_member, index));
  const rcl_interfaces__msg__Parameter * value =
    (const rcl_interfaces__msg__Parameter *)(untyped_value);
  *item = *value;
}

bool task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__resize_function__StartTask_Request__config(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__Parameter__Sequence * member =
    (rcl_interfaces__msg__Parameter__Sequence *)(untyped_member);
  rcl_interfaces__msg__Parameter__Sequence__fini(member);
  return rcl_interfaces__msg__Parameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__srv__StartTask_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__srv__StartTask_Request, config),  // bytes offset in struct
    NULL,  // default value
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__size_function__StartTask_Request__config,  // size() function pointer
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_const_function__StartTask_Request__config,  // get_const(index) function pointer
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__get_function__StartTask_Request__config,  // get(index) function pointer
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__fetch_function__StartTask_Request__config,  // fetch(index, &value) function pointer
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__assign_function__StartTask_Request__config,  // assign(index, value) function pointer
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__resize_function__StartTask_Request__config  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_members = {
  "task_manager_msgs__srv",  // message namespace
  "StartTask_Request",  // message name
  2,  // number of fields
  sizeof(task_manager_msgs__srv__StartTask_Request),
  task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_member_array,  // message members
  task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_type_support_handle = {
  0,
  &task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Request)() {
  task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, Parameter)();
  if (!task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task_manager_msgs__srv__StartTask_Request__rosidl_typesupport_introspection_c__StartTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "task_manager_msgs/srv/detail/start_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "task_manager_msgs/srv/detail/start_task__functions.h"
// already included above
// #include "task_manager_msgs/srv/detail/start_task__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task_manager_msgs__srv__StartTask_Response__init(message_memory);
}

void task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_fini_function(void * message_memory)
{
  task_manager_msgs__srv__StartTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__srv__StartTask_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_members = {
  "task_manager_msgs__srv",  // message namespace
  "StartTask_Response",  // message name
  1,  // number of fields
  sizeof(task_manager_msgs__srv__StartTask_Response),
  task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_member_array,  // message members
  task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_type_support_handle = {
  0,
  &task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Response)() {
  if (!task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task_manager_msgs__srv__StartTask_Response__rosidl_typesupport_introspection_c__StartTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "task_manager_msgs/srv/detail/start_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_members = {
  "task_manager_msgs__srv",  // service namespace
  "StartTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_Request_message_type_support_handle,
  NULL  // response message
  // task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_type_support_handle = {
  0,
  &task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask)() {
  if (!task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, StartTask_Response)()->data;
  }

  return &task_manager_msgs__srv__detail__start_task__rosidl_typesupport_introspection_c__StartTask_service_type_support_handle;
}
