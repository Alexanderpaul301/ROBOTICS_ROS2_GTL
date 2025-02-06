// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from task_manager_msgs:srv/GetAllTaskStatus.idl
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
#include "task_manager_msgs/srv/detail/get_all_task_status__struct.h"
#include "task_manager_msgs/srv/detail/get_all_task_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool task_manager_msgs__srv__get_all_task_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("task_manager_msgs.srv._get_all_task_status.GetAllTaskStatus_Request", full_classname_dest, 67) == 0);
  }
  task_manager_msgs__srv__GetAllTaskStatus_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * task_manager_msgs__srv__get_all_task_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAllTaskStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("task_manager_msgs.srv._get_all_task_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAllTaskStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

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
// #include "task_manager_msgs/srv/detail/get_all_task_status__struct.h"
// already included above
// #include "task_manager_msgs/srv/detail/get_all_task_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "task_manager_msgs/msg/detail/task_status__functions.h"
// end nested array functions include
bool task_manager_msgs__msg__task_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * task_manager_msgs__msg__task_status__convert_to_py(void * raw_ros_message);
bool task_manager_msgs__msg__task_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * task_manager_msgs__msg__task_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool task_manager_msgs__srv__get_all_task_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("task_manager_msgs.srv._get_all_task_status.GetAllTaskStatus_Response", full_classname_dest, 68) == 0);
  }
  task_manager_msgs__srv__GetAllTaskStatus_Response * ros_message = _ros_message;
  {  // running_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "running_tasks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'running_tasks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!task_manager_msgs__msg__TaskStatus__Sequence__init(&(ros_message->running_tasks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create task_manager_msgs__msg__TaskStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    task_manager_msgs__msg__TaskStatus * dest = ros_message->running_tasks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!task_manager_msgs__msg__task_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // zombie_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "zombie_tasks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'zombie_tasks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!task_manager_msgs__msg__TaskStatus__Sequence__init(&(ros_message->zombie_tasks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create task_manager_msgs__msg__TaskStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    task_manager_msgs__msg__TaskStatus * dest = ros_message->zombie_tasks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!task_manager_msgs__msg__task_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * task_manager_msgs__srv__get_all_task_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAllTaskStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("task_manager_msgs.srv._get_all_task_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAllTaskStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  task_manager_msgs__srv__GetAllTaskStatus_Response * ros_message = (task_manager_msgs__srv__GetAllTaskStatus_Response *)raw_ros_message;
  {  // running_tasks
    PyObject * field = NULL;
    size_t size = ros_message->running_tasks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    task_manager_msgs__msg__TaskStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->running_tasks.data[i]);
      PyObject * pyitem = task_manager_msgs__msg__task_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "running_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zombie_tasks
    PyObject * field = NULL;
    size_t size = ros_message->zombie_tasks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    task_manager_msgs__msg__TaskStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->zombie_tasks.data[i]);
      PyObject * pyitem = task_manager_msgs__msg__task_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "zombie_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
