// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wpa_cli_msgs:msg/Network.idl
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
#include "wpa_cli_msgs/msg/detail/network__struct.h"
#include "wpa_cli_msgs/msg/detail/network__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wpa_cli_msgs__msg__network__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("wpa_cli_msgs.msg._network.Network", full_classname_dest, 33) == 0);
  }
  wpa_cli_msgs__msg__Network * ros_message = _ros_message;
  {  // bssid
    PyObject * field = PyObject_GetAttrString(_pymsg, "bssid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bssid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ssid
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ssid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // channel
    PyObject * field = PyObject_GetAttrString(_pymsg, "channel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->channel = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // level
    PyObject * field = PyObject_GetAttrString(_pymsg, "level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->level = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wpa_cli_msgs__msg__network__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Network */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wpa_cli_msgs.msg._network");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Network");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wpa_cli_msgs__msg__Network * ros_message = (wpa_cli_msgs__msg__Network *)raw_ros_message;
  {  // bssid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bssid.data,
      strlen(ros_message->bssid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bssid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ssid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ssid.data,
      strlen(ros_message->ssid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ssid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->channel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "channel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->info.data,
      strlen(ros_message->info.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
