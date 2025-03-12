// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wpa_cli_msgs/msg/detail/scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wpa_cli_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Scan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wpa_cli_msgs::msg::Scan(_init);
}

void Scan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wpa_cli_msgs::msg::Scan *>(message_memory);
  typed_message->~Scan();
}

size_t size_function__Scan__networks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<wpa_cli_msgs::msg::Network> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Scan__networks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<wpa_cli_msgs::msg::Network> *>(untyped_member);
  return &member[index];
}

void * get_function__Scan__networks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<wpa_cli_msgs::msg::Network> *>(untyped_member);
  return &member[index];
}

void fetch_function__Scan__networks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const wpa_cli_msgs::msg::Network *>(
    get_const_function__Scan__networks(untyped_member, index));
  auto & value = *reinterpret_cast<wpa_cli_msgs::msg::Network *>(untyped_value);
  value = item;
}

void assign_function__Scan__networks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<wpa_cli_msgs::msg::Network *>(
    get_function__Scan__networks(untyped_member, index));
  const auto & value = *reinterpret_cast<const wpa_cli_msgs::msg::Network *>(untyped_value);
  item = value;
}

void resize_function__Scan__networks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<wpa_cli_msgs::msg::Network> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Scan_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs::msg::Scan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "interface",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs::msg::Scan, interface),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "networks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wpa_cli_msgs::msg::Network>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wpa_cli_msgs::msg::Scan, networks),  // bytes offset in struct
    nullptr,  // default value
    size_function__Scan__networks,  // size() function pointer
    get_const_function__Scan__networks,  // get_const(index) function pointer
    get_function__Scan__networks,  // get(index) function pointer
    fetch_function__Scan__networks,  // fetch(index, &value) function pointer
    assign_function__Scan__networks,  // assign(index, value) function pointer
    resize_function__Scan__networks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Scan_message_members = {
  "wpa_cli_msgs::msg",  // message namespace
  "Scan",  // message name
  3,  // number of fields
  sizeof(wpa_cli_msgs::msg::Scan),
  Scan_message_member_array,  // message members
  Scan_init_function,  // function to initialize message memory (memory has to be allocated)
  Scan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Scan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Scan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wpa_cli_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wpa_cli_msgs::msg::Scan>()
{
  return &::wpa_cli_msgs::msg::rosidl_typesupport_introspection_cpp::Scan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wpa_cli_msgs, msg, Scan)() {
  return &::wpa_cli_msgs::msg::rosidl_typesupport_introspection_cpp::Scan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
