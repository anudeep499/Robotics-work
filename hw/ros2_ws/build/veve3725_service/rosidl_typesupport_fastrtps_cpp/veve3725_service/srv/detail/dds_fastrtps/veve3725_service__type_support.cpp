// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice
#include "veve3725_service/srv/detail/veve3725_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "veve3725_service/srv/detail/veve3725_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::String &);
size_t get_serialized_size(
  const std_msgs::msg::String &,
  size_t current_alignment);
size_t
max_serialized_size_String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace veve3725_service
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
cdr_serialize(
  const veve3725_service::srv::Veve3725Service_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  veve3725_service::srv::Veve3725Service_Request & ros_message)
{
  // Member: data
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
get_serialized_size(
  const veve3725_service::srv::Veve3725Service_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
max_serialized_size_Veve3725Service_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = veve3725_service::srv::Veve3725Service_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Veve3725Service_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const veve3725_service::srv::Veve3725Service_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Veve3725Service_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<veve3725_service::srv::Veve3725Service_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Veve3725Service_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const veve3725_service::srv::Veve3725Service_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Veve3725Service_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Veve3725Service_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Veve3725Service_Request__callbacks = {
  "veve3725_service::srv",
  "Veve3725Service_Request",
  _Veve3725Service_Request__cdr_serialize,
  _Veve3725Service_Request__cdr_deserialize,
  _Veve3725Service_Request__get_serialized_size,
  _Veve3725Service_Request__max_serialized_size
};

static rosidl_message_type_support_t _Veve3725Service_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Veve3725Service_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace veve3725_service

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_veve3725_service
const rosidl_message_type_support_t *
get_message_type_support_handle<veve3725_service::srv::Veve3725Service_Request>()
{
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, veve3725_service, srv, Veve3725Service_Request)() {
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
// functions for std_msgs::msg::String already declared above


namespace veve3725_service
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
cdr_serialize(
  const veve3725_service::srv::Veve3725Service_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: reversed
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.reversed,
    cdr);
  // Member: runtime_sec
  cdr << ros_message.runtime_sec;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  veve3725_service::srv::Veve3725Service_Response & ros_message)
{
  // Member: reversed
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.reversed);

  // Member: runtime_sec
  cdr >> ros_message.runtime_sec;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
get_serialized_size(
  const veve3725_service::srv::Veve3725Service_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: reversed

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.reversed, current_alignment);
  // Member: runtime_sec
  {
    size_t item_size = sizeof(ros_message.runtime_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_veve3725_service
max_serialized_size_Veve3725Service_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: reversed
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: runtime_sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = veve3725_service::srv::Veve3725Service_Response;
    is_plain =
      (
      offsetof(DataType, runtime_sec) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Veve3725Service_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const veve3725_service::srv::Veve3725Service_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Veve3725Service_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<veve3725_service::srv::Veve3725Service_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Veve3725Service_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const veve3725_service::srv::Veve3725Service_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Veve3725Service_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Veve3725Service_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Veve3725Service_Response__callbacks = {
  "veve3725_service::srv",
  "Veve3725Service_Response",
  _Veve3725Service_Response__cdr_serialize,
  _Veve3725Service_Response__cdr_deserialize,
  _Veve3725Service_Response__get_serialized_size,
  _Veve3725Service_Response__max_serialized_size
};

static rosidl_message_type_support_t _Veve3725Service_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Veve3725Service_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace veve3725_service

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_veve3725_service
const rosidl_message_type_support_t *
get_message_type_support_handle<veve3725_service::srv::Veve3725Service_Response>()
{
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, veve3725_service, srv, Veve3725Service_Response)() {
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace veve3725_service
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Veve3725Service__callbacks = {
  "veve3725_service::srv",
  "Veve3725Service",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, veve3725_service, srv, Veve3725Service_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, veve3725_service, srv, Veve3725Service_Response)(),
};

static rosidl_service_type_support_t _Veve3725Service__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Veve3725Service__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace veve3725_service

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_veve3725_service
const rosidl_service_type_support_t *
get_service_type_support_handle<veve3725_service::srv::Veve3725Service>()
{
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, veve3725_service, srv, Veve3725Service)() {
  return &veve3725_service::srv::typesupport_fastrtps_cpp::_Veve3725Service__handle;
}

#ifdef __cplusplus
}
#endif
