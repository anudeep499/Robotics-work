// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from veve3725_service:srv/Veve3725Service.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "veve3725_service/srv/detail/veve3725_service__struct.h"
#include "veve3725_service/srv/detail/veve3725_service__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool veve3725_service__srv__veve3725_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("veve3725_service.srv._veve3725_service.Veve3725Service_Request", full_classname_dest, 62) == 0);
  }
  veve3725_service__srv__Veve3725Service_Request * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * veve3725_service__srv__veve3725_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Veve3725Service_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("veve3725_service.srv._veve3725_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Veve3725Service_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  veve3725_service__srv__Veve3725Service_Request * ros_message = (veve3725_service__srv__Veve3725Service_Request *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "veve3725_service/srv/detail/veve3725_service__struct.h"
// already included above
// #include "veve3725_service/srv/detail/veve3725_service__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool veve3725_service__srv__veve3725_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("veve3725_service.srv._veve3725_service.Veve3725Service_Response", full_classname_dest, 63) == 0);
  }
  veve3725_service__srv__Veve3725Service_Response * ros_message = _ros_message;
  {  // reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "reversed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->reversed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // runtime_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "runtime_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->runtime_sec = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * veve3725_service__srv__veve3725_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Veve3725Service_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("veve3725_service.srv._veve3725_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Veve3725Service_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  veve3725_service__srv__Veve3725Service_Response * ros_message = (veve3725_service__srv__Veve3725Service_Response *)raw_ros_message;
  {  // reversed
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->reversed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // runtime_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->runtime_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "runtime_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
