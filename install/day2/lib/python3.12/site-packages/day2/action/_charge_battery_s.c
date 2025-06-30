// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from day2:action/ChargeBattery.idl
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
#include "day2/action/detail/charge_battery__struct.h"
#include "day2/action/detail/charge_battery__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_Goal", full_classname_dest, 46) == 0);
  }
  day2__action__ChargeBattery_Goal * ros_message = _ros_message;
  {  // target_charge_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_charge_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_charge_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->charging_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // return_to_dock
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_to_dock");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->return_to_dock = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charging_station_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_station_location");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->charging_station_location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_charging_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_charging_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_charging_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_charging_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_charging_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_charging_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_charging_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_charging_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_charging_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enable_temperature_monitoring
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_temperature_monitoring");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_temperature_monitoring = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_battery_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_battery_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_battery_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enable_safety_monitoring
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_safety_monitoring");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_safety_monitoring = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->emergency_stop_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // emergency_stop_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->emergency_stop_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_disconnect_when_full
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_disconnect_when_full");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_disconnect_when_full = (Py_True == field);
    Py_DECREF(field);
  }
  {  // navigate_to_charger
    PyObject * field = PyObject_GetAttrString(_pymsg, "navigate_to_charger");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->navigate_to_charger = (Py_True == field);
    Py_DECREF(field);
  }
  {  // docking_precision
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_precision");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->docking_precision = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // docking_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_approach");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->docking_approach, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_Goal * ros_message = (day2__action__ChargeBattery_Goal *)raw_ros_message;
  {  // target_charge_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_charge_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_charge_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->charging_mode.data,
      strlen(ros_message->charging_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_to_dock
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->return_to_dock ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_to_dock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_station_location
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->charging_station_location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_station_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_charging_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_charging_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_charging_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_charging_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_charging_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_charging_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_charging_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_charging_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_charging_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_temperature_monitoring
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_temperature_monitoring ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_temperature_monitoring", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_battery_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_battery_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_battery_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_safety_monitoring
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_safety_monitoring ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_safety_monitoring", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->emergency_stop_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->emergency_stop_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_disconnect_when_full
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_disconnect_when_full ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_disconnect_when_full", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navigate_to_charger
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->navigate_to_charger ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navigate_to_charger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_precision
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->docking_precision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_precision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_approach
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->docking_approach.data,
      strlen(ros_message->docking_approach.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_approach", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_Result", full_classname_dest, 48) == 0);
  }
  day2__action__ChargeBattery_Result * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // result_message
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->result_message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // final_charge_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_charge_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->final_charge_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_charging_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_charging_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_charging_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy_transferred
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_transferred");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_transferred = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // average_charging_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_charging_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_charging_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_efficiency
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_efficiency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charging_efficiency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_temperature_reached
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_temperature_reached");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_temperature_reached = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_health_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_health_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_health_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_cycles_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_cycles_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging_cycles_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // estimated_battery_lifespan
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_battery_lifespan");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->estimated_battery_lifespan = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // docking_successful
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_successful");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->docking_successful = (Py_True == field);
    Py_DECREF(field);
  }
  {  // docking_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->docking_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // navigation_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "navigation_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->navigation_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // final_docked_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_docked_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->final_docked_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_Result * ros_message = (day2__action__ChargeBattery_Result *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result_message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->result_message.data,
      strlen(ros_message->result_message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_charge_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->final_charge_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_charge_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_charging_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_charging_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_charging_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy_transferred
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_transferred);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_transferred", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_charging_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_charging_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_charging_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_efficiency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charging_efficiency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_efficiency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_temperature_reached
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_temperature_reached);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_temperature_reached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_health_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_health_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_health_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_cycles_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->charging_cycles_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_cycles_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_battery_lifespan
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->estimated_battery_lifespan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_battery_lifespan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_successful
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->docking_successful ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_successful", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->docking_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navigation_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->navigation_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navigation_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_docked_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->final_docked_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_docked_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_Feedback", full_classname_dest, 50) == 0);
  }
  day2__action__ChargeBattery_Feedback * ros_message = _ros_message;
  {  // current_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_phase");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_phase, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // current_charge_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_charge_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_charge_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_progress_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_progress_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charging_progress_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // estimated_time_to_completion
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_time_to_completion");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->estimated_time_to_completion = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_amperage
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_amperage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_amperage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charging_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->charging_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // time_elapsed
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_elapsed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_elapsed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->current_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // distance_to_charger
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_charger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_charger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charger_in_sight
    PyObject * field = PyObject_GetAttrString(_pymsg, "charger_in_sight");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charger_in_sight = (Py_True == field);
    Py_DECREF(field);
  }
  {  // docking_initiated
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_initiated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->docking_initiated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // docking_alignment_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_alignment_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->docking_alignment_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // connection_established
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_established");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connection_established = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->temperature_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // voltage_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->voltage_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // current_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->current_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_warnings
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_warnings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'active_warnings'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->active_warnings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->active_warnings.data;
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
  {  // charger_efficiency
    PyObject * field = PyObject_GetAttrString(_pymsg, "charger_efficiency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->charger_efficiency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charger_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "charger_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charger_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // charging_start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging_start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->charging_start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_Feedback * ros_message = (day2__action__ChargeBattery_Feedback *)raw_ros_message;
  {  // current_phase
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_phase.data,
      strlen(ros_message->current_phase.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_charge_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_charge_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_charge_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_progress_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charging_progress_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_progress_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_time_to_completion
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->estimated_time_to_completion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_time_to_completion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_amperage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_amperage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_amperage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charging_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->charging_state.data,
      strlen(ros_message->charging_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_elapsed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_elapsed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_elapsed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->current_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_charger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_charger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_charger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charger_in_sight
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charger_in_sight ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charger_in_sight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_initiated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->docking_initiated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_initiated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_alignment_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->docking_alignment_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_alignment_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_established
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connection_established ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_established", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->temperature_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->voltage_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->current_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_warnings
    PyObject * field = NULL;
    size_t size = ros_message->active_warnings.size;
    rosidl_runtime_c__String * src = ros_message->active_warnings.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "active_warnings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charger_efficiency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->charger_efficiency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charger_efficiency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charger_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charger_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charger_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging_start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->charging_start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging_start_time", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_SendGoal_Request", full_classname_dest, 58) == 0);
  }
  day2__action__ChargeBattery_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!day2__action__charge_battery__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_SendGoal_Request * ros_message = (day2__action__ChargeBattery_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = day2__action__charge_battery__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_SendGoal_Response", full_classname_dest, 59) == 0);
  }
  day2__action__ChargeBattery_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_SendGoal_Response * ros_message = (day2__action__ChargeBattery_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__send_goal__request__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__send_goal__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__send_goal__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_SendGoal_Event", full_classname_dest, 56) == 0);
  }
  day2__action__ChargeBattery_SendGoal_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!day2__action__ChargeBattery_SendGoal_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create day2__action__ChargeBattery_SendGoal_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    day2__action__ChargeBattery_SendGoal_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!day2__action__charge_battery__send_goal__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!day2__action__ChargeBattery_SendGoal_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create day2__action__ChargeBattery_SendGoal_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    day2__action__ChargeBattery_SendGoal_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!day2__action__charge_battery__send_goal__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * day2__action__charge_battery__send_goal__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_SendGoal_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_SendGoal_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_SendGoal_Event * ros_message = (day2__action__ChargeBattery_SendGoal_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
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
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    day2__action__ChargeBattery_SendGoal_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = day2__action__charge_battery__send_goal__request__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    day2__action__ChargeBattery_SendGoal_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = day2__action__charge_battery__send_goal__response__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_GetResult_Request", full_classname_dest, 59) == 0);
  }
  day2__action__ChargeBattery_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_GetResult_Request * ros_message = (day2__action__ChargeBattery_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

bool day2__action__charge_battery__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_GetResult_Response", full_classname_dest, 60) == 0);
  }
  day2__action__ChargeBattery_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!day2__action__charge_battery__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_GetResult_Response * ros_message = (day2__action__ChargeBattery_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = day2__action__charge_battery__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__get_result__request__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__get_result__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__get_result__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_GetResult_Event", full_classname_dest, 57) == 0);
  }
  day2__action__ChargeBattery_GetResult_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!day2__action__ChargeBattery_GetResult_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create day2__action__ChargeBattery_GetResult_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    day2__action__ChargeBattery_GetResult_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!day2__action__charge_battery__get_result__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!day2__action__ChargeBattery_GetResult_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create day2__action__ChargeBattery_GetResult_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    day2__action__ChargeBattery_GetResult_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!day2__action__charge_battery__get_result__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * day2__action__charge_battery__get_result__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_GetResult_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_GetResult_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_GetResult_Event * ros_message = (day2__action__ChargeBattery_GetResult_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
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
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    day2__action__ChargeBattery_GetResult_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = day2__action__charge_battery__get_result__request__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    day2__action__ChargeBattery_GetResult_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = day2__action__charge_battery__get_result__response__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
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
// #include "day2/action/detail/charge_battery__struct.h"
// already included above
// #include "day2/action/detail/charge_battery__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool day2__action__charge_battery__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * day2__action__charge_battery__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool day2__action__charge_battery__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("day2.action._charge_battery.ChargeBattery_FeedbackMessage", full_classname_dest, 57) == 0);
  }
  day2__action__ChargeBattery_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!day2__action__charge_battery__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * day2__action__charge_battery__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeBattery_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("day2.action._charge_battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeBattery_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  day2__action__ChargeBattery_FeedbackMessage * ros_message = (day2__action__ChargeBattery_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = day2__action__charge_battery__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
