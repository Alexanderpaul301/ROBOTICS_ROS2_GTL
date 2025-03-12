// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wpa_cli_msgs:msg/Scan.idl
// generated code does not contain a copyright notice

#ifndef WPA_CLI_MSGS__MSG__DETAIL__SCAN__TRAITS_HPP_
#define WPA_CLI_MSGS__MSG__DETAIL__SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wpa_cli_msgs/msg/detail/scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'networks'
#include "wpa_cli_msgs/msg/detail/network__traits.hpp"

namespace wpa_cli_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Scan & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: interface
  {
    out << "interface: ";
    rosidl_generator_traits::value_to_yaml(msg.interface, out);
    out << ", ";
  }

  // member: networks
  {
    if (msg.networks.size() == 0) {
      out << "networks: []";
    } else {
      out << "networks: [";
      size_t pending_items = msg.networks.size();
      for (auto item : msg.networks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface: ";
    rosidl_generator_traits::value_to_yaml(msg.interface, out);
    out << "\n";
  }

  // member: networks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.networks.size() == 0) {
      out << "networks: []\n";
    } else {
      out << "networks:\n";
      for (auto item : msg.networks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Scan & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wpa_cli_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wpa_cli_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wpa_cli_msgs::msg::Scan & msg,
  std::ostream & out, size_t indentation = 0)
{
  wpa_cli_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wpa_cli_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wpa_cli_msgs::msg::Scan & msg)
{
  return wpa_cli_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wpa_cli_msgs::msg::Scan>()
{
  return "wpa_cli_msgs::msg::Scan";
}

template<>
inline const char * name<wpa_cli_msgs::msg::Scan>()
{
  return "wpa_cli_msgs/msg/Scan";
}

template<>
struct has_fixed_size<wpa_cli_msgs::msg::Scan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wpa_cli_msgs::msg::Scan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wpa_cli_msgs::msg::Scan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WPA_CLI_MSGS__MSG__DETAIL__SCAN__TRAITS_HPP_
