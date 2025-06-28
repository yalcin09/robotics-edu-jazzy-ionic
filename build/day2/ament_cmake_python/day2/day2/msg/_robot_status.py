# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:msg/RobotStatus.idl
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


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_IDLE': 0,
        'STATUS_MOVING': 1,
        'STATUS_WORKING': 2,
        'STATUS_CHARGING': 3,
        'STATUS_ERROR': 4,
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
                'day2.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_IDLE': cls.__constants['STATUS_IDLE'],
            'STATUS_MOVING': cls.__constants['STATUS_MOVING'],
            'STATUS_WORKING': cls.__constants['STATUS_WORKING'],
            'STATUS_CHARGING': cls.__constants['STATUS_CHARGING'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
        }

    @property
    def STATUS_IDLE(self):
        """Message constant 'STATUS_IDLE'."""
        return Metaclass_RobotStatus.__constants['STATUS_IDLE']

    @property
    def STATUS_MOVING(self):
        """Message constant 'STATUS_MOVING'."""
        return Metaclass_RobotStatus.__constants['STATUS_MOVING']

    @property
    def STATUS_WORKING(self):
        """Message constant 'STATUS_WORKING'."""
        return Metaclass_RobotStatus.__constants['STATUS_WORKING']

    @property
    def STATUS_CHARGING(self):
        """Message constant 'STATUS_CHARGING'."""
        return Metaclass_RobotStatus.__constants['STATUS_CHARGING']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_RobotStatus.__constants['STATUS_ERROR']


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """
    Message class 'RobotStatus'.

    Constants:
      STATUS_IDLE
      STATUS_MOVING
      STATUS_WORKING
      STATUS_CHARGING
      STATUS_ERROR
    """

    __slots__ = [
        '_robot_name',
        '_robot_id',
        '_timestamp',
        '_position',
        '_orientation',
        '_velocity',
        '_status',
        '_battery_level',
        '_temperature',
        '_sensor_status',
        '_sensor_names',
        '_current_task',
        '_task_progress',
        '_error_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'robot_id': 'int32',
        'timestamp': 'builtin_interfaces/Time',
        'position': 'geometry_msgs/Point',
        'orientation': 'geometry_msgs/Vector3',
        'velocity': 'geometry_msgs/Twist',
        'status': 'uint8',
        'battery_level': 'float',
        'temperature': 'float',
        'sensor_status': 'sequence<boolean>',
        'sensor_names': 'sequence<string>',
        'current_task': 'string',
        'task_progress': 'float',
        'error_message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.robot_name = kwargs.get('robot_name', str())
        self.robot_id = kwargs.get('robot_id', int())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.orientation = kwargs.get('orientation', Vector3())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        self.status = kwargs.get('status', int())
        self.battery_level = kwargs.get('battery_level', float())
        self.temperature = kwargs.get('temperature', float())
        self.sensor_status = kwargs.get('sensor_status', [])
        self.sensor_names = kwargs.get('sensor_names', [])
        self.current_task = kwargs.get('current_task', str())
        self.task_progress = kwargs.get('task_progress', float())
        self.error_message = kwargs.get('error_message', str())

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
        if self.robot_name != other.robot_name:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.position != other.position:
            return False
        if self.orientation != other.orientation:
            return False
        if self.velocity != other.velocity:
            return False
        if self.status != other.status:
            return False
        if self.battery_level != other.battery_level:
            return False
        if self.temperature != other.temperature:
            return False
        if self.sensor_status != other.sensor_status:
            return False
        if self.sensor_names != other.sensor_names:
            return False
        if self.current_task != other.current_task:
            return False
        if self.task_progress != other.task_progress:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_id' field must be an integer in [-2147483648, 2147483647]"
        self._robot_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'orientation' field must be a sub message of type 'Vector3'"
        self._orientation = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

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
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_level = value

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
    def sensor_status(self):
        """Message field 'sensor_status'."""
        return self._sensor_status

    @sensor_status.setter
    def sensor_status(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'sensor_status' field must be a set or sequence and each value of type 'bool'"
        self._sensor_status = value

    @builtins.property
    def sensor_names(self):
        """Message field 'sensor_names'."""
        return self._sensor_names

    @sensor_names.setter
    def sensor_names(self, value):
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
                "The 'sensor_names' field must be a set or sequence and each value of type 'str'"
        self._sensor_names = value

    @builtins.property
    def current_task(self):
        """Message field 'current_task'."""
        return self._current_task

    @current_task.setter
    def current_task(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_task' field must be of type 'str'"
        self._current_task = value

    @builtins.property
    def task_progress(self):
        """Message field 'task_progress'."""
        return self._task_progress

    @task_progress.setter
    def task_progress(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'task_progress' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'task_progress' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._task_progress = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value
