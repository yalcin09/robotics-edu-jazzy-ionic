# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:msg/MotorStatus.idl
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


class Metaclass_MotorStatus(type):
    """Metaclass of message 'MotorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_STOPPED': 0,
        'STATUS_STARTING': 1,
        'STATUS_RUNNING': 2,
        'STATUS_STOPPING': 3,
        'STATUS_ERROR': 4,
        'STATUS_MAINTENANCE': 5,
        'ERROR_NONE': 0,
        'ERROR_OVERCURRENT': 1,
        'ERROR_OVERHEAT': 2,
        'ERROR_OVERVOLTAGE': 4,
        'ERROR_UNDERVOLTAGE': 8,
        'ERROR_ENCODER': 16,
        'ERROR_COMMUNICATION': 32,
        'ERROR_MECHANICAL': 64,
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
                'day2.msg.MotorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_STOPPED': cls.__constants['STATUS_STOPPED'],
            'STATUS_STARTING': cls.__constants['STATUS_STARTING'],
            'STATUS_RUNNING': cls.__constants['STATUS_RUNNING'],
            'STATUS_STOPPING': cls.__constants['STATUS_STOPPING'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
            'STATUS_MAINTENANCE': cls.__constants['STATUS_MAINTENANCE'],
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_OVERCURRENT': cls.__constants['ERROR_OVERCURRENT'],
            'ERROR_OVERHEAT': cls.__constants['ERROR_OVERHEAT'],
            'ERROR_OVERVOLTAGE': cls.__constants['ERROR_OVERVOLTAGE'],
            'ERROR_UNDERVOLTAGE': cls.__constants['ERROR_UNDERVOLTAGE'],
            'ERROR_ENCODER': cls.__constants['ERROR_ENCODER'],
            'ERROR_COMMUNICATION': cls.__constants['ERROR_COMMUNICATION'],
            'ERROR_MECHANICAL': cls.__constants['ERROR_MECHANICAL'],
        }

    @property
    def STATUS_STOPPED(self):
        """Message constant 'STATUS_STOPPED'."""
        return Metaclass_MotorStatus.__constants['STATUS_STOPPED']

    @property
    def STATUS_STARTING(self):
        """Message constant 'STATUS_STARTING'."""
        return Metaclass_MotorStatus.__constants['STATUS_STARTING']

    @property
    def STATUS_RUNNING(self):
        """Message constant 'STATUS_RUNNING'."""
        return Metaclass_MotorStatus.__constants['STATUS_RUNNING']

    @property
    def STATUS_STOPPING(self):
        """Message constant 'STATUS_STOPPING'."""
        return Metaclass_MotorStatus.__constants['STATUS_STOPPING']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_MotorStatus.__constants['STATUS_ERROR']

    @property
    def STATUS_MAINTENANCE(self):
        """Message constant 'STATUS_MAINTENANCE'."""
        return Metaclass_MotorStatus.__constants['STATUS_MAINTENANCE']

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_MotorStatus.__constants['ERROR_NONE']

    @property
    def ERROR_OVERCURRENT(self):
        """Message constant 'ERROR_OVERCURRENT'."""
        return Metaclass_MotorStatus.__constants['ERROR_OVERCURRENT']

    @property
    def ERROR_OVERHEAT(self):
        """Message constant 'ERROR_OVERHEAT'."""
        return Metaclass_MotorStatus.__constants['ERROR_OVERHEAT']

    @property
    def ERROR_OVERVOLTAGE(self):
        """Message constant 'ERROR_OVERVOLTAGE'."""
        return Metaclass_MotorStatus.__constants['ERROR_OVERVOLTAGE']

    @property
    def ERROR_UNDERVOLTAGE(self):
        """Message constant 'ERROR_UNDERVOLTAGE'."""
        return Metaclass_MotorStatus.__constants['ERROR_UNDERVOLTAGE']

    @property
    def ERROR_ENCODER(self):
        """Message constant 'ERROR_ENCODER'."""
        return Metaclass_MotorStatus.__constants['ERROR_ENCODER']

    @property
    def ERROR_COMMUNICATION(self):
        """Message constant 'ERROR_COMMUNICATION'."""
        return Metaclass_MotorStatus.__constants['ERROR_COMMUNICATION']

    @property
    def ERROR_MECHANICAL(self):
        """Message constant 'ERROR_MECHANICAL'."""
        return Metaclass_MotorStatus.__constants['ERROR_MECHANICAL']


class MotorStatus(metaclass=Metaclass_MotorStatus):
    """
    Message class 'MotorStatus'.

    Constants:
      STATUS_STOPPED
      STATUS_STARTING
      STATUS_RUNNING
      STATUS_STOPPING
      STATUS_ERROR
      STATUS_MAINTENANCE
      ERROR_NONE
      ERROR_OVERCURRENT
      ERROR_OVERHEAT
      ERROR_OVERVOLTAGE
      ERROR_UNDERVOLTAGE
      ERROR_ENCODER
      ERROR_COMMUNICATION
      ERROR_MECHANICAL
    """

    __slots__ = [
        '_header',
        '_motor_name',
        '_motor_id',
        '_rpm',
        '_target_rpm',
        '_current',
        '_voltage',
        '_power',
        '_temperature',
        '_max_temperature',
        '_position',
        '_target_position',
        '_velocity',
        '_acceleration',
        '_status',
        '_error_flags',
        '_control_effort',
        '_pid_error',
        '_pid_output',
        '_total_revolutions',
        '_uptime_hours',
        '_start_count',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'motor_name': 'string',
        'motor_id': 'uint32',
        'rpm': 'float',
        'target_rpm': 'float',
        'current': 'float',
        'voltage': 'float',
        'power': 'float',
        'temperature': 'float',
        'max_temperature': 'float',
        'position': 'double',
        'target_position': 'double',
        'velocity': 'double',
        'acceleration': 'double',
        'status': 'uint8',
        'error_flags': 'uint32',
        'control_effort': 'float',
        'pid_error': 'float',
        'pid_output': 'float',
        'total_revolutions': 'uint64',
        'uptime_hours': 'float',
        'start_count': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.motor_name = kwargs.get('motor_name', str())
        self.motor_id = kwargs.get('motor_id', int())
        self.rpm = kwargs.get('rpm', float())
        self.target_rpm = kwargs.get('target_rpm', float())
        self.current = kwargs.get('current', float())
        self.voltage = kwargs.get('voltage', float())
        self.power = kwargs.get('power', float())
        self.temperature = kwargs.get('temperature', float())
        self.max_temperature = kwargs.get('max_temperature', float())
        self.position = kwargs.get('position', float())
        self.target_position = kwargs.get('target_position', float())
        self.velocity = kwargs.get('velocity', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.status = kwargs.get('status', int())
        self.error_flags = kwargs.get('error_flags', int())
        self.control_effort = kwargs.get('control_effort', float())
        self.pid_error = kwargs.get('pid_error', float())
        self.pid_output = kwargs.get('pid_output', float())
        self.total_revolutions = kwargs.get('total_revolutions', int())
        self.uptime_hours = kwargs.get('uptime_hours', float())
        self.start_count = kwargs.get('start_count', int())

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
        if self.header != other.header:
            return False
        if self.motor_name != other.motor_name:
            return False
        if self.motor_id != other.motor_id:
            return False
        if self.rpm != other.rpm:
            return False
        if self.target_rpm != other.target_rpm:
            return False
        if self.current != other.current:
            return False
        if self.voltage != other.voltage:
            return False
        if self.power != other.power:
            return False
        if self.temperature != other.temperature:
            return False
        if self.max_temperature != other.max_temperature:
            return False
        if self.position != other.position:
            return False
        if self.target_position != other.target_position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.status != other.status:
            return False
        if self.error_flags != other.error_flags:
            return False
        if self.control_effort != other.control_effort:
            return False
        if self.pid_error != other.pid_error:
            return False
        if self.pid_output != other.pid_output:
            return False
        if self.total_revolutions != other.total_revolutions:
            return False
        if self.uptime_hours != other.uptime_hours:
            return False
        if self.start_count != other.start_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def motor_name(self):
        """Message field 'motor_name'."""
        return self._motor_name

    @motor_name.setter
    def motor_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'motor_name' field must be of type 'str'"
        self._motor_name = value

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'motor_id' field must be an unsigned integer in [0, 4294967295]"
        self._motor_id = value

    @builtins.property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rpm = value

    @builtins.property
    def target_rpm(self):
        """Message field 'target_rpm'."""
        return self._target_rpm

    @target_rpm.setter
    def target_rpm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_rpm = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._power = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def max_temperature(self):
        """Message field 'max_temperature'."""
        return self._max_temperature

    @max_temperature.setter
    def max_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_temperature = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value

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
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def error_flags(self):
        """Message field 'error_flags'."""
        return self._error_flags

    @error_flags.setter
    def error_flags(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_flags' field must be an unsigned integer in [0, 4294967295]"
        self._error_flags = value

    @builtins.property
    def control_effort(self):
        """Message field 'control_effort'."""
        return self._control_effort

    @control_effort.setter
    def control_effort(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'control_effort' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'control_effort' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._control_effort = value

    @builtins.property
    def pid_error(self):
        """Message field 'pid_error'."""
        return self._pid_error

    @pid_error.setter
    def pid_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pid_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pid_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pid_error = value

    @builtins.property
    def pid_output(self):
        """Message field 'pid_output'."""
        return self._pid_output

    @pid_output.setter
    def pid_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pid_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pid_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pid_output = value

    @builtins.property
    def total_revolutions(self):
        """Message field 'total_revolutions'."""
        return self._total_revolutions

    @total_revolutions.setter
    def total_revolutions(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_revolutions' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'total_revolutions' field must be an unsigned integer in [0, 18446744073709551615]"
        self._total_revolutions = value

    @builtins.property
    def uptime_hours(self):
        """Message field 'uptime_hours'."""
        return self._uptime_hours

    @uptime_hours.setter
    def uptime_hours(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'uptime_hours' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'uptime_hours' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._uptime_hours = value

    @builtins.property
    def start_count(self):
        """Message field 'start_count'."""
        return self._start_count

    @start_count.setter
    def start_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'start_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'start_count' field must be an unsigned integer in [0, 4294967295]"
        self._start_count = value
