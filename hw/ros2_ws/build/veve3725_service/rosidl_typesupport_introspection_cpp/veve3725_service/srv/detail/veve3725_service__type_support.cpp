// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "veve3725_service/srv/detail/veve3725_service__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace veve3725_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Veve3725Service_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) veve3725_service::srv::Veve3725Service_Request(_init);
}

void Veve3725Service_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<veve3725_service::srv::Veve3725Service_Request *>(message_memory);
  typed_message->~Veve3725Service_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Veve3725Service_Request_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::String>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(veve3725_service::srv::Veve3725Service_Request, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Veve3725Service_Request_message_members = {
  "veve3725_service::srv",  // message namespace
  "Veve3725Service_Request",  // message name
  1,  // number of fields
  sizeof(veve3725_service::srv::Veve3725Service_Request),
  Veve3725Service_Request_message_member_array,  // message members
  Veve3725Service_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Veve3725Service_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Veve3725Service_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Veve3725Service_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace veve3725_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<veve3725_service::srv::Veve3725Service_Request>()
{
  return &::veve3725_service::srv::rosidl_typesupport_introspection_cpp::Veve3725Service_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, veve3725_service, srv, Veve3725Service_Request)() {
  return &::veve3725_service::srv::rosidl_typesupport_introspection_cpp::Veve3725Service_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "veve3725_service/srv/detail/veve3725_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace veve3725_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Veve3725Service_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) veve3725_service::srv::Veve3725Service_Response(_init);
}

void Veve3725Service_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<veve3725_service::srv::Veve3725Service_Response *>(message_memory);
  typed_message->~Veve3725Service_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Veve3725Service_Response_message_member_array[2] = {
  {
    "reversed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::String>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(veve3725_service::srv::Veve3725Service_Response, reversed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "runtime_sec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(veve3725_service::srv::Veve3725Service_Response, runtime_sec),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Veve3725Service_Response_message_members = {
  "veve3725_service::srv",  // message namespace
  "Veve3725Service_Response",  // message name
  2,  // number of fields
  sizeof(veve3725_service::srv::Veve3725Service_Response),
  Veve3725Service_Response_message_member_array,  // message members
  Veve3725Service_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Veve3725Service_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Veve3725Service_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Veve3725Service_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace veve3725_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<veve3725_service::srv::Veve3725Service_Response>()
{
  return &::veve3725_service::srv::rosidl_typesupport_introspection_cpp::Veve3725Service_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, veve3725_service, srv, Veve3725Service_Response)() {
  return &::veve3725_service::srv::rosidl_typesupport_introspection_cpp::Veve3725Service_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "veve3725_service/srv/detail/veve3725_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace veve3725_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Veve3725Service_service_members = {
  "veve3725_service::srv",  // service namespace
  "Veve3725Service",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<veve3725_service::srv::Veve3725Service>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Veve3725Service_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Veve3725Service_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace veve3725_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<veve3725_service::srv::Veve3725Service>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::veve3725_service::srv::rosidl_typesupport_introspection_cpp::Veve3725Service_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::veve3725_service::srv::Veve3725Service_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::veve3725_service::srv::Veve3725Service_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, veve3725_service, srv, Veve3725Service)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<veve3725_service::srv::Veve3725Service>();
}

#ifdef __cplusplus
}
#endif
