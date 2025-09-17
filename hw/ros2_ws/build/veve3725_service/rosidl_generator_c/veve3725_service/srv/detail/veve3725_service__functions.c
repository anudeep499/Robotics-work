// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice
#include "veve3725_service/srv/detail/veve3725_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "std_msgs/msg/detail/string__functions.h"

bool
veve3725_service__srv__Veve3725Service_Request__init(veve3725_service__srv__Veve3725Service_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!std_msgs__msg__String__init(&msg->data)) {
    veve3725_service__srv__Veve3725Service_Request__fini(msg);
    return false;
  }
  return true;
}

void
veve3725_service__srv__Veve3725Service_Request__fini(veve3725_service__srv__Veve3725Service_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  std_msgs__msg__String__fini(&msg->data);
}

bool
veve3725_service__srv__Veve3725Service_Request__are_equal(const veve3725_service__srv__Veve3725Service_Request * lhs, const veve3725_service__srv__Veve3725Service_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!std_msgs__msg__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
veve3725_service__srv__Veve3725Service_Request__copy(
  const veve3725_service__srv__Veve3725Service_Request * input,
  veve3725_service__srv__Veve3725Service_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!std_msgs__msg__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

veve3725_service__srv__Veve3725Service_Request *
veve3725_service__srv__Veve3725Service_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Request * msg = (veve3725_service__srv__Veve3725Service_Request *)allocator.allocate(sizeof(veve3725_service__srv__Veve3725Service_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(veve3725_service__srv__Veve3725Service_Request));
  bool success = veve3725_service__srv__Veve3725Service_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
veve3725_service__srv__Veve3725Service_Request__destroy(veve3725_service__srv__Veve3725Service_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    veve3725_service__srv__Veve3725Service_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
veve3725_service__srv__Veve3725Service_Request__Sequence__init(veve3725_service__srv__Veve3725Service_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Request * data = NULL;

  if (size) {
    data = (veve3725_service__srv__Veve3725Service_Request *)allocator.zero_allocate(size, sizeof(veve3725_service__srv__Veve3725Service_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = veve3725_service__srv__Veve3725Service_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        veve3725_service__srv__Veve3725Service_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
veve3725_service__srv__Veve3725Service_Request__Sequence__fini(veve3725_service__srv__Veve3725Service_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      veve3725_service__srv__Veve3725Service_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

veve3725_service__srv__Veve3725Service_Request__Sequence *
veve3725_service__srv__Veve3725Service_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Request__Sequence * array = (veve3725_service__srv__Veve3725Service_Request__Sequence *)allocator.allocate(sizeof(veve3725_service__srv__Veve3725Service_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = veve3725_service__srv__Veve3725Service_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
veve3725_service__srv__Veve3725Service_Request__Sequence__destroy(veve3725_service__srv__Veve3725Service_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    veve3725_service__srv__Veve3725Service_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
veve3725_service__srv__Veve3725Service_Request__Sequence__are_equal(const veve3725_service__srv__Veve3725Service_Request__Sequence * lhs, const veve3725_service__srv__Veve3725Service_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!veve3725_service__srv__Veve3725Service_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
veve3725_service__srv__Veve3725Service_Request__Sequence__copy(
  const veve3725_service__srv__Veve3725Service_Request__Sequence * input,
  veve3725_service__srv__Veve3725Service_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(veve3725_service__srv__Veve3725Service_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    veve3725_service__srv__Veve3725Service_Request * data =
      (veve3725_service__srv__Veve3725Service_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!veve3725_service__srv__Veve3725Service_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          veve3725_service__srv__Veve3725Service_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!veve3725_service__srv__Veve3725Service_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reversed`
// already included above
// #include "std_msgs/msg/detail/string__functions.h"

bool
veve3725_service__srv__Veve3725Service_Response__init(veve3725_service__srv__Veve3725Service_Response * msg)
{
  if (!msg) {
    return false;
  }
  // reversed
  if (!std_msgs__msg__String__init(&msg->reversed)) {
    veve3725_service__srv__Veve3725Service_Response__fini(msg);
    return false;
  }
  // runtime_sec
  return true;
}

void
veve3725_service__srv__Veve3725Service_Response__fini(veve3725_service__srv__Veve3725Service_Response * msg)
{
  if (!msg) {
    return;
  }
  // reversed
  std_msgs__msg__String__fini(&msg->reversed);
  // runtime_sec
}

bool
veve3725_service__srv__Veve3725Service_Response__are_equal(const veve3725_service__srv__Veve3725Service_Response * lhs, const veve3725_service__srv__Veve3725Service_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reversed
  if (!std_msgs__msg__String__are_equal(
      &(lhs->reversed), &(rhs->reversed)))
  {
    return false;
  }
  // runtime_sec
  if (lhs->runtime_sec != rhs->runtime_sec) {
    return false;
  }
  return true;
}

bool
veve3725_service__srv__Veve3725Service_Response__copy(
  const veve3725_service__srv__Veve3725Service_Response * input,
  veve3725_service__srv__Veve3725Service_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // reversed
  if (!std_msgs__msg__String__copy(
      &(input->reversed), &(output->reversed)))
  {
    return false;
  }
  // runtime_sec
  output->runtime_sec = input->runtime_sec;
  return true;
}

veve3725_service__srv__Veve3725Service_Response *
veve3725_service__srv__Veve3725Service_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Response * msg = (veve3725_service__srv__Veve3725Service_Response *)allocator.allocate(sizeof(veve3725_service__srv__Veve3725Service_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(veve3725_service__srv__Veve3725Service_Response));
  bool success = veve3725_service__srv__Veve3725Service_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
veve3725_service__srv__Veve3725Service_Response__destroy(veve3725_service__srv__Veve3725Service_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    veve3725_service__srv__Veve3725Service_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
veve3725_service__srv__Veve3725Service_Response__Sequence__init(veve3725_service__srv__Veve3725Service_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Response * data = NULL;

  if (size) {
    data = (veve3725_service__srv__Veve3725Service_Response *)allocator.zero_allocate(size, sizeof(veve3725_service__srv__Veve3725Service_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = veve3725_service__srv__Veve3725Service_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        veve3725_service__srv__Veve3725Service_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
veve3725_service__srv__Veve3725Service_Response__Sequence__fini(veve3725_service__srv__Veve3725Service_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      veve3725_service__srv__Veve3725Service_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

veve3725_service__srv__Veve3725Service_Response__Sequence *
veve3725_service__srv__Veve3725Service_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  veve3725_service__srv__Veve3725Service_Response__Sequence * array = (veve3725_service__srv__Veve3725Service_Response__Sequence *)allocator.allocate(sizeof(veve3725_service__srv__Veve3725Service_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = veve3725_service__srv__Veve3725Service_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
veve3725_service__srv__Veve3725Service_Response__Sequence__destroy(veve3725_service__srv__Veve3725Service_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    veve3725_service__srv__Veve3725Service_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
veve3725_service__srv__Veve3725Service_Response__Sequence__are_equal(const veve3725_service__srv__Veve3725Service_Response__Sequence * lhs, const veve3725_service__srv__Veve3725Service_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!veve3725_service__srv__Veve3725Service_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
veve3725_service__srv__Veve3725Service_Response__Sequence__copy(
  const veve3725_service__srv__Veve3725Service_Response__Sequence * input,
  veve3725_service__srv__Veve3725Service_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(veve3725_service__srv__Veve3725Service_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    veve3725_service__srv__Veve3725Service_Response * data =
      (veve3725_service__srv__Veve3725Service_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!veve3725_service__srv__Veve3725Service_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          veve3725_service__srv__Veve3725Service_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!veve3725_service__srv__Veve3725Service_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
