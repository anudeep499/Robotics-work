// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#ifndef VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__BUILDER_HPP_
#define VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "veve3725_service/srv/detail/veve3725_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace veve3725_service
{

namespace srv
{

namespace builder
{

class Init_Veve3725Service_Request_data
{
public:
  Init_Veve3725Service_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::veve3725_service::srv::Veve3725Service_Request data(::veve3725_service::srv::Veve3725Service_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::veve3725_service::srv::Veve3725Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::veve3725_service::srv::Veve3725Service_Request>()
{
  return veve3725_service::srv::builder::Init_Veve3725Service_Request_data();
}

}  // namespace veve3725_service


namespace veve3725_service
{

namespace srv
{

namespace builder
{

class Init_Veve3725Service_Response_runtime_sec
{
public:
  explicit Init_Veve3725Service_Response_runtime_sec(::veve3725_service::srv::Veve3725Service_Response & msg)
  : msg_(msg)
  {}
  ::veve3725_service::srv::Veve3725Service_Response runtime_sec(::veve3725_service::srv::Veve3725Service_Response::_runtime_sec_type arg)
  {
    msg_.runtime_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::veve3725_service::srv::Veve3725Service_Response msg_;
};

class Init_Veve3725Service_Response_reversed
{
public:
  Init_Veve3725Service_Response_reversed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Veve3725Service_Response_runtime_sec reversed(::veve3725_service::srv::Veve3725Service_Response::_reversed_type arg)
  {
    msg_.reversed = std::move(arg);
    return Init_Veve3725Service_Response_runtime_sec(msg_);
  }

private:
  ::veve3725_service::srv::Veve3725Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::veve3725_service::srv::Veve3725Service_Response>()
{
  return veve3725_service::srv::builder::Init_Veve3725Service_Response_reversed();
}

}  // namespace veve3725_service

#endif  // VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__BUILDER_HPP_
