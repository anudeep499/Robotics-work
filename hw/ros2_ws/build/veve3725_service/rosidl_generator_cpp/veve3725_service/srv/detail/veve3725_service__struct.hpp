// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#ifndef VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_HPP_
#define VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__veve3725_service__srv__Veve3725Service_Request __attribute__((deprecated))
#else
# define DEPRECATED__veve3725_service__srv__Veve3725Service_Request __declspec(deprecated)
#endif

namespace veve3725_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Veve3725Service_Request_
{
  using Type = Veve3725Service_Request_<ContainerAllocator>;

  explicit Veve3725Service_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit Veve3725Service_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__veve3725_service__srv__Veve3725Service_Request
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__veve3725_service__srv__Veve3725Service_Request
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Veve3725Service_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Veve3725Service_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Veve3725Service_Request_

// alias to use template instance with default allocator
using Veve3725Service_Request =
  veve3725_service::srv::Veve3725Service_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace veve3725_service


// Include directives for member types
// Member 'reversed'
// already included above
// #include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__veve3725_service__srv__Veve3725Service_Response __attribute__((deprecated))
#else
# define DEPRECATED__veve3725_service__srv__Veve3725Service_Response __declspec(deprecated)
#endif

namespace veve3725_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Veve3725Service_Response_
{
  using Type = Veve3725Service_Response_<ContainerAllocator>;

  explicit Veve3725Service_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reversed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->runtime_sec = 0.0;
    }
  }

  explicit Veve3725Service_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reversed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->runtime_sec = 0.0;
    }
  }

  // field types and members
  using _reversed_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _reversed_type reversed;
  using _runtime_sec_type =
    double;
  _runtime_sec_type runtime_sec;

  // setters for named parameter idiom
  Type & set__reversed(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->reversed = _arg;
    return *this;
  }
  Type & set__runtime_sec(
    const double & _arg)
  {
    this->runtime_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__veve3725_service__srv__Veve3725Service_Response
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__veve3725_service__srv__Veve3725Service_Response
    std::shared_ptr<veve3725_service::srv::Veve3725Service_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Veve3725Service_Response_ & other) const
  {
    if (this->reversed != other.reversed) {
      return false;
    }
    if (this->runtime_sec != other.runtime_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const Veve3725Service_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Veve3725Service_Response_

// alias to use template instance with default allocator
using Veve3725Service_Response =
  veve3725_service::srv::Veve3725Service_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace veve3725_service

namespace veve3725_service
{

namespace srv
{

struct Veve3725Service
{
  using Request = veve3725_service::srv::Veve3725Service_Request;
  using Response = veve3725_service::srv::Veve3725Service_Response;
};

}  // namespace srv

}  // namespace veve3725_service

#endif  // VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_HPP_
