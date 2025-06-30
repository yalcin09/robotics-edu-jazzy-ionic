# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:action/ChargeBattery.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargeBattery_Goal(type):
    """Metaclass of message 'ChargeBattery_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__goal

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_Goal(metaclass=Metaclass_ChargeBattery_Goal):
    """Message class 'ChargeBattery_Goal'."""

    __slots__ = [
        '_target_charge_level',
        '_charging_mode',
        '_return_to_dock',
        '_charging_station_location',
        '_max_charging_time',
        '_max_charging_current',
        '_max_charging_voltage',
        '_enable_temperature_monitoring',
        '_max_battery_temperature',
        '_enable_safety_monitoring',
        '_emergency_stop_voltage',
        '_emergency_stop_temperature',
        '_auto_disconnect_when_full',
        '_navigate_to_charger',
        '_docking_precision',
        '_docking_approach',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_charge_level': 'float',
        'charging_mode': 'string',
        'return_to_dock': 'boolean',
        'charging_station_location': 'geometry_msgs/Point',
        'max_charging_time': 'float',
        'max_charging_current': 'float',
        'max_charging_voltage': 'float',
        'enable_temperature_monitoring': 'boolean',
        'max_battery_temperature': 'float',
        'enable_safety_monitoring': 'boolean',
        'emergency_stop_voltage': 'float',
        'emergency_stop_temperature': 'float',
        'auto_disconnect_when_full': 'boolean',
        'navigate_to_charger': 'boolean',
        'docking_precision': 'float',
        'docking_approach': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_charge_level = kwargs.get('target_charge_level', float())
        self.charging_mode = kwargs.get('charging_mode', str())
        self.return_to_dock = kwargs.get('return_to_dock', bool())
        from geometry_msgs.msg import Point
        self.charging_station_location = kwargs.get('charging_station_location', Point())
        self.max_charging_time = kwargs.get('max_charging_time', float())
        self.max_charging_current = kwargs.get('max_charging_current', float())
        self.max_charging_voltage = kwargs.get('max_charging_voltage', float())
        self.enable_temperature_monitoring = kwargs.get('enable_temperature_monitoring', bool())
        self.max_battery_temperature = kwargs.get('max_battery_temperature', float())
        self.enable_safety_monitoring = kwargs.get('enable_safety_monitoring', bool())
        self.emergency_stop_voltage = kwargs.get('emergency_stop_voltage', float())
        self.emergency_stop_temperature = kwargs.get('emergency_stop_temperature', float())
        self.auto_disconnect_when_full = kwargs.get('auto_disconnect_when_full', bool())
        self.navigate_to_charger = kwargs.get('navigate_to_charger', bool())
        self.docking_precision = kwargs.get('docking_precision', float())
        self.docking_approach = kwargs.get('docking_approach', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_charge_level != other.target_charge_level:
            return False
        if self.charging_mode != other.charging_mode:
            return False
        if self.return_to_dock != other.return_to_dock:
            return False
        if self.charging_station_location != other.charging_station_location:
            return False
        if self.max_charging_time != other.max_charging_time:
            return False
        if self.max_charging_current != other.max_charging_current:
            return False
        if self.max_charging_voltage != other.max_charging_voltage:
            return False
        if self.enable_temperature_monitoring != other.enable_temperature_monitoring:
            return False
        if self.max_battery_temperature != other.max_battery_temperature:
            return False
        if self.enable_safety_monitoring != other.enable_safety_monitoring:
            return False
        if self.emergency_stop_voltage != other.emergency_stop_voltage:
            return False
        if self.emergency_stop_temperature != other.emergency_stop_temperature:
            return False
        if self.auto_disconnect_when_full != other.auto_disconnect_when_full:
            return False
        if self.navigate_to_charger != other.navigate_to_charger:
            return False
        if self.docking_precision != other.docking_precision:
            return False
        if self.docking_approach != other.docking_approach:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_charge_level(self):
        """Message field 'target_charge_level'."""
        return self._target_charge_level

    @target_charge_level.setter
    def target_charge_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_charge_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_charge_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_charge_level = value

    @builtins.property
    def charging_mode(self):
        """Message field 'charging_mode'."""
        return self._charging_mode

    @charging_mode.setter
    def charging_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'charging_mode' field must be of type 'str'"
        self._charging_mode = value

    @builtins.property
    def return_to_dock(self):
        """Message field 'return_to_dock'."""
        return self._return_to_dock

    @return_to_dock.setter
    def return_to_dock(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'return_to_dock' field must be of type 'bool'"
        self._return_to_dock = value

    @builtins.property
    def charging_station_location(self):
        """Message field 'charging_station_location'."""
        return self._charging_station_location

    @charging_station_location.setter
    def charging_station_location(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'charging_station_location' field must be a sub message of type 'Point'"
        self._charging_station_location = value

    @builtins.property
    def max_charging_time(self):
        """Message field 'max_charging_time'."""
        return self._max_charging_time

    @max_charging_time.setter
    def max_charging_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_charging_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_charging_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_charging_time = value

    @builtins.property
    def max_charging_current(self):
        """Message field 'max_charging_current'."""
        return self._max_charging_current

    @max_charging_current.setter
    def max_charging_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_charging_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_charging_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_charging_current = value

    @builtins.property
    def max_charging_voltage(self):
        """Message field 'max_charging_voltage'."""
        return self._max_charging_voltage

    @max_charging_voltage.setter
    def max_charging_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_charging_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_charging_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_charging_voltage = value

    @builtins.property
    def enable_temperature_monitoring(self):
        """Message field 'enable_temperature_monitoring'."""
        return self._enable_temperature_monitoring

    @enable_temperature_monitoring.setter
    def enable_temperature_monitoring(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_temperature_monitoring' field must be of type 'bool'"
        self._enable_temperature_monitoring = value

    @builtins.property
    def max_battery_temperature(self):
        """Message field 'max_battery_temperature'."""
        return self._max_battery_temperature

    @max_battery_temperature.setter
    def max_battery_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_battery_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_battery_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_battery_temperature = value

    @builtins.property
    def enable_safety_monitoring(self):
        """Message field 'enable_safety_monitoring'."""
        return self._enable_safety_monitoring

    @enable_safety_monitoring.setter
    def enable_safety_monitoring(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_safety_monitoring' field must be of type 'bool'"
        self._enable_safety_monitoring = value

    @builtins.property
    def emergency_stop_voltage(self):
        """Message field 'emergency_stop_voltage'."""
        return self._emergency_stop_voltage

    @emergency_stop_voltage.setter
    def emergency_stop_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'emergency_stop_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'emergency_stop_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._emergency_stop_voltage = value

    @builtins.property
    def emergency_stop_temperature(self):
        """Message field 'emergency_stop_temperature'."""
        return self._emergency_stop_temperature

    @emergency_stop_temperature.setter
    def emergency_stop_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'emergency_stop_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'emergency_stop_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._emergency_stop_temperature = value

    @builtins.property
    def auto_disconnect_when_full(self):
        """Message field 'auto_disconnect_when_full'."""
        return self._auto_disconnect_when_full

    @auto_disconnect_when_full.setter
    def auto_disconnect_when_full(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'auto_disconnect_when_full' field must be of type 'bool'"
        self._auto_disconnect_when_full = value

    @builtins.property
    def navigate_to_charger(self):
        """Message field 'navigate_to_charger'."""
        return self._navigate_to_charger

    @navigate_to_charger.setter
    def navigate_to_charger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'navigate_to_charger' field must be of type 'bool'"
        self._navigate_to_charger = value

    @builtins.property
    def docking_precision(self):
        """Message field 'docking_precision'."""
        return self._docking_precision

    @docking_precision.setter
    def docking_precision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'docking_precision' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'docking_precision' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._docking_precision = value

    @builtins.property
    def docking_approach(self):
        """Message field 'docking_approach'."""
        return self._docking_approach

    @docking_approach.setter
    def docking_approach(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'docking_approach' field must be of type 'str'"
        self._docking_approach = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_Result(type):
    """Metaclass of message 'ChargeBattery_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_CHARGING_STATION_NOT_FOUND': 1,
        'ERROR_DOCKING_FAILED': 2,
        'ERROR_CHARGER_CONNECTION_FAILED': 3,
        'ERROR_OVERVOLTAGE': 4,
        'ERROR_OVERCURRENT': 5,
        'ERROR_OVERTEMPERATURE': 6,
        'ERROR_CHARGING_TIMEOUT': 7,
        'ERROR_BATTERY_FAULT': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__result

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_CHARGING_STATION_NOT_FOUND': cls.__constants['ERROR_CHARGING_STATION_NOT_FOUND'],
            'ERROR_DOCKING_FAILED': cls.__constants['ERROR_DOCKING_FAILED'],
            'ERROR_CHARGER_CONNECTION_FAILED': cls.__constants['ERROR_CHARGER_CONNECTION_FAILED'],
            'ERROR_OVERVOLTAGE': cls.__constants['ERROR_OVERVOLTAGE'],
            'ERROR_OVERCURRENT': cls.__constants['ERROR_OVERCURRENT'],
            'ERROR_OVERTEMPERATURE': cls.__constants['ERROR_OVERTEMPERATURE'],
            'ERROR_CHARGING_TIMEOUT': cls.__constants['ERROR_CHARGING_TIMEOUT'],
            'ERROR_BATTERY_FAULT': cls.__constants['ERROR_BATTERY_FAULT'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_NONE']

    @property
    def ERROR_CHARGING_STATION_NOT_FOUND(self):
        """Message constant 'ERROR_CHARGING_STATION_NOT_FOUND'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_CHARGING_STATION_NOT_FOUND']

    @property
    def ERROR_DOCKING_FAILED(self):
        """Message constant 'ERROR_DOCKING_FAILED'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_DOCKING_FAILED']

    @property
    def ERROR_CHARGER_CONNECTION_FAILED(self):
        """Message constant 'ERROR_CHARGER_CONNECTION_FAILED'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_CHARGER_CONNECTION_FAILED']

    @property
    def ERROR_OVERVOLTAGE(self):
        """Message constant 'ERROR_OVERVOLTAGE'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_OVERVOLTAGE']

    @property
    def ERROR_OVERCURRENT(self):
        """Message constant 'ERROR_OVERCURRENT'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_OVERCURRENT']

    @property
    def ERROR_OVERTEMPERATURE(self):
        """Message constant 'ERROR_OVERTEMPERATURE'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_OVERTEMPERATURE']

    @property
    def ERROR_CHARGING_TIMEOUT(self):
        """Message constant 'ERROR_CHARGING_TIMEOUT'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_CHARGING_TIMEOUT']

    @property
    def ERROR_BATTERY_FAULT(self):
        """Message constant 'ERROR_BATTERY_FAULT'."""
        return Metaclass_ChargeBattery_Result.__constants['ERROR_BATTERY_FAULT']


class ChargeBattery_Result(metaclass=Metaclass_ChargeBattery_Result):
    """
    Message class 'ChargeBattery_Result'.

    Constants:
      ERROR_NONE
      ERROR_CHARGING_STATION_NOT_FOUND
      ERROR_DOCKING_FAILED
      ERROR_CHARGER_CONNECTION_FAILED
      ERROR_OVERVOLTAGE
      ERROR_OVERCURRENT
      ERROR_OVERTEMPERATURE
      ERROR_CHARGING_TIMEOUT
      ERROR_BATTERY_FAULT
    """

    __slots__ = [
        '_success',
        '_result_message',
        '_final_charge_level',
        '_total_charging_time',
        '_energy_transferred',
        '_average_charging_power',
        '_charging_efficiency',
        '_max_temperature_reached',
        '_battery_health_score',
        '_charging_cycles_count',
        '_estimated_battery_lifespan',
        '_docking_successful',
        '_docking_time',
        '_navigation_time',
        '_final_docked_position',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result_message': 'string',
        'final_charge_level': 'float',
        'total_charging_time': 'float',
        'energy_transferred': 'float',
        'average_charging_power': 'float',
        'charging_efficiency': 'float',
        'max_temperature_reached': 'float',
        'battery_health_score': 'float',
        'charging_cycles_count': 'uint32',
        'estimated_battery_lifespan': 'float',
        'docking_successful': 'boolean',
        'docking_time': 'float',
        'navigation_time': 'float',
        'final_docked_position': 'geometry_msgs/Point',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.result_message = kwargs.get('result_message', str())
        self.final_charge_level = kwargs.get('final_charge_level', float())
        self.total_charging_time = kwargs.get('total_charging_time', float())
        self.energy_transferred = kwargs.get('energy_transferred', float())
        self.average_charging_power = kwargs.get('average_charging_power', float())
        self.charging_efficiency = kwargs.get('charging_efficiency', float())
        self.max_temperature_reached = kwargs.get('max_temperature_reached', float())
        self.battery_health_score = kwargs.get('battery_health_score', float())
        self.charging_cycles_count = kwargs.get('charging_cycles_count', int())
        self.estimated_battery_lifespan = kwargs.get('estimated_battery_lifespan', float())
        self.docking_successful = kwargs.get('docking_successful', bool())
        self.docking_time = kwargs.get('docking_time', float())
        self.navigation_time = kwargs.get('navigation_time', float())
        from geometry_msgs.msg import Point
        self.final_docked_position = kwargs.get('final_docked_position', Point())
        self.error_code = kwargs.get('error_code', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.result_message != other.result_message:
            return False
        if self.final_charge_level != other.final_charge_level:
            return False
        if self.total_charging_time != other.total_charging_time:
            return False
        if self.energy_transferred != other.energy_transferred:
            return False
        if self.average_charging_power != other.average_charging_power:
            return False
        if self.charging_efficiency != other.charging_efficiency:
            return False
        if self.max_temperature_reached != other.max_temperature_reached:
            return False
        if self.battery_health_score != other.battery_health_score:
            return False
        if self.charging_cycles_count != other.charging_cycles_count:
            return False
        if self.estimated_battery_lifespan != other.estimated_battery_lifespan:
            return False
        if self.docking_successful != other.docking_successful:
            return False
        if self.docking_time != other.docking_time:
            return False
        if self.navigation_time != other.navigation_time:
            return False
        if self.final_docked_position != other.final_docked_position:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def result_message(self):
        """Message field 'result_message'."""
        return self._result_message

    @result_message.setter
    def result_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'result_message' field must be of type 'str'"
        self._result_message = value

    @builtins.property
    def final_charge_level(self):
        """Message field 'final_charge_level'."""
        return self._final_charge_level

    @final_charge_level.setter
    def final_charge_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'final_charge_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'final_charge_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._final_charge_level = value

    @builtins.property
    def total_charging_time(self):
        """Message field 'total_charging_time'."""
        return self._total_charging_time

    @total_charging_time.setter
    def total_charging_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_charging_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_charging_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_charging_time = value

    @builtins.property
    def energy_transferred(self):
        """Message field 'energy_transferred'."""
        return self._energy_transferred

    @energy_transferred.setter
    def energy_transferred(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'energy_transferred' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'energy_transferred' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._energy_transferred = value

    @builtins.property
    def average_charging_power(self):
        """Message field 'average_charging_power'."""
        return self._average_charging_power

    @average_charging_power.setter
    def average_charging_power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_charging_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_charging_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_charging_power = value

    @builtins.property
    def charging_efficiency(self):
        """Message field 'charging_efficiency'."""
        return self._charging_efficiency

    @charging_efficiency.setter
    def charging_efficiency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charging_efficiency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charging_efficiency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charging_efficiency = value

    @builtins.property
    def max_temperature_reached(self):
        """Message field 'max_temperature_reached'."""
        return self._max_temperature_reached

    @max_temperature_reached.setter
    def max_temperature_reached(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_temperature_reached' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_temperature_reached' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_temperature_reached = value

    @builtins.property
    def battery_health_score(self):
        """Message field 'battery_health_score'."""
        return self._battery_health_score

    @battery_health_score.setter
    def battery_health_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_health_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_health_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_health_score = value

    @builtins.property
    def charging_cycles_count(self):
        """Message field 'charging_cycles_count'."""
        return self._charging_cycles_count

    @charging_cycles_count.setter
    def charging_cycles_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'charging_cycles_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'charging_cycles_count' field must be an unsigned integer in [0, 4294967295]"
        self._charging_cycles_count = value

    @builtins.property
    def estimated_battery_lifespan(self):
        """Message field 'estimated_battery_lifespan'."""
        return self._estimated_battery_lifespan

    @estimated_battery_lifespan.setter
    def estimated_battery_lifespan(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'estimated_battery_lifespan' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_battery_lifespan' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_battery_lifespan = value

    @builtins.property
    def docking_successful(self):
        """Message field 'docking_successful'."""
        return self._docking_successful

    @docking_successful.setter
    def docking_successful(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'docking_successful' field must be of type 'bool'"
        self._docking_successful = value

    @builtins.property
    def docking_time(self):
        """Message field 'docking_time'."""
        return self._docking_time

    @docking_time.setter
    def docking_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'docking_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'docking_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._docking_time = value

    @builtins.property
    def navigation_time(self):
        """Message field 'navigation_time'."""
        return self._navigation_time

    @navigation_time.setter
    def navigation_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'navigation_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'navigation_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._navigation_time = value

    @builtins.property
    def final_docked_position(self):
        """Message field 'final_docked_position'."""
        return self._final_docked_position

    @final_docked_position.setter
    def final_docked_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'final_docked_position' field must be a sub message of type 'Point'"
        self._final_docked_position = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_code' field must be an unsigned integer in [0, 4294967295]"
        self._error_code = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_Feedback(type):
    """Metaclass of message 'ChargeBattery_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__feedback

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_Feedback(metaclass=Metaclass_ChargeBattery_Feedback):
    """Message class 'ChargeBattery_Feedback'."""

    __slots__ = [
        '_current_phase',
        '_current_charge_level',
        '_charging_progress_percentage',
        '_estimated_time_to_completion',
        '_current_voltage',
        '_current_amperage',
        '_current_power',
        '_current_temperature',
        '_charging_rate',
        '_charging_state',
        '_time_elapsed',
        '_current_position',
        '_distance_to_charger',
        '_charger_in_sight',
        '_docking_initiated',
        '_docking_alignment_error',
        '_connection_established',
        '_temperature_warning',
        '_voltage_warning',
        '_current_warning',
        '_active_warnings',
        '_charger_efficiency',
        '_charger_connected',
        '_charging_start_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'current_phase': 'string',
        'current_charge_level': 'float',
        'charging_progress_percentage': 'float',
        'estimated_time_to_completion': 'float',
        'current_voltage': 'float',
        'current_amperage': 'float',
        'current_power': 'float',
        'current_temperature': 'float',
        'charging_rate': 'float',
        'charging_state': 'string',
        'time_elapsed': 'float',
        'current_position': 'geometry_msgs/Point',
        'distance_to_charger': 'float',
        'charger_in_sight': 'boolean',
        'docking_initiated': 'boolean',
        'docking_alignment_error': 'float',
        'connection_established': 'boolean',
        'temperature_warning': 'boolean',
        'voltage_warning': 'boolean',
        'current_warning': 'boolean',
        'active_warnings': 'sequence<string>',
        'charger_efficiency': 'float',
        'charger_connected': 'boolean',
        'charging_start_time': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_phase = kwargs.get('current_phase', str())
        self.current_charge_level = kwargs.get('current_charge_level', float())
        self.charging_progress_percentage = kwargs.get('charging_progress_percentage', float())
        self.estimated_time_to_completion = kwargs.get('estimated_time_to_completion', float())
        self.current_voltage = kwargs.get('current_voltage', float())
        self.current_amperage = kwargs.get('current_amperage', float())
        self.current_power = kwargs.get('current_power', float())
        self.current_temperature = kwargs.get('current_temperature', float())
        self.charging_rate = kwargs.get('charging_rate', float())
        self.charging_state = kwargs.get('charging_state', str())
        self.time_elapsed = kwargs.get('time_elapsed', float())
        from geometry_msgs.msg import Point
        self.current_position = kwargs.get('current_position', Point())
        self.distance_to_charger = kwargs.get('distance_to_charger', float())
        self.charger_in_sight = kwargs.get('charger_in_sight', bool())
        self.docking_initiated = kwargs.get('docking_initiated', bool())
        self.docking_alignment_error = kwargs.get('docking_alignment_error', float())
        self.connection_established = kwargs.get('connection_established', bool())
        self.temperature_warning = kwargs.get('temperature_warning', bool())
        self.voltage_warning = kwargs.get('voltage_warning', bool())
        self.current_warning = kwargs.get('current_warning', bool())
        self.active_warnings = kwargs.get('active_warnings', [])
        self.charger_efficiency = kwargs.get('charger_efficiency', float())
        self.charger_connected = kwargs.get('charger_connected', bool())
        from builtin_interfaces.msg import Time
        self.charging_start_time = kwargs.get('charging_start_time', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_phase != other.current_phase:
            return False
        if self.current_charge_level != other.current_charge_level:
            return False
        if self.charging_progress_percentage != other.charging_progress_percentage:
            return False
        if self.estimated_time_to_completion != other.estimated_time_to_completion:
            return False
        if self.current_voltage != other.current_voltage:
            return False
        if self.current_amperage != other.current_amperage:
            return False
        if self.current_power != other.current_power:
            return False
        if self.current_temperature != other.current_temperature:
            return False
        if self.charging_rate != other.charging_rate:
            return False
        if self.charging_state != other.charging_state:
            return False
        if self.time_elapsed != other.time_elapsed:
            return False
        if self.current_position != other.current_position:
            return False
        if self.distance_to_charger != other.distance_to_charger:
            return False
        if self.charger_in_sight != other.charger_in_sight:
            return False
        if self.docking_initiated != other.docking_initiated:
            return False
        if self.docking_alignment_error != other.docking_alignment_error:
            return False
        if self.connection_established != other.connection_established:
            return False
        if self.temperature_warning != other.temperature_warning:
            return False
        if self.voltage_warning != other.voltage_warning:
            return False
        if self.current_warning != other.current_warning:
            return False
        if self.active_warnings != other.active_warnings:
            return False
        if self.charger_efficiency != other.charger_efficiency:
            return False
        if self.charger_connected != other.charger_connected:
            return False
        if self.charging_start_time != other.charging_start_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_phase(self):
        """Message field 'current_phase'."""
        return self._current_phase

    @current_phase.setter
    def current_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_phase' field must be of type 'str'"
        self._current_phase = value

    @builtins.property
    def current_charge_level(self):
        """Message field 'current_charge_level'."""
        return self._current_charge_level

    @current_charge_level.setter
    def current_charge_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_charge_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_charge_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_charge_level = value

    @builtins.property
    def charging_progress_percentage(self):
        """Message field 'charging_progress_percentage'."""
        return self._charging_progress_percentage

    @charging_progress_percentage.setter
    def charging_progress_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charging_progress_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charging_progress_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charging_progress_percentage = value

    @builtins.property
    def estimated_time_to_completion(self):
        """Message field 'estimated_time_to_completion'."""
        return self._estimated_time_to_completion

    @estimated_time_to_completion.setter
    def estimated_time_to_completion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'estimated_time_to_completion' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_time_to_completion' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_time_to_completion = value

    @builtins.property
    def current_voltage(self):
        """Message field 'current_voltage'."""
        return self._current_voltage

    @current_voltage.setter
    def current_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_voltage = value

    @builtins.property
    def current_amperage(self):
        """Message field 'current_amperage'."""
        return self._current_amperage

    @current_amperage.setter
    def current_amperage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_amperage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_amperage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_amperage = value

    @builtins.property
    def current_power(self):
        """Message field 'current_power'."""
        return self._current_power

    @current_power.setter
    def current_power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_power = value

    @builtins.property
    def current_temperature(self):
        """Message field 'current_temperature'."""
        return self._current_temperature

    @current_temperature.setter
    def current_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_temperature = value

    @builtins.property
    def charging_rate(self):
        """Message field 'charging_rate'."""
        return self._charging_rate

    @charging_rate.setter
    def charging_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charging_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charging_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charging_rate = value

    @builtins.property
    def charging_state(self):
        """Message field 'charging_state'."""
        return self._charging_state

    @charging_state.setter
    def charging_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'charging_state' field must be of type 'str'"
        self._charging_state = value

    @builtins.property
    def time_elapsed(self):
        """Message field 'time_elapsed'."""
        return self._time_elapsed

    @time_elapsed.setter
    def time_elapsed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time_elapsed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_elapsed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_elapsed = value

    @builtins.property
    def current_position(self):
        """Message field 'current_position'."""
        return self._current_position

    @current_position.setter
    def current_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'current_position' field must be a sub message of type 'Point'"
        self._current_position = value

    @builtins.property
    def distance_to_charger(self):
        """Message field 'distance_to_charger'."""
        return self._distance_to_charger

    @distance_to_charger.setter
    def distance_to_charger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_to_charger' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_charger' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_charger = value

    @builtins.property
    def charger_in_sight(self):
        """Message field 'charger_in_sight'."""
        return self._charger_in_sight

    @charger_in_sight.setter
    def charger_in_sight(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'charger_in_sight' field must be of type 'bool'"
        self._charger_in_sight = value

    @builtins.property
    def docking_initiated(self):
        """Message field 'docking_initiated'."""
        return self._docking_initiated

    @docking_initiated.setter
    def docking_initiated(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'docking_initiated' field must be of type 'bool'"
        self._docking_initiated = value

    @builtins.property
    def docking_alignment_error(self):
        """Message field 'docking_alignment_error'."""
        return self._docking_alignment_error

    @docking_alignment_error.setter
    def docking_alignment_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'docking_alignment_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'docking_alignment_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._docking_alignment_error = value

    @builtins.property
    def connection_established(self):
        """Message field 'connection_established'."""
        return self._connection_established

    @connection_established.setter
    def connection_established(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_established' field must be of type 'bool'"
        self._connection_established = value

    @builtins.property
    def temperature_warning(self):
        """Message field 'temperature_warning'."""
        return self._temperature_warning

    @temperature_warning.setter
    def temperature_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'temperature_warning' field must be of type 'bool'"
        self._temperature_warning = value

    @builtins.property
    def voltage_warning(self):
        """Message field 'voltage_warning'."""
        return self._voltage_warning

    @voltage_warning.setter
    def voltage_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'voltage_warning' field must be of type 'bool'"
        self._voltage_warning = value

    @builtins.property
    def current_warning(self):
        """Message field 'current_warning'."""
        return self._current_warning

    @current_warning.setter
    def current_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'current_warning' field must be of type 'bool'"
        self._current_warning = value

    @builtins.property
    def active_warnings(self):
        """Message field 'active_warnings'."""
        return self._active_warnings

    @active_warnings.setter
    def active_warnings(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'active_warnings' field must be a set or sequence and each value of type 'str'"
        self._active_warnings = value

    @builtins.property
    def charger_efficiency(self):
        """Message field 'charger_efficiency'."""
        return self._charger_efficiency

    @charger_efficiency.setter
    def charger_efficiency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'charger_efficiency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'charger_efficiency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._charger_efficiency = value

    @builtins.property
    def charger_connected(self):
        """Message field 'charger_connected'."""
        return self._charger_connected

    @charger_connected.setter
    def charger_connected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'charger_connected' field must be of type 'bool'"
        self._charger_connected = value

    @builtins.property
    def charging_start_time(self):
        """Message field 'charging_start_time'."""
        return self._charging_start_time

    @charging_start_time.setter
    def charging_start_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'charging_start_time' field must be a sub message of type 'Time'"
        self._charging_start_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_SendGoal_Request(type):
    """Metaclass of message 'ChargeBattery_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__send_goal__request

            from day2.action import ChargeBattery
            if ChargeBattery.Goal.__class__._TYPE_SUPPORT is None:
                ChargeBattery.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_SendGoal_Request(metaclass=Metaclass_ChargeBattery_SendGoal_Request):
    """Message class 'ChargeBattery_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'day2/ChargeBattery_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from day2.action._charge_battery import ChargeBattery_Goal
        self.goal = kwargs.get('goal', ChargeBattery_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from day2.action._charge_battery import ChargeBattery_Goal
            assert \
                isinstance(value, ChargeBattery_Goal), \
                "The 'goal' field must be a sub message of type 'ChargeBattery_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_SendGoal_Response(type):
    """Metaclass of message 'ChargeBattery_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_SendGoal_Response(metaclass=Metaclass_ChargeBattery_SendGoal_Response):
    """Message class 'ChargeBattery_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_SendGoal_Event(type):
    """Metaclass of message 'ChargeBattery_SendGoal_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__send_goal__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_SendGoal_Event(metaclass=Metaclass_ChargeBattery_SendGoal_Event):
    """Message class 'ChargeBattery_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/ChargeBattery_SendGoal_Request, 1>',
        'response': 'sequence<day2/ChargeBattery_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_SendGoal_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from day2.action import ChargeBattery_SendGoal_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChargeBattery_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ChargeBattery_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import ChargeBattery_SendGoal_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChargeBattery_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ChargeBattery_SendGoal_Response'"
        self._response = value


class Metaclass_ChargeBattery_SendGoal(type):
    """Metaclass of service 'ChargeBattery_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__charge_battery__send_goal

            from day2.action import _charge_battery
            if _charge_battery.Metaclass_ChargeBattery_SendGoal_Request._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_SendGoal_Request.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_SendGoal_Response._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_SendGoal_Response.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_SendGoal_Event._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_SendGoal_Event.__import_type_support__()


class ChargeBattery_SendGoal(metaclass=Metaclass_ChargeBattery_SendGoal):
    from day2.action._charge_battery import ChargeBattery_SendGoal_Request as Request
    from day2.action._charge_battery import ChargeBattery_SendGoal_Response as Response
    from day2.action._charge_battery import ChargeBattery_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_GetResult_Request(type):
    """Metaclass of message 'ChargeBattery_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_GetResult_Request(metaclass=Metaclass_ChargeBattery_GetResult_Request):
    """Message class 'ChargeBattery_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_GetResult_Response(type):
    """Metaclass of message 'ChargeBattery_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__get_result__response

            from day2.action import ChargeBattery
            if ChargeBattery.Result.__class__._TYPE_SUPPORT is None:
                ChargeBattery.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_GetResult_Response(metaclass=Metaclass_ChargeBattery_GetResult_Response):
    """Message class 'ChargeBattery_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'day2/ChargeBattery_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from day2.action._charge_battery import ChargeBattery_Result
        self.result = kwargs.get('result', ChargeBattery_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from day2.action._charge_battery import ChargeBattery_Result
            assert \
                isinstance(value, ChargeBattery_Result), \
                "The 'result' field must be a sub message of type 'ChargeBattery_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_GetResult_Event(type):
    """Metaclass of message 'ChargeBattery_GetResult_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__get_result__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_GetResult_Event(metaclass=Metaclass_ChargeBattery_GetResult_Event):
    """Message class 'ChargeBattery_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/ChargeBattery_GetResult_Request, 1>',
        'response': 'sequence<day2/ChargeBattery_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_GetResult_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from day2.action import ChargeBattery_GetResult_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChargeBattery_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ChargeBattery_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import ChargeBattery_GetResult_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, ChargeBattery_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ChargeBattery_GetResult_Response'"
        self._response = value


class Metaclass_ChargeBattery_GetResult(type):
    """Metaclass of service 'ChargeBattery_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__charge_battery__get_result

            from day2.action import _charge_battery
            if _charge_battery.Metaclass_ChargeBattery_GetResult_Request._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_GetResult_Request.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_GetResult_Response._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_GetResult_Response.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_GetResult_Event._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_GetResult_Event.__import_type_support__()


class ChargeBattery_GetResult(metaclass=Metaclass_ChargeBattery_GetResult):
    from day2.action._charge_battery import ChargeBattery_GetResult_Request as Request
    from day2.action._charge_battery import ChargeBattery_GetResult_Response as Response
    from day2.action._charge_battery import ChargeBattery_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChargeBattery_FeedbackMessage(type):
    """Metaclass of message 'ChargeBattery_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__charge_battery__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__charge_battery__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__charge_battery__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__charge_battery__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__charge_battery__feedback_message

            from day2.action import ChargeBattery
            if ChargeBattery.Feedback.__class__._TYPE_SUPPORT is None:
                ChargeBattery.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargeBattery_FeedbackMessage(metaclass=Metaclass_ChargeBattery_FeedbackMessage):
    """Message class 'ChargeBattery_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'day2/ChargeBattery_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'ChargeBattery_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from day2.action._charge_battery import ChargeBattery_Feedback
        self.feedback = kwargs.get('feedback', ChargeBattery_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if self._check_fields:
            from day2.action._charge_battery import ChargeBattery_Feedback
            assert \
                isinstance(value, ChargeBattery_Feedback), \
                "The 'feedback' field must be a sub message of type 'ChargeBattery_Feedback'"
        self._feedback = value


class Metaclass_ChargeBattery(type):
    """Metaclass of action 'ChargeBattery'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('day2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'day2.action.ChargeBattery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__charge_battery

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from day2.action import _charge_battery
            if _charge_battery.Metaclass_ChargeBattery_SendGoal._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_SendGoal.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_GetResult._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_GetResult.__import_type_support__()
            if _charge_battery.Metaclass_ChargeBattery_FeedbackMessage._TYPE_SUPPORT is None:
                _charge_battery.Metaclass_ChargeBattery_FeedbackMessage.__import_type_support__()


class ChargeBattery(metaclass=Metaclass_ChargeBattery):

    # The goal message defined in the action definition.
    from day2.action._charge_battery import ChargeBattery_Goal as Goal
    # The result message defined in the action definition.
    from day2.action._charge_battery import ChargeBattery_Result as Result
    # The feedback message defined in the action definition.
    from day2.action._charge_battery import ChargeBattery_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from day2.action._charge_battery import ChargeBattery_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from day2.action._charge_battery import ChargeBattery_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from day2.action._charge_battery import ChargeBattery_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
