// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from day2:msg/MotorStatus.idl
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
#include "day2/msg/detail/motor_status__struct.h"
#include "day2/msg/detail/motor_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("day2.msg._motor_status.MotorStatus", full_classname_dest, 34) == 0);
  }
  day2__msg__MotorStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motor_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power
    PyObject * field = PyObject_GetAttrString(_pymsg, "power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_effort
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_effort");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_effort = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_output");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_output = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_revolutions
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_revolutions");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_revolutions = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // uptime_hours
    PyObject * field = PyObject_GetAttrString(_pymsg, "uptime_hours");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uptime_hours = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__msg__motor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.msg._motor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__msg__MotorStatus * ros_message = (day2__msg__MotorStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motor_name.data,
      strlen(ros_message->motor_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_effort
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_effort);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_effort", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_output
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_revolutions
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->total_revolutions);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_revolutions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uptime_hours
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uptime_hours);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uptime_hours", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
