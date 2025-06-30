# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:action/Navigate.idl
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


class Metaclass_Navigate_Goal(type):
    """Metaclass of message 'Navigate_Goal'."""

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
                'day2.action.Navigate_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__goal

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigate_Goal(metaclass=Metaclass_Navigate_Goal):
    """Message class 'Navigate_Goal'."""

    __slots__ = [
        '_target_pose',
        '_max_speed',
        '_tolerance_distance',
        '_tolerance_angle',
        '_use_obstacle_avoidance',
        '_planning_algorithm',
        '_waypoints',
        '_timeout_seconds',
        '_behavior_on_failure',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/PoseStamped',
        'max_speed': 'float',
        'tolerance_distance': 'float',
        'tolerance_angle': 'float',
        'use_obstacle_avoidance': 'boolean',
        'planning_algorithm': 'string',
        'waypoints': 'sequence<geometry_msgs/Point>',
        'timeout_seconds': 'float',
        'behavior_on_failure': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
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
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.max_speed = kwargs.get('max_speed', float())
        self.tolerance_distance = kwargs.get('tolerance_distance', float())
        self.tolerance_angle = kwargs.get('tolerance_angle', float())
        self.use_obstacle_avoidance = kwargs.get('use_obstacle_avoidance', bool())
        self.planning_algorithm = kwargs.get('planning_algorithm', str())
        self.waypoints = kwargs.get('waypoints', [])
        self.timeout_seconds = kwargs.get('timeout_seconds', float())
        self.behavior_on_failure = kwargs.get('behavior_on_failure', str())

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
        if self.target_pose != other.target_pose:
            return False
        if self.max_speed != other.max_speed:
            return False
        if self.tolerance_distance != other.tolerance_distance:
            return False
        if self.tolerance_angle != other.tolerance_angle:
            return False
        if self.use_obstacle_avoidance != other.use_obstacle_avoidance:
            return False
        if self.planning_algorithm != other.planning_algorithm:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.timeout_seconds != other.timeout_seconds:
            return False
        if self.behavior_on_failure != other.behavior_on_failure:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_speed = value

    @builtins.property
    def tolerance_distance(self):
        """Message field 'tolerance_distance'."""
        return self._tolerance_distance

    @tolerance_distance.setter
    def tolerance_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tolerance_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tolerance_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tolerance_distance = value

    @builtins.property
    def tolerance_angle(self):
        """Message field 'tolerance_angle'."""
        return self._tolerance_angle

    @tolerance_angle.setter
    def tolerance_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tolerance_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tolerance_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tolerance_angle = value

    @builtins.property
    def use_obstacle_avoidance(self):
        """Message field 'use_obstacle_avoidance'."""
        return self._use_obstacle_avoidance

    @use_obstacle_avoidance.setter
    def use_obstacle_avoidance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_obstacle_avoidance' field must be of type 'bool'"
        self._use_obstacle_avoidance = value

    @builtins.property
    def planning_algorithm(self):
        """Message field 'planning_algorithm'."""
        return self._planning_algorithm

    @planning_algorithm.setter
    def planning_algorithm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'planning_algorithm' field must be of type 'str'"
        self._planning_algorithm = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Point'"
        self._waypoints = value

    @builtins.property
    def timeout_seconds(self):
        """Message field 'timeout_seconds'."""
        return self._timeout_seconds

    @timeout_seconds.setter
    def timeout_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'timeout_seconds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timeout_seconds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timeout_seconds = value

    @builtins.property
    def behavior_on_failure(self):
        """Message field 'behavior_on_failure'."""
        return self._behavior_on_failure

    @behavior_on_failure.setter
    def behavior_on_failure(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'behavior_on_failure' field must be of type 'str'"
        self._behavior_on_failure = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_Result(type):
    """Metaclass of message 'Navigate_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_TIMEOUT': 1,
        'ERROR_OBSTACLE_STUCK': 2,
        'ERROR_GOAL_UNREACHABLE': 3,
        'ERROR_PLANNING_FAILED': 4,
        'ERROR_HARDWARE_FAILURE': 5,
        'ERROR_PREEMPTED': 6,
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
                'day2.action.Navigate_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__result

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
            'ERROR_OBSTACLE_STUCK': cls.__constants['ERROR_OBSTACLE_STUCK'],
            'ERROR_GOAL_UNREACHABLE': cls.__constants['ERROR_GOAL_UNREACHABLE'],
            'ERROR_PLANNING_FAILED': cls.__constants['ERROR_PLANNING_FAILED'],
            'ERROR_HARDWARE_FAILURE': cls.__constants['ERROR_HARDWARE_FAILURE'],
            'ERROR_PREEMPTED': cls.__constants['ERROR_PREEMPTED'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_Navigate_Result.__constants['ERROR_NONE']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_Navigate_Result.__constants['ERROR_TIMEOUT']

    @property
    def ERROR_OBSTACLE_STUCK(self):
        """Message constant 'ERROR_OBSTACLE_STUCK'."""
        return Metaclass_Navigate_Result.__constants['ERROR_OBSTACLE_STUCK']

    @property
    def ERROR_GOAL_UNREACHABLE(self):
        """Message constant 'ERROR_GOAL_UNREACHABLE'."""
        return Metaclass_Navigate_Result.__constants['ERROR_GOAL_UNREACHABLE']

    @property
    def ERROR_PLANNING_FAILED(self):
        """Message constant 'ERROR_PLANNING_FAILED'."""
        return Metaclass_Navigate_Result.__constants['ERROR_PLANNING_FAILED']

    @property
    def ERROR_HARDWARE_FAILURE(self):
        """Message constant 'ERROR_HARDWARE_FAILURE'."""
        return Metaclass_Navigate_Result.__constants['ERROR_HARDWARE_FAILURE']

    @property
    def ERROR_PREEMPTED(self):
        """Message constant 'ERROR_PREEMPTED'."""
        return Metaclass_Navigate_Result.__constants['ERROR_PREEMPTED']


class Navigate_Result(metaclass=Metaclass_Navigate_Result):
    """
    Message class 'Navigate_Result'.

    Constants:
      ERROR_NONE
      ERROR_TIMEOUT
      ERROR_OBSTACLE_STUCK
      ERROR_GOAL_UNREACHABLE
      ERROR_PLANNING_FAILED
      ERROR_HARDWARE_FAILURE
      ERROR_PREEMPTED
    """

    __slots__ = [
        '_success',
        '_result_message',
        '_final_pose',
        '_total_distance_traveled',
        '_total_time_elapsed',
        '_average_speed',
        '_obstacle_encounters',
        '_warnings',
        '_path_efficiency',
        '_smoothness_score',
        '_replanning_count',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result_message': 'string',
        'final_pose': 'geometry_msgs/PoseStamped',
        'total_distance_traveled': 'float',
        'total_time_elapsed': 'float',
        'average_speed': 'float',
        'obstacle_encounters': 'uint32',
        'warnings': 'sequence<string>',
        'path_efficiency': 'float',
        'smoothness_score': 'float',
        'replanning_count': 'uint32',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from geometry_msgs.msg import PoseStamped
        self.final_pose = kwargs.get('final_pose', PoseStamped())
        self.total_distance_traveled = kwargs.get('total_distance_traveled', float())
        self.total_time_elapsed = kwargs.get('total_time_elapsed', float())
        self.average_speed = kwargs.get('average_speed', float())
        self.obstacle_encounters = kwargs.get('obstacle_encounters', int())
        self.warnings = kwargs.get('warnings', [])
        self.path_efficiency = kwargs.get('path_efficiency', float())
        self.smoothness_score = kwargs.get('smoothness_score', float())
        self.replanning_count = kwargs.get('replanning_count', int())
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
        if self.final_pose != other.final_pose:
            return False
        if self.total_distance_traveled != other.total_distance_traveled:
            return False
        if self.total_time_elapsed != other.total_time_elapsed:
            return False
        if self.average_speed != other.average_speed:
            return False
        if self.obstacle_encounters != other.obstacle_encounters:
            return False
        if self.warnings != other.warnings:
            return False
        if self.path_efficiency != other.path_efficiency:
            return False
        if self.smoothness_score != other.smoothness_score:
            return False
        if self.replanning_count != other.replanning_count:
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
    def final_pose(self):
        """Message field 'final_pose'."""
        return self._final_pose

    @final_pose.setter
    def final_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'final_pose' field must be a sub message of type 'PoseStamped'"
        self._final_pose = value

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
    def total_time_elapsed(self):
        """Message field 'total_time_elapsed'."""
        return self._total_time_elapsed

    @total_time_elapsed.setter
    def total_time_elapsed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_time_elapsed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_time_elapsed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_time_elapsed = value

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
    def obstacle_encounters(self):
        """Message field 'obstacle_encounters'."""
        return self._obstacle_encounters

    @obstacle_encounters.setter
    def obstacle_encounters(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'obstacle_encounters' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'obstacle_encounters' field must be an unsigned integer in [0, 4294967295]"
        self._obstacle_encounters = value

    @builtins.property
    def warnings(self):
        """Message field 'warnings'."""
        return self._warnings

    @warnings.setter
    def warnings(self, value):
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
                "The 'warnings' field must be a set or sequence and each value of type 'str'"
        self._warnings = value

    @builtins.property
    def path_efficiency(self):
        """Message field 'path_efficiency'."""
        return self._path_efficiency

    @path_efficiency.setter
    def path_efficiency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'path_efficiency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'path_efficiency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._path_efficiency = value

    @builtins.property
    def smoothness_score(self):
        """Message field 'smoothness_score'."""
        return self._smoothness_score

    @smoothness_score.setter
    def smoothness_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'smoothness_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'smoothness_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._smoothness_score = value

    @builtins.property
    def replanning_count(self):
        """Message field 'replanning_count'."""
        return self._replanning_count

    @replanning_count.setter
    def replanning_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'replanning_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'replanning_count' field must be an unsigned integer in [0, 4294967295]"
        self._replanning_count = value

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


class Metaclass_Navigate_Feedback(type):
    """Metaclass of message 'Navigate_Feedback'."""

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
                'day2.action.Navigate_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__feedback

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigate_Feedback(metaclass=Metaclass_Navigate_Feedback):
    """Message class 'Navigate_Feedback'."""

    __slots__ = [
        '_current_pose',
        '_distance_to_goal',
        '_estimated_time_remaining',
        '_current_speed',
        '_completion_percentage',
        '_remaining_path',
        '_current_waypoint_index',
        '_current_behavior',
        '_obstacle_detected',
        '_current_status',
        '_path_deviation',
        '_battery_consumption_rate',
        '_cpu_usage',
        '_memory_usage',
        '_last_update_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'current_pose': 'geometry_msgs/PoseStamped',
        'distance_to_goal': 'float',
        'estimated_time_remaining': 'float',
        'current_speed': 'float',
        'completion_percentage': 'float',
        'remaining_path': 'sequence<geometry_msgs/Point>',
        'current_waypoint_index': 'uint32',
        'current_behavior': 'string',
        'obstacle_detected': 'boolean',
        'current_status': 'string',
        'path_deviation': 'float',
        'battery_consumption_rate': 'float',
        'cpu_usage': 'float',
        'memory_usage': 'float',
        'last_update_time': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from geometry_msgs.msg import PoseStamped
        self.current_pose = kwargs.get('current_pose', PoseStamped())
        self.distance_to_goal = kwargs.get('distance_to_goal', float())
        self.estimated_time_remaining = kwargs.get('estimated_time_remaining', float())
        self.current_speed = kwargs.get('current_speed', float())
        self.completion_percentage = kwargs.get('completion_percentage', float())
        self.remaining_path = kwargs.get('remaining_path', [])
        self.current_waypoint_index = kwargs.get('current_waypoint_index', int())
        self.current_behavior = kwargs.get('current_behavior', str())
        self.obstacle_detected = kwargs.get('obstacle_detected', bool())
        self.current_status = kwargs.get('current_status', str())
        self.path_deviation = kwargs.get('path_deviation', float())
        self.battery_consumption_rate = kwargs.get('battery_consumption_rate', float())
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.memory_usage = kwargs.get('memory_usage', float())
        from builtin_interfaces.msg import Time
        self.last_update_time = kwargs.get('last_update_time', Time())

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
        if self.current_pose != other.current_pose:
            return False
        if self.distance_to_goal != other.distance_to_goal:
            return False
        if self.estimated_time_remaining != other.estimated_time_remaining:
            return False
        if self.current_speed != other.current_speed:
            return False
        if self.completion_percentage != other.completion_percentage:
            return False
        if self.remaining_path != other.remaining_path:
            return False
        if self.current_waypoint_index != other.current_waypoint_index:
            return False
        if self.current_behavior != other.current_behavior:
            return False
        if self.obstacle_detected != other.obstacle_detected:
            return False
        if self.current_status != other.current_status:
            return False
        if self.path_deviation != other.path_deviation:
            return False
        if self.battery_consumption_rate != other.battery_consumption_rate:
            return False
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.memory_usage != other.memory_usage:
            return False
        if self.last_update_time != other.last_update_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_pose(self):
        """Message field 'current_pose'."""
        return self._current_pose

    @current_pose.setter
    def current_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_pose' field must be a sub message of type 'PoseStamped'"
        self._current_pose = value

    @builtins.property
    def distance_to_goal(self):
        """Message field 'distance_to_goal'."""
        return self._distance_to_goal

    @distance_to_goal.setter
    def distance_to_goal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_to_goal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_goal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_goal = value

    @builtins.property
    def estimated_time_remaining(self):
        """Message field 'estimated_time_remaining'."""
        return self._estimated_time_remaining

    @estimated_time_remaining.setter
    def estimated_time_remaining(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'estimated_time_remaining' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_time_remaining' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_time_remaining = value

    @builtins.property
    def current_speed(self):
        """Message field 'current_speed'."""
        return self._current_speed

    @current_speed.setter
    def current_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_speed = value

    @builtins.property
    def completion_percentage(self):
        """Message field 'completion_percentage'."""
        return self._completion_percentage

    @completion_percentage.setter
    def completion_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'completion_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'completion_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._completion_percentage = value

    @builtins.property
    def remaining_path(self):
        """Message field 'remaining_path'."""
        return self._remaining_path

    @remaining_path.setter
    def remaining_path(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'remaining_path' field must be a set or sequence and each value of type 'Point'"
        self._remaining_path = value

    @builtins.property
    def current_waypoint_index(self):
        """Message field 'current_waypoint_index'."""
        return self._current_waypoint_index

    @current_waypoint_index.setter
    def current_waypoint_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_waypoint_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_waypoint_index' field must be an unsigned integer in [0, 4294967295]"
        self._current_waypoint_index = value

    @builtins.property
    def current_behavior(self):
        """Message field 'current_behavior'."""
        return self._current_behavior

    @current_behavior.setter
    def current_behavior(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_behavior' field must be of type 'str'"
        self._current_behavior = value

    @builtins.property
    def obstacle_detected(self):
        """Message field 'obstacle_detected'."""
        return self._obstacle_detected

    @obstacle_detected.setter
    def obstacle_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_detected' field must be of type 'bool'"
        self._obstacle_detected = value

    @builtins.property
    def current_status(self):
        """Message field 'current_status'."""
        return self._current_status

    @current_status.setter
    def current_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_status' field must be of type 'str'"
        self._current_status = value

    @builtins.property
    def path_deviation(self):
        """Message field 'path_deviation'."""
        return self._path_deviation

    @path_deviation.setter
    def path_deviation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'path_deviation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'path_deviation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._path_deviation = value

    @builtins.property
    def battery_consumption_rate(self):
        """Message field 'battery_consumption_rate'."""
        return self._battery_consumption_rate

    @battery_consumption_rate.setter
    def battery_consumption_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_consumption_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_consumption_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_consumption_rate = value

    @builtins.property
    def cpu_usage(self):
        """Message field 'cpu_usage'."""
        return self._cpu_usage

    @cpu_usage.setter
    def cpu_usage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_usage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_usage = value

    @builtins.property
    def memory_usage(self):
        """Message field 'memory_usage'."""
        return self._memory_usage

    @memory_usage.setter
    def memory_usage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'memory_usage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'memory_usage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._memory_usage = value

    @builtins.property
    def last_update_time(self):
        """Message field 'last_update_time'."""
        return self._last_update_time

    @last_update_time.setter
    def last_update_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_update_time' field must be a sub message of type 'Time'"
        self._last_update_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_SendGoal_Request(type):
    """Metaclass of message 'Navigate_SendGoal_Request'."""

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
                'day2.action.Navigate_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__send_goal__request

            from day2.action import Navigate
            if Navigate.Goal.__class__._TYPE_SUPPORT is None:
                Navigate.Goal.__class__.__import_type_support__()

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


class Navigate_SendGoal_Request(metaclass=Metaclass_Navigate_SendGoal_Request):
    """Message class 'Navigate_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'day2/Navigate_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_Goal'),  # noqa: E501
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
        from day2.action._navigate import Navigate_Goal
        self.goal = kwargs.get('goal', Navigate_Goal())

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
            from day2.action._navigate import Navigate_Goal
            assert \
                isinstance(value, Navigate_Goal), \
                "The 'goal' field must be a sub message of type 'Navigate_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_SendGoal_Response(type):
    """Metaclass of message 'Navigate_SendGoal_Response'."""

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
                'day2.action.Navigate_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__send_goal__response

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


class Navigate_SendGoal_Response(metaclass=Metaclass_Navigate_SendGoal_Response):
    """Message class 'Navigate_SendGoal_Response'."""

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


class Metaclass_Navigate_SendGoal_Event(type):
    """Metaclass of message 'Navigate_SendGoal_Event'."""

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
                'day2.action.Navigate_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__send_goal__event

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


class Navigate_SendGoal_Event(metaclass=Metaclass_Navigate_SendGoal_Event):
    """Message class 'Navigate_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/Navigate_SendGoal_Request, 1>',
        'response': 'sequence<day2/Navigate_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_SendGoal_Response'), 1),  # noqa: E501
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
            from day2.action import Navigate_SendGoal_Request
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
                 all(isinstance(v, Navigate_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'Navigate_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import Navigate_SendGoal_Response
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
                 all(isinstance(v, Navigate_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'Navigate_SendGoal_Response'"
        self._response = value


class Metaclass_Navigate_SendGoal(type):
    """Metaclass of service 'Navigate_SendGoal'."""

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
                'day2.action.Navigate_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate__send_goal

            from day2.action import _navigate
            if _navigate.Metaclass_Navigate_SendGoal_Request._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_SendGoal_Request.__import_type_support__()
            if _navigate.Metaclass_Navigate_SendGoal_Response._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_SendGoal_Response.__import_type_support__()
            if _navigate.Metaclass_Navigate_SendGoal_Event._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_SendGoal_Event.__import_type_support__()


class Navigate_SendGoal(metaclass=Metaclass_Navigate_SendGoal):
    from day2.action._navigate import Navigate_SendGoal_Request as Request
    from day2.action._navigate import Navigate_SendGoal_Response as Response
    from day2.action._navigate import Navigate_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_GetResult_Request(type):
    """Metaclass of message 'Navigate_GetResult_Request'."""

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
                'day2.action.Navigate_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__get_result__request

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


class Navigate_GetResult_Request(metaclass=Metaclass_Navigate_GetResult_Request):
    """Message class 'Navigate_GetResult_Request'."""

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


class Metaclass_Navigate_GetResult_Response(type):
    """Metaclass of message 'Navigate_GetResult_Response'."""

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
                'day2.action.Navigate_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__get_result__response

            from day2.action import Navigate
            if Navigate.Result.__class__._TYPE_SUPPORT is None:
                Navigate.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Navigate_GetResult_Response(metaclass=Metaclass_Navigate_GetResult_Response):
    """Message class 'Navigate_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'day2/Navigate_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_Result'),  # noqa: E501
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
        from day2.action._navigate import Navigate_Result
        self.result = kwargs.get('result', Navigate_Result())

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
            from day2.action._navigate import Navigate_Result
            assert \
                isinstance(value, Navigate_Result), \
                "The 'result' field must be a sub message of type 'Navigate_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_GetResult_Event(type):
    """Metaclass of message 'Navigate_GetResult_Event'."""

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
                'day2.action.Navigate_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__get_result__event

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


class Navigate_GetResult_Event(metaclass=Metaclass_Navigate_GetResult_Event):
    """Message class 'Navigate_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/Navigate_GetResult_Request, 1>',
        'response': 'sequence<day2/Navigate_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_GetResult_Response'), 1),  # noqa: E501
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
            from day2.action import Navigate_GetResult_Request
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
                 all(isinstance(v, Navigate_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'Navigate_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import Navigate_GetResult_Response
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
                 all(isinstance(v, Navigate_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'Navigate_GetResult_Response'"
        self._response = value


class Metaclass_Navigate_GetResult(type):
    """Metaclass of service 'Navigate_GetResult'."""

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
                'day2.action.Navigate_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__navigate__get_result

            from day2.action import _navigate
            if _navigate.Metaclass_Navigate_GetResult_Request._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_GetResult_Request.__import_type_support__()
            if _navigate.Metaclass_Navigate_GetResult_Response._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_GetResult_Response.__import_type_support__()
            if _navigate.Metaclass_Navigate_GetResult_Event._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_GetResult_Event.__import_type_support__()


class Navigate_GetResult(metaclass=Metaclass_Navigate_GetResult):
    from day2.action._navigate import Navigate_GetResult_Request as Request
    from day2.action._navigate import Navigate_GetResult_Response as Response
    from day2.action._navigate import Navigate_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Navigate_FeedbackMessage(type):
    """Metaclass of message 'Navigate_FeedbackMessage'."""

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
                'day2.action.Navigate_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__navigate__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__navigate__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__navigate__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__navigate__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__navigate__feedback_message

            from day2.action import Navigate
            if Navigate.Feedback.__class__._TYPE_SUPPORT is None:
                Navigate.Feedback.__class__.__import_type_support__()

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


class Navigate_FeedbackMessage(metaclass=Metaclass_Navigate_FeedbackMessage):
    """Message class 'Navigate_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'day2/Navigate_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'Navigate_Feedback'),  # noqa: E501
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
        from day2.action._navigate import Navigate_Feedback
        self.feedback = kwargs.get('feedback', Navigate_Feedback())

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
            from day2.action._navigate import Navigate_Feedback
            assert \
                isinstance(value, Navigate_Feedback), \
                "The 'feedback' field must be a sub message of type 'Navigate_Feedback'"
        self._feedback = value


class Metaclass_Navigate(type):
    """Metaclass of action 'Navigate'."""

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
                'day2.action.Navigate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__navigate

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from day2.action import _navigate
            if _navigate.Metaclass_Navigate_SendGoal._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_SendGoal.__import_type_support__()
            if _navigate.Metaclass_Navigate_GetResult._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_GetResult.__import_type_support__()
            if _navigate.Metaclass_Navigate_FeedbackMessage._TYPE_SUPPORT is None:
                _navigate.Metaclass_Navigate_FeedbackMessage.__import_type_support__()


class Navigate(metaclass=Metaclass_Navigate):

    # The goal message defined in the action definition.
    from day2.action._navigate import Navigate_Goal as Goal
    # The result message defined in the action definition.
    from day2.action._navigate import Navigate_Result as Result
    # The feedback message defined in the action definition.
    from day2.action._navigate import Navigate_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from day2.action._navigate import Navigate_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from day2.action._navigate import Navigate_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from day2.action._navigate import Navigate_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
