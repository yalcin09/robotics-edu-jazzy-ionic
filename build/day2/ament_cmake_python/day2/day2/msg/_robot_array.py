# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:msg/RobotArray.idl
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


class Metaclass_RobotArray(type):
    """Metaclass of message 'RobotArray'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLEET_IDLE': 0,
        'FLEET_ACTIVE': 1,
        'FLEET_EMERGENCY': 2,
        'FLEET_MAINTENANCE': 3,
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
                'day2.msg.RobotArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_array

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from day2.msg import RobotStatus
            if RobotStatus.__class__._TYPE_SUPPORT is None:
                RobotStatus.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLEET_IDLE': cls.__constants['FLEET_IDLE'],
            'FLEET_ACTIVE': cls.__constants['FLEET_ACTIVE'],
            'FLEET_EMERGENCY': cls.__constants['FLEET_EMERGENCY'],
            'FLEET_MAINTENANCE': cls.__constants['FLEET_MAINTENANCE'],
        }

    @property
    def FLEET_IDLE(self):
        """Message constant 'FLEET_IDLE'."""
        return Metaclass_RobotArray.__constants['FLEET_IDLE']

    @property
    def FLEET_ACTIVE(self):
        """Message constant 'FLEET_ACTIVE'."""
        return Metaclass_RobotArray.__constants['FLEET_ACTIVE']

    @property
    def FLEET_EMERGENCY(self):
        """Message constant 'FLEET_EMERGENCY'."""
        return Metaclass_RobotArray.__constants['FLEET_EMERGENCY']

    @property
    def FLEET_MAINTENANCE(self):
        """Message constant 'FLEET_MAINTENANCE'."""
        return Metaclass_RobotArray.__constants['FLEET_MAINTENANCE']


class RobotArray(metaclass=Metaclass_RobotArray):
    """
    Message class 'RobotArray'.

    Constants:
      FLEET_IDLE
      FLEET_ACTIVE
      FLEET_EMERGENCY
      FLEET_MAINTENANCE
    """

    __slots__ = [
        '_header',
        '_fleet_name',
        '_fleet_id',
        '_coordinator_node',
        '_robots',
        '_total_robots',
        '_active_robots',
        '_idle_robots',
        '_charging_robots',
        '_error_robots',
        '_fleet_status',
        '_average_battery_level',
        '_total_distance_traveled',
        '_average_speed',
        '_completed_tasks',
        '_pending_tasks',
        '_workspace_min',
        '_workspace_max',
        '_workspace_name',
        '_emergency_stop',
        '_emergency_reason',
        '_emergency_timestamp',
        '_system_health_score',
        '_critical_warnings',
        '_system_messages',
        '_update_frequency_hz',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fleet_name': 'string',
        'fleet_id': 'uint32',
        'coordinator_node': 'string',
        'robots': 'sequence<day2/RobotStatus>',
        'total_robots': 'uint32',
        'active_robots': 'uint32',
        'idle_robots': 'uint32',
        'charging_robots': 'uint32',
        'error_robots': 'uint32',
        'fleet_status': 'uint8',
        'average_battery_level': 'float',
        'total_distance_traveled': 'float',
        'average_speed': 'float',
        'completed_tasks': 'uint32',
        'pending_tasks': 'uint32',
        'workspace_min': 'geometry_msgs/Point',
        'workspace_max': 'geometry_msgs/Point',
        'workspace_name': 'string',
        'emergency_stop': 'boolean',
        'emergency_reason': 'string',
        'emergency_timestamp': 'builtin_interfaces/Time',
        'system_health_score': 'float',
        'critical_warnings': 'sequence<string>',
        'system_messages': 'sequence<string>',
        'update_frequency_hz': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'msg'], 'RobotStatus')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.fleet_name = kwargs.get('fleet_name', str())
        self.fleet_id = kwargs.get('fleet_id', int())
        self.coordinator_node = kwargs.get('coordinator_node', str())
        self.robots = kwargs.get('robots', [])
        self.total_robots = kwargs.get('total_robots', int())
        self.active_robots = kwargs.get('active_robots', int())
        self.idle_robots = kwargs.get('idle_robots', int())
        self.charging_robots = kwargs.get('charging_robots', int())
        self.error_robots = kwargs.get('error_robots', int())
        self.fleet_status = kwargs.get('fleet_status', int())
        self.average_battery_level = kwargs.get('average_battery_level', float())
        self.total_distance_traveled = kwargs.get('total_distance_traveled', float())
        self.average_speed = kwargs.get('average_speed', float())
        self.completed_tasks = kwargs.get('completed_tasks', int())
        self.pending_tasks = kwargs.get('pending_tasks', int())
        from geometry_msgs.msg import Point
        self.workspace_min = kwargs.get('workspace_min', Point())
        from geometry_msgs.msg import Point
        self.workspace_max = kwargs.get('workspace_max', Point())
        self.workspace_name = kwargs.get('workspace_name', str())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.emergency_reason = kwargs.get('emergency_reason', str())
        from builtin_interfaces.msg import Time
        self.emergency_timestamp = kwargs.get('emergency_timestamp', Time())
        self.system_health_score = kwargs.get('system_health_score', float())
        self.critical_warnings = kwargs.get('critical_warnings', [])
        self.system_messages = kwargs.get('system_messages', [])
        self.update_frequency_hz = kwargs.get('update_frequency_hz', float())

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
        if self.fleet_name != other.fleet_name:
            return False
        if self.fleet_id != other.fleet_id:
            return False
        if self.coordinator_node != other.coordinator_node:
            return False
        if self.robots != other.robots:
            return False
        if self.total_robots != other.total_robots:
            return False
        if self.active_robots != other.active_robots:
            return False
        if self.idle_robots != other.idle_robots:
            return False
        if self.charging_robots != other.charging_robots:
            return False
        if self.error_robots != other.error_robots:
            return False
        if self.fleet_status != other.fleet_status:
            return False
        if self.average_battery_level != other.average_battery_level:
            return False
        if self.total_distance_traveled != other.total_distance_traveled:
            return False
        if self.average_speed != other.average_speed:
            return False
        if self.completed_tasks != other.completed_tasks:
            return False
        if self.pending_tasks != other.pending_tasks:
            return False
        if self.workspace_min != other.workspace_min:
            return False
        if self.workspace_max != other.workspace_max:
            return False
        if self.workspace_name != other.workspace_name:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.emergency_reason != other.emergency_reason:
            return False
        if self.emergency_timestamp != other.emergency_timestamp:
            return False
        if self.system_health_score != other.system_health_score:
            return False
        if self.critical_warnings != other.critical_warnings:
            return False
        if self.system_messages != other.system_messages:
            return False
        if self.update_frequency_hz != other.update_frequency_hz:
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
    def fleet_name(self):
        """Message field 'fleet_name'."""
        return self._fleet_name

    @fleet_name.setter
    def fleet_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'fleet_name' field must be of type 'str'"
        self._fleet_name = value

    @builtins.property
    def fleet_id(self):
        """Message field 'fleet_id'."""
        return self._fleet_id

    @fleet_id.setter
    def fleet_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fleet_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'fleet_id' field must be an unsigned integer in [0, 4294967295]"
        self._fleet_id = value

    @builtins.property
    def coordinator_node(self):
        """Message field 'coordinator_node'."""
        return self._coordinator_node

    @coordinator_node.setter
    def coordinator_node(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'coordinator_node' field must be of type 'str'"
        self._coordinator_node = value

    @builtins.property
    def robots(self):
        """Message field 'robots'."""
        return self._robots

    @robots.setter
    def robots(self, value):
        if self._check_fields:
            from day2.msg import RobotStatus
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
                 all(isinstance(v, RobotStatus) for v in value) and
                 True), \
                "The 'robots' field must be a set or sequence and each value of type 'RobotStatus'"
        self._robots = value

    @builtins.property
    def total_robots(self):
        """Message field 'total_robots'."""
        return self._total_robots

    @total_robots.setter
    def total_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_robots' field must be an unsigned integer in [0, 4294967295]"
        self._total_robots = value

    @builtins.property
    def active_robots(self):
        """Message field 'active_robots'."""
        return self._active_robots

    @active_robots.setter
    def active_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'active_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'active_robots' field must be an unsigned integer in [0, 4294967295]"
        self._active_robots = value

    @builtins.property
    def idle_robots(self):
        """Message field 'idle_robots'."""
        return self._idle_robots

    @idle_robots.setter
    def idle_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'idle_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'idle_robots' field must be an unsigned integer in [0, 4294967295]"
        self._idle_robots = value

    @builtins.property
    def charging_robots(self):
        """Message field 'charging_robots'."""
        return self._charging_robots

    @charging_robots.setter
    def charging_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'charging_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'charging_robots' field must be an unsigned integer in [0, 4294967295]"
        self._charging_robots = value

    @builtins.property
    def error_robots(self):
        """Message field 'error_robots'."""
        return self._error_robots

    @error_robots.setter
    def error_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_robots' field must be an unsigned integer in [0, 4294967295]"
        self._error_robots = value

    @builtins.property
    def fleet_status(self):
        """Message field 'fleet_status'."""
        return self._fleet_status

    @fleet_status.setter
    def fleet_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'fleet_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fleet_status' field must be an unsigned integer in [0, 255]"
        self._fleet_status = value

    @builtins.property
    def average_battery_level(self):
        """Message field 'average_battery_level'."""
        return self._average_battery_level

    @average_battery_level.setter
    def average_battery_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_battery_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_battery_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_battery_level = value

    @builtins.property
    def total_distance_traveled(self):
        """Message field 'total_distance_traveled'."""
        return self._total_distance_traveled

    @total_distance_traveled.setter
    def total_distance_traveled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_distance_traveled' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_distance_traveled' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_distance_traveled = value

    @builtins.property
    def average_speed(self):
        """Message field 'average_speed'."""
        return self._average_speed

    @average_speed.setter
    def average_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_speed = value

    @builtins.property
    def completed_tasks(self):
        """Message field 'completed_tasks'."""
        return self._completed_tasks

    @completed_tasks.setter
    def completed_tasks(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'completed_tasks' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'completed_tasks' field must be an unsigned integer in [0, 4294967295]"
        self._completed_tasks = value

    @builtins.property
    def pending_tasks(self):
        """Message field 'pending_tasks'."""
        return self._pending_tasks

    @pending_tasks.setter
    def pending_tasks(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pending_tasks' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pending_tasks' field must be an unsigned integer in [0, 4294967295]"
        self._pending_tasks = value

    @builtins.property
    def workspace_min(self):
        """Message field 'workspace_min'."""
        return self._workspace_min

    @workspace_min.setter
    def workspace_min(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'workspace_min' field must be a sub message of type 'Point'"
        self._workspace_min = value

    @builtins.property
    def workspace_max(self):
        """Message field 'workspace_max'."""
        return self._workspace_max

    @workspace_max.setter
    def workspace_max(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'workspace_max' field must be a sub message of type 'Point'"
        self._workspace_max = value

    @builtins.property
    def workspace_name(self):
        """Message field 'workspace_name'."""
        return self._workspace_name

    @workspace_name.setter
    def workspace_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'workspace_name' field must be of type 'str'"
        self._workspace_name = value

    @builtins.property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop' field must be of type 'bool'"
        self._emergency_stop = value

    @builtins.property
    def emergency_reason(self):
        """Message field 'emergency_reason'."""
        return self._emergency_reason

    @emergency_reason.setter
    def emergency_reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'emergency_reason' field must be of type 'str'"
        self._emergency_reason = value

    @builtins.property
    def emergency_timestamp(self):
        """Message field 'emergency_timestamp'."""
        return self._emergency_timestamp

    @emergency_timestamp.setter
    def emergency_timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'emergency_timestamp' field must be a sub message of type 'Time'"
        self._emergency_timestamp = value

    @builtins.property
    def system_health_score(self):
        """Message field 'system_health_score'."""
        return self._system_health_score

    @system_health_score.setter
    def system_health_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'system_health_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'system_health_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._system_health_score = value

    @builtins.property
    def critical_warnings(self):
        """Message field 'critical_warnings'."""
        return self._critical_warnings

    @critical_warnings.setter
    def critical_warnings(self, value):
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
                "The 'critical_warnings' field must be a set or sequence and each value of type 'str'"
        self._critical_warnings = value

    @builtins.property
    def system_messages(self):
        """Message field 'system_messages'."""
        return self._system_messages

    @system_messages.setter
    def system_messages(self, value):
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
                "The 'system_messages' field must be a set or sequence and each value of type 'str'"
        self._system_messages = value

    @builtins.property
    def update_frequency_hz(self):
        """Message field 'update_frequency_hz'."""
        return self._update_frequency_hz

    @update_frequency_hz.setter
    def update_frequency_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'update_frequency_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'update_frequency_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._update_frequency_hz = value
