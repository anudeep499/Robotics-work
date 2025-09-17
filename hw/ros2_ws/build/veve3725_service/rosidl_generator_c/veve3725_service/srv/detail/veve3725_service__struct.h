// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#ifndef VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_H_
#define VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/Veve3725Service in the package veve3725_service.
typedef struct veve3725_service__srv__Veve3725Service_Request
{
  std_msgs__msg__String data;
} veve3725_service__srv__Veve3725Service_Request;

// Struct for a sequence of veve3725_service__srv__Veve3725Service_Request.
typedef struct veve3725_service__srv__Veve3725Service_Request__Sequence
{
  veve3725_service__srv__Veve3725Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} veve3725_service__srv__Veve3725Service_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reversed'
// already included above
// #include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in srv/Veve3725Service in the package veve3725_service.
typedef struct veve3725_service__srv__Veve3725Service_Response
{
  std_msgs__msg__String reversed;
  double runtime_sec;
} veve3725_service__srv__Veve3725Service_Response;

// Struct for a sequence of veve3725_service__srv__Veve3725Service_Response.
typedef struct veve3725_service__srv__Veve3725Service_Response__Sequence
{
  veve3725_service__srv__Veve3725Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} veve3725_service__srv__Veve3725Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__STRUCT_H_
