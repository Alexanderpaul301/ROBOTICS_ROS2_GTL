// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from task_manager_msgs:srv/GetTaskList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "task_manager_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
#include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "task_manager_msgs/srv/detail/get_task_list__functions.h"
#include "task_manager_msgs/srv/detail/get_task_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task_manager_msgs__srv__GetTaskList_Request__init(message_memory);
}

void task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_fini_function(void * message_memory)
{
  task_manager_msgs__srv__GetTaskList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__srv__GetTaskList_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_members = {
  "task_manager_msgs__srv",  // message namespace
  "GetTaskList_Request",  // message name
  1,  // number of fields
  sizeof(task_manager_msgs__srv__GetTaskList_Request),
  task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_member_array,  // message members
  task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle = {
  0,
  &task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Request)() {
  if (!task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task_manager_msgs__srv__GetTaskList_Request__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "task_manager_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "task_manager_msgs/srv/detail/get_task_list__functions.h"
// already included above
// #include "task_manager_msgs/srv/detail/get_task_list__struct.h"


// Include directives for member types
// Member `tlist`
#include "task_manager_msgs/msg/task_description.h"
// Member `tlist`
#include "task_manager_msgs/msg/detail/task_description__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  task_manager_msgs__srv__GetTaskList_Response__init(message_memory);
}

void task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_fini_function(void * message_memory)
{
  task_manager_msgs__srv__GetTaskList_Response__fini(message_memory);
}

size_t task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__GetTaskList_Response__tlist(
  const void * untyped_member)
{
  const task_manager_msgs__msg__TaskDescription__Sequence * member =
    (const task_manager_msgs__msg__TaskDescription__Sequence *)(untyped_member);
  return member->size;
}

const void * task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__GetTaskList_Response__tlist(
  const void * untyped_member, size_t index)
{
  const task_manager_msgs__msg__TaskDescription__Sequence * member =
    (const task_manager_msgs__msg__TaskDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void * task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__GetTaskList_Response__tlist(
  void * untyped_member, size_t index)
{
  task_manager_msgs__msg__TaskDescription__Sequence * member =
    (task_manager_msgs__msg__TaskDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__fetch_function__GetTaskList_Response__tlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const task_manager_msgs__msg__TaskDescription * item =
    ((const task_manager_msgs__msg__TaskDescription *)
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__GetTaskList_Response__tlist(untyped_member, index));
  task_manager_msgs__msg__TaskDescription * value =
    (task_manager_msgs__msg__TaskDescription *)(untyped_value);
  *value = *item;
}

void task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__assign_function__GetTaskList_Response__tlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  task_manager_msgs__msg__TaskDescription * item =
    ((task_manager_msgs__msg__TaskDescription *)
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__GetTaskList_Response__tlist(untyped_member, index));
  const task_manager_msgs__msg__TaskDescription * value =
    (const task_manager_msgs__msg__TaskDescription *)(untyped_value);
  *item = *value;
}

bool task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__GetTaskList_Response__tlist(
  void * untyped_member, size_t size)
{
  task_manager_msgs__msg__TaskDescription__Sequence * member =
    (task_manager_msgs__msg__TaskDescription__Sequence *)(untyped_member);
  task_manager_msgs__msg__TaskDescription__Sequence__fini(member);
  return task_manager_msgs__msg__TaskDescription__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array[1] = {
  {
    "tlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs__srv__GetTaskList_Response, tlist),  // bytes offset in struct
    NULL,  // default value
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__size_function__GetTaskList_Response__tlist,  // size() function pointer
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_const_function__GetTaskList_Response__tlist,  // get_const(index) function pointer
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__get_function__GetTaskList_Response__tlist,  // get(index) function pointer
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__fetch_function__GetTaskList_Response__tlist,  // fetch(index, &value) function pointer
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__assign_function__GetTaskList_Response__tlist,  // assign(index, value) function pointer
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__resize_function__GetTaskList_Response__tlist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_members = {
  "task_manager_msgs__srv",  // message namespace
  "GetTaskList_Response",  // message name
  1,  // number of fields
  sizeof(task_manager_msgs__srv__GetTaskList_Response),
  task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array,  // message members
  task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle = {
  0,
  &task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Response)() {
  task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, msg, TaskDescription)();
  if (!task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &task_manager_msgs__srv__GetTaskList_Response__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "task_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "task_manager_msgs/srv/detail/get_task_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_members = {
  "task_manager_msgs__srv",  // service namespace
  "GetTaskList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_Request_message_type_support_handle,
  NULL  // response message
  // task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_Response_message_type_support_handle
};

static rosidl_service_type_support_t task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle = {
  0,
  &task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_task_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList)() {
  if (!task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.typesupport_identifier) {
    task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, task_manager_msgs, srv, GetTaskList_Response)()->data;
  }

  return &task_manager_msgs__srv__detail__get_task_list__rosidl_typesupport_introspection_c__GetTaskList_service_type_support_handle;
}
