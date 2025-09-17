// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice

#ifndef VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__FUNCTIONS_H_
#define VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "veve3725_service/msg/rosidl_generator_c__visibility_control.h"

#include "veve3725_service/srv/detail/veve3725_service__struct.h"

/// Initialize srv/Veve3725Service message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * veve3725_service__srv__Veve3725Service_Request
 * )) before or use
 * veve3725_service__srv__Veve3725Service_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__init(veve3725_service__srv__Veve3725Service_Request * msg);

/// Finalize srv/Veve3725Service message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Request__fini(veve3725_service__srv__Veve3725Service_Request * msg);

/// Create srv/Veve3725Service message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * veve3725_service__srv__Veve3725Service_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
veve3725_service__srv__Veve3725Service_Request *
veve3725_service__srv__Veve3725Service_Request__create();

/// Destroy srv/Veve3725Service message.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Request__destroy(veve3725_service__srv__Veve3725Service_Request * msg);

/// Check for srv/Veve3725Service message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__are_equal(const veve3725_service__srv__Veve3725Service_Request * lhs, const veve3725_service__srv__Veve3725Service_Request * rhs);

/// Copy a srv/Veve3725Service message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__copy(
  const veve3725_service__srv__Veve3725Service_Request * input,
  veve3725_service__srv__Veve3725Service_Request * output);

/// Initialize array of srv/Veve3725Service messages.
/**
 * It allocates the memory for the number of elements and calls
 * veve3725_service__srv__Veve3725Service_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__Sequence__init(veve3725_service__srv__Veve3725Service_Request__Sequence * array, size_t size);

/// Finalize array of srv/Veve3725Service messages.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Request__Sequence__fini(veve3725_service__srv__Veve3725Service_Request__Sequence * array);

/// Create array of srv/Veve3725Service messages.
/**
 * It allocates the memory for the array and calls
 * veve3725_service__srv__Veve3725Service_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
veve3725_service__srv__Veve3725Service_Request__Sequence *
veve3725_service__srv__Veve3725Service_Request__Sequence__create(size_t size);

/// Destroy array of srv/Veve3725Service messages.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Request__Sequence__destroy(veve3725_service__srv__Veve3725Service_Request__Sequence * array);

/// Check for srv/Veve3725Service message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__Sequence__are_equal(const veve3725_service__srv__Veve3725Service_Request__Sequence * lhs, const veve3725_service__srv__Veve3725Service_Request__Sequence * rhs);

/// Copy an array of srv/Veve3725Service messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Request__Sequence__copy(
  const veve3725_service__srv__Veve3725Service_Request__Sequence * input,
  veve3725_service__srv__Veve3725Service_Request__Sequence * output);

/// Initialize srv/Veve3725Service message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * veve3725_service__srv__Veve3725Service_Response
 * )) before or use
 * veve3725_service__srv__Veve3725Service_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__init(veve3725_service__srv__Veve3725Service_Response * msg);

/// Finalize srv/Veve3725Service message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Response__fini(veve3725_service__srv__Veve3725Service_Response * msg);

/// Create srv/Veve3725Service message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * veve3725_service__srv__Veve3725Service_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
veve3725_service__srv__Veve3725Service_Response *
veve3725_service__srv__Veve3725Service_Response__create();

/// Destroy srv/Veve3725Service message.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Response__destroy(veve3725_service__srv__Veve3725Service_Response * msg);

/// Check for srv/Veve3725Service message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__are_equal(const veve3725_service__srv__Veve3725Service_Response * lhs, const veve3725_service__srv__Veve3725Service_Response * rhs);

/// Copy a srv/Veve3725Service message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__copy(
  const veve3725_service__srv__Veve3725Service_Response * input,
  veve3725_service__srv__Veve3725Service_Response * output);

/// Initialize array of srv/Veve3725Service messages.
/**
 * It allocates the memory for the number of elements and calls
 * veve3725_service__srv__Veve3725Service_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__Sequence__init(veve3725_service__srv__Veve3725Service_Response__Sequence * array, size_t size);

/// Finalize array of srv/Veve3725Service messages.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Response__Sequence__fini(veve3725_service__srv__Veve3725Service_Response__Sequence * array);

/// Create array of srv/Veve3725Service messages.
/**
 * It allocates the memory for the array and calls
 * veve3725_service__srv__Veve3725Service_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
veve3725_service__srv__Veve3725Service_Response__Sequence *
veve3725_service__srv__Veve3725Service_Response__Sequence__create(size_t size);

/// Destroy array of srv/Veve3725Service messages.
/**
 * It calls
 * veve3725_service__srv__Veve3725Service_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
void
veve3725_service__srv__Veve3725Service_Response__Sequence__destroy(veve3725_service__srv__Veve3725Service_Response__Sequence * array);

/// Check for srv/Veve3725Service message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__Sequence__are_equal(const veve3725_service__srv__Veve3725Service_Response__Sequence * lhs, const veve3725_service__srv__Veve3725Service_Response__Sequence * rhs);

/// Copy an array of srv/Veve3725Service messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_veve3725_service
bool
veve3725_service__srv__Veve3725Service_Response__Sequence__copy(
  const veve3725_service__srv__Veve3725Service_Response__Sequence * input,
  veve3725_service__srv__Veve3725Service_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VEVE3725_SERVICE__SRV__DETAIL__VEVE3725_SERVICE__FUNCTIONS_H_
