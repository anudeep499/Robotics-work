// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#ifndef VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__TRAITS_HPP_
#define VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "veve3725_service/srv/detail/veve3725_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace veve3725_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Veve3725Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Veve3725Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Veve3725Service_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace veve3725_service

namespace rosidl_generator_traits
{

[[deprecated("use veve3725_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const veve3725_service::srv::Veve3725Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  veve3725_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use veve3725_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const veve3725_service::srv::Veve3725Service_Request & msg)
{
  return veve3725_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<veve3725_service::srv::Veve3725Service_Request>()
{
  return "veve3725_service::srv::Veve3725Service_Request";
}

template<>
inline const char * name<veve3725_service::srv::Veve3725Service_Request>()
{
  return "veve3725_service/srv/Veve3725Service_Request";
}

template<>
struct has_fixed_size<veve3725_service::srv::Veve3725Service_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<veve3725_service::srv::Veve3725Service_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<veve3725_service::srv::Veve3725Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'reversed'
// already included above
// #include "std_msgs/msg/detail/string__traits.hpp"

namespace veve3725_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const Veve3725Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reversed
  {
    out << "reversed: ";
    to_flow_style_yaml(msg.reversed, out);
    out << ", ";
  }

  // member: runtime_sec
  {
    out << "runtime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Veve3725Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reversed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reversed:\n";
    to_block_style_yaml(msg.reversed, out, indentation + 2);
  }

  // member: runtime_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Veve3725Service_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace veve3725_service

namespace rosidl_generator_traits
{

[[deprecated("use veve3725_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const veve3725_service::srv::Veve3725Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  veve3725_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use veve3725_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const veve3725_service::srv::Veve3725Service_Response & msg)
{
  return veve3725_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<veve3725_service::srv::Veve3725Service_Response>()
{
  return "veve3725_service::srv::Veve3725Service_Response";
}

template<>
inline const char * name<veve3725_service::srv::Veve3725Service_Response>()
{
  return "veve3725_service/srv/Veve3725Service_Response";
}

template<>
struct has_fixed_size<veve3725_service::srv::Veve3725Service_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<veve3725_service::srv::Veve3725Service_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<veve3725_service::srv::Veve3725Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<veve3725_service::srv::Veve3725Service>()
{
  return "veve3725_service::srv::Veve3725Service";
}

template<>
inline const char * name<veve3725_service::srv::Veve3725Service>()
{
  return "veve3725_service/srv/Veve3725Service";
}

template<>
struct has_fixed_size<veve3725_service::srv::Veve3725Service>
  : std::integral_constant<
    bool,
    has_fixed_size<veve3725_service::srv::Veve3725Service_Request>::value &&
    has_fixed_size<veve3725_service::srv::Veve3725Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<veve3725_service::srv::Veve3725Service>
  : std::integral_constant<
    bool,
    has_bounded_size<veve3725_service::srv::Veve3725Service_Request>::value &&
    has_bounded_size<veve3725_service::srv::Veve3725Service_Response>::value
  >
{
};

template<>
struct is_service<veve3725_service::srv::Veve3725Service>
  : std::true_type
{
};

template<>
struct is_service_request<veve3725_service::srv::Veve3725Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<veve3725_service::srv::Veve3725Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__TRAITS_HPP_
