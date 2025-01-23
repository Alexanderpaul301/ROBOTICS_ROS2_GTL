// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from task_manager_msgs:msg/TaskConfig.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "task_manager_msgs/msg/detail/task_config__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace task_manager_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskConfig_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) task_manager_msgs::msg::TaskConfig(_init);
}

void TaskConfig_fini_function(void * message_memory)
{
  auto typed_message = static_cast<task_manager_msgs::msg::TaskConfig *>(message_memory);
  typed_message->~TaskConfig();
}

size_t size_function__TaskConfig__plist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rcl_interfaces::msg::Parameter> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskConfig__plist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rcl_interfaces::msg::Parameter> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskConfig__plist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rcl_interfaces::msg::Parameter> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskConfig__plist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rcl_interfaces::msg::Parameter *>(
    get_const_function__TaskConfig__plist(untyped_member, index));
  auto & value = *reinterpret_cast<rcl_interfaces::msg::Parameter *>(untyped_value);
  value = item;
}

void assign_function__TaskConfig__plist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rcl_interfaces::msg::Parameter *>(
    get_function__TaskConfig__plist(untyped_member, index));
  const auto & value = *reinterpret_cast<const rcl_interfaces::msg::Parameter *>(untyped_value);
  item = value;
}

void resize_function__TaskConfig__plist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rcl_interfaces::msg::Parameter> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskConfig_message_member_array[1] = {
  {
    "plist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rcl_interfaces::msg::Parameter>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(task_manager_msgs::msg::TaskConfig, plist),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskConfig__plist,  // size() function pointer
    get_const_function__TaskConfig__plist,  // get_const(index) function pointer
    get_function__TaskConfig__plist,  // get(index) function pointer
    fetch_function__TaskConfig__plist,  // fetch(index, &value) function pointer
    assign_function__TaskConfig__plist,  // assign(index, value) function pointer
    resize_function__TaskConfig__plist  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskConfig_message_members = {
  "task_manager_msgs::msg",  // message namespace
  "TaskConfig",  // message name
  1,  // number of fields
  sizeof(task_manager_msgs::msg::TaskConfig),
  TaskConfig_message_member_array,  // message members
  TaskConfig_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskConfig_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskConfig_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskConfig_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace task_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<task_manager_msgs::msg::TaskConfig>()
{
  return &::task_manager_msgs::msg::rosidl_typesupport_introspection_cpp::TaskConfig_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, task_manager_msgs, msg, TaskConfig)() {
  return &::task_manager_msgs::msg::rosidl_typesupport_introspection_cpp::TaskConfig_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
