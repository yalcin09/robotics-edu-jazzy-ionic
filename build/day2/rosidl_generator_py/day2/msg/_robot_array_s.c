// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from day2:msg/RobotArray.idl
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
#include "day2/msg/detail/robot_array__struct.h"
#include "day2/msg/detail/robot_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "day2/msg/detail/robot_status__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool day2__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__msg__robot_status__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__msg__robot_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("day2.msg._robot_array.RobotArray", full_classname_dest, 32) == 0);
  }
  day2__msg__RobotArray * ros_message = _ros_message;
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
  {  // fleet_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "fleet_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fleet_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // fleet_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "fleet_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fleet_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coordinator_node
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinator_node");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->coordinator_node, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots'");
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
    if (!day2__msg__RobotStatus__Sequence__init(&(ros_message->robots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create day2__msg__RobotStatus__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    day2__msg__RobotStatus * dest = ros_message->robots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!day2__msg__robot_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // total_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // idle_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "idle_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idle_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // charging_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fleet_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "fleet_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fleet_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // average_battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_battery_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_distance_traveled
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_distance_traveled");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_distance_traveled = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // average_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // completed_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "completed_tasks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->completed_tasks = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pending_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "pending_tasks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pending_tasks = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // workspace_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "workspace_min");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->workspace_min)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // workspace_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "workspace_max");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->workspace_max)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // workspace_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "workspace_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->workspace_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->emergency_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // emergency_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->emergency_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // system_health_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_health_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_health_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // critical_warnings
    PyObject * field = PyObject_GetAttrString(_pymsg, "critical_warnings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'critical_warnings'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->critical_warnings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->critical_warnings.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // system_messages
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_messages");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'system_messages'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->system_messages), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->system_messages.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // update_frequency_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "update_frequency_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->update_frequency_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__msg__robot_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.msg._robot_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__msg__RobotArray * ros_message = (day2__msg__RobotArray *)raw_ros_message;
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
  {  // fleet_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fleet_name.data,
      strlen(ros_message->fleet_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fleet_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fleet_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fleet_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fleet_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinator_node
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->coordinator_node.data,
      strlen(ros_message->coordinator_node.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinator_node", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots
    PyObject * field = NULL;
    size_t size = ros_message->robots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    day2__msg__RobotStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots.data[i]);
      PyObject * pyitem = day2__msg__robot_status__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // idle_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idle_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idle_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charging_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fleet_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fleet_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fleet_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_distance_traveled
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_distance_traveled);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_distance_traveled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // completed_tasks
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->completed_tasks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "completed_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pending_tasks
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pending_tasks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pending_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // workspace_min
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->workspace_min);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "workspace_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // workspace_max
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->workspace_max);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "workspace_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // workspace_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->workspace_name.data,
      strlen(ros_message->workspace_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "workspace_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->emergency_reason.data,
      strlen(ros_message->emergency_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->emergency_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_health_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_health_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_health_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // critical_warnings
    PyObject * field = NULL;
    size_t size = ros_message->critical_warnings.size;
    rosidl_runtime_c__String * src = ros_message->critical_warnings.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "critical_warnings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_messages
    PyObject * field = NULL;
    size_t size = ros_message->system_messages.size;
    rosidl_runtime_c__String * src = ros_message->system_messages.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_messages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // update_frequency_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->update_frequency_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "update_frequency_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
