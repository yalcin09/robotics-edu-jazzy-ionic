# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:srv/CalculatePath.idl
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


class Metaclass_CalculatePath_Request(type):
    """Metaclass of message 'CalculatePath_Request'."""

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
                'day2.srv.CalculatePath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculate_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculate_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculate_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculate_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculate_path__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalculatePath_Request(metaclass=Metaclass_CalculatePath_Request):
    """Message class 'CalculatePath_Request'."""

    __slots__ = [
        '_start_position',
        '_goal_position',
        '_start_orientation',
        '_goal_orientation',
        '_max_velocity',
        '_max_acceleration',
        '_turning_radius',
        '_safety_margin',
        '_planning_algorithm',
        '_planning_timeout',
        '_optimize_for_speed',
        '_optimize_for_smoothness',
        '_avoid_dynamic_obstacles',
        '_waypoints',
        '_forbidden_zones',
        '_special_constraints',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'start_position': 'geometry_msgs/Point',
        'goal_position': 'geometry_msgs/Point',
        'start_orientation': 'geometry_msgs/Vector3',
        'goal_orientation': 'geometry_msgs/Vector3',
        'max_velocity': 'float',
        'max_acceleration': 'float',
        'turning_radius': 'float',
        'safety_margin': 'float',
        'planning_algorithm': 'string',
        'planning_timeout': 'float',
        'optimize_for_speed': 'boolean',
        'optimize_for_smoothness': 'boolean',
        'avoid_dynamic_obstacles': 'boolean',
        'waypoints': 'sequence<geometry_msgs/Point>',
        'forbidden_zones': 'sequence<geometry_msgs/Point>',
        'special_constraints': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        from geometry_msgs.msg import Point
        self.start_position = kwargs.get('start_position', Point())
        from geometry_msgs.msg import Point
        self.goal_position = kwargs.get('goal_position', Point())
        from geometry_msgs.msg import Vector3
        self.start_orientation = kwargs.get('start_orientation', Vector3())
        from geometry_msgs.msg import Vector3
        self.goal_orientation = kwargs.get('goal_orientation', Vector3())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.turning_radius = kwargs.get('turning_radius', float())
        self.safety_margin = kwargs.get('safety_margin', float())
        self.planning_algorithm = kwargs.get('planning_algorithm', str())
        self.planning_timeout = kwargs.get('planning_timeout', float())
        self.optimize_for_speed = kwargs.get('optimize_for_speed', bool())
        self.optimize_for_smoothness = kwargs.get('optimize_for_smoothness', bool())
        self.avoid_dynamic_obstacles = kwargs.get('avoid_dynamic_obstacles', bool())
        self.waypoints = kwargs.get('waypoints', [])
        self.forbidden_zones = kwargs.get('forbidden_zones', [])
        self.special_constraints = kwargs.get('special_constraints', [])

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
        if self.start_position != other.start_position:
            return False
        if self.goal_position != other.goal_position:
            return False
        if self.start_orientation != other.start_orientation:
            return False
        if self.goal_orientation != other.goal_orientation:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.turning_radius != other.turning_radius:
            return False
        if self.safety_margin != other.safety_margin:
            return False
        if self.planning_algorithm != other.planning_algorithm:
            return False
        if self.planning_timeout != other.planning_timeout:
            return False
        if self.optimize_for_speed != other.optimize_for_speed:
            return False
        if self.optimize_for_smoothness != other.optimize_for_smoothness:
            return False
        if self.avoid_dynamic_obstacles != other.avoid_dynamic_obstacles:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.forbidden_zones != other.forbidden_zones:
            return False
        if self.special_constraints != other.special_constraints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_position(self):
        """Message field 'start_position'."""
        return self._start_position

    @start_position.setter
    def start_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'start_position' field must be a sub message of type 'Point'"
        self._start_position = value

    @builtins.property
    def goal_position(self):
        """Message field 'goal_position'."""
        return self._goal_position

    @goal_position.setter
    def goal_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'goal_position' field must be a sub message of type 'Point'"
        self._goal_position = value

    @builtins.property
    def start_orientation(self):
        """Message field 'start_orientation'."""
        return self._start_orientation

    @start_orientation.setter
    def start_orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'start_orientation' field must be a sub message of type 'Vector3'"
        self._start_orientation = value

    @builtins.property
    def goal_orientation(self):
        """Message field 'goal_orientation'."""
        return self._goal_orientation

    @goal_orientation.setter
    def goal_orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'goal_orientation' field must be a sub message of type 'Vector3'"
        self._goal_orientation = value

    @builtins.property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_velocity = value

    @builtins.property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_acceleration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_acceleration = value

    @builtins.property
    def turning_radius(self):
        """Message field 'turning_radius'."""
        return self._turning_radius

    @turning_radius.setter
    def turning_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'turning_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turning_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turning_radius = value

    @builtins.property
    def safety_margin(self):
        """Message field 'safety_margin'."""
        return self._safety_margin

    @safety_margin.setter
    def safety_margin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'safety_margin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'safety_margin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._safety_margin = value

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
    def planning_timeout(self):
        """Message field 'planning_timeout'."""
        return self._planning_timeout

    @planning_timeout.setter
    def planning_timeout(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'planning_timeout' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'planning_timeout' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._planning_timeout = value

    @builtins.property
    def optimize_for_speed(self):
        """Message field 'optimize_for_speed'."""
        return self._optimize_for_speed

    @optimize_for_speed.setter
    def optimize_for_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'optimize_for_speed' field must be of type 'bool'"
        self._optimize_for_speed = value

    @builtins.property
    def optimize_for_smoothness(self):
        """Message field 'optimize_for_smoothness'."""
        return self._optimize_for_smoothness

    @optimize_for_smoothness.setter
    def optimize_for_smoothness(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'optimize_for_smoothness' field must be of type 'bool'"
        self._optimize_for_smoothness = value

    @builtins.property
    def avoid_dynamic_obstacles(self):
        """Message field 'avoid_dynamic_obstacles'."""
        return self._avoid_dynamic_obstacles

    @avoid_dynamic_obstacles.setter
    def avoid_dynamic_obstacles(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'avoid_dynamic_obstacles' field must be of type 'bool'"
        self._avoid_dynamic_obstacles = value

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
    def forbidden_zones(self):
        """Message field 'forbidden_zones'."""
        return self._forbidden_zones

    @forbidden_zones.setter
    def forbidden_zones(self, value):
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
                "The 'forbidden_zones' field must be a set or sequence and each value of type 'Point'"
        self._forbidden_zones = value

    @builtins.property
    def special_constraints(self):
        """Message field 'special_constraints'."""
        return self._special_constraints

    @special_constraints.setter
    def special_constraints(self, value):
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
                "The 'special_constraints' field must be a set or sequence and each value of type 'str'"
        self._special_constraints = value


# Import statements for member types

# Member 'path_velocities'
# Member 'path_timestamps'
# Member 'alternative_scores'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_CalculatePath_Response(type):
    """Metaclass of message 'CalculatePath_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_NO_PATH_FOUND': 1,
        'ERROR_START_OCCUPIED': 2,
        'ERROR_GOAL_OCCUPIED': 3,
        'ERROR_TIMEOUT': 4,
        'ERROR_INVALID_CONSTRAINTS': 5,
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
                'day2.srv.CalculatePath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculate_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculate_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculate_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculate_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculate_path__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_NO_PATH_FOUND': cls.__constants['ERROR_NO_PATH_FOUND'],
            'ERROR_START_OCCUPIED': cls.__constants['ERROR_START_OCCUPIED'],
            'ERROR_GOAL_OCCUPIED': cls.__constants['ERROR_GOAL_OCCUPIED'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
            'ERROR_INVALID_CONSTRAINTS': cls.__constants['ERROR_INVALID_CONSTRAINTS'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_NONE']

    @property
    def ERROR_NO_PATH_FOUND(self):
        """Message constant 'ERROR_NO_PATH_FOUND'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_NO_PATH_FOUND']

    @property
    def ERROR_START_OCCUPIED(self):
        """Message constant 'ERROR_START_OCCUPIED'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_START_OCCUPIED']

    @property
    def ERROR_GOAL_OCCUPIED(self):
        """Message constant 'ERROR_GOAL_OCCUPIED'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_GOAL_OCCUPIED']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_TIMEOUT']

    @property
    def ERROR_INVALID_CONSTRAINTS(self):
        """Message constant 'ERROR_INVALID_CONSTRAINTS'."""
        return Metaclass_CalculatePath_Response.__constants['ERROR_INVALID_CONSTRAINTS']


class CalculatePath_Response(metaclass=Metaclass_CalculatePath_Response):
    """
    Message class 'CalculatePath_Response'.

    Constants:
      ERROR_NONE
      ERROR_NO_PATH_FOUND
      ERROR_START_OCCUPIED
      ERROR_GOAL_OCCUPIED
      ERROR_TIMEOUT
      ERROR_INVALID_CONSTRAINTS
    """

    __slots__ = [
        '_success',
        '_message',
        '_path_points',
        '_path_orientations',
        '_path_velocities',
        '_path_timestamps',
        '_total_distance',
        '_total_time',
        '_path_smoothness',
        '_safety_score',
        '_num_waypoints',
        '_alternative_paths',
        '_alternative_scores',
        '_planning_time_ms',
        '_algorithm_used',
        '_nodes_explored',
        '_iterations_count',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'path_points': 'sequence<geometry_msgs/Point>',
        'path_orientations': 'sequence<geometry_msgs/Vector3>',
        'path_velocities': 'sequence<float>',
        'path_timestamps': 'sequence<float>',
        'total_distance': 'float',
        'total_time': 'float',
        'path_smoothness': 'float',
        'safety_score': 'float',
        'num_waypoints': 'uint32',
        'alternative_paths': 'sequence<geometry_msgs/Point>',
        'alternative_scores': 'sequence<float>',
        'planning_time_ms': 'float',
        'algorithm_used': 'string',
        'nodes_explored': 'uint32',
        'iterations_count': 'uint32',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.message = kwargs.get('message', str())
        self.path_points = kwargs.get('path_points', [])
        self.path_orientations = kwargs.get('path_orientations', [])
        self.path_velocities = array.array('f', kwargs.get('path_velocities', []))
        self.path_timestamps = array.array('f', kwargs.get('path_timestamps', []))
        self.total_distance = kwargs.get('total_distance', float())
        self.total_time = kwargs.get('total_time', float())
        self.path_smoothness = kwargs.get('path_smoothness', float())
        self.safety_score = kwargs.get('safety_score', float())
        self.num_waypoints = kwargs.get('num_waypoints', int())
        self.alternative_paths = kwargs.get('alternative_paths', [])
        self.alternative_scores = array.array('f', kwargs.get('alternative_scores', []))
        self.planning_time_ms = kwargs.get('planning_time_ms', float())
        self.algorithm_used = kwargs.get('algorithm_used', str())
        self.nodes_explored = kwargs.get('nodes_explored', int())
        self.iterations_count = kwargs.get('iterations_count', int())
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
        if self.message != other.message:
            return False
        if self.path_points != other.path_points:
            return False
        if self.path_orientations != other.path_orientations:
            return False
        if self.path_velocities != other.path_velocities:
            return False
        if self.path_timestamps != other.path_timestamps:
            return False
        if self.total_distance != other.total_distance:
            return False
        if self.total_time != other.total_time:
            return False
        if self.path_smoothness != other.path_smoothness:
            return False
        if self.safety_score != other.safety_score:
            return False
        if self.num_waypoints != other.num_waypoints:
            return False
        if self.alternative_paths != other.alternative_paths:
            return False
        if self.alternative_scores != other.alternative_scores:
            return False
        if self.planning_time_ms != other.planning_time_ms:
            return False
        if self.algorithm_used != other.algorithm_used:
            return False
        if self.nodes_explored != other.nodes_explored:
            return False
        if self.iterations_count != other.iterations_count:
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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def path_points(self):
        """Message field 'path_points'."""
        return self._path_points

    @path_points.setter
    def path_points(self, value):
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
                "The 'path_points' field must be a set or sequence and each value of type 'Point'"
        self._path_points = value

    @builtins.property
    def path_orientations(self):
        """Message field 'path_orientations'."""
        return self._path_orientations

    @path_orientations.setter
    def path_orientations(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'path_orientations' field must be a set or sequence and each value of type 'Vector3'"
        self._path_orientations = value

    @builtins.property
    def path_velocities(self):
        """Message field 'path_velocities'."""
        return self._path_velocities

    @path_velocities.setter
    def path_velocities(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'path_velocities' array.array() must have the type code of 'f'"
                self._path_velocities = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'path_velocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._path_velocities = array.array('f', value)

    @builtins.property
    def path_timestamps(self):
        """Message field 'path_timestamps'."""
        return self._path_timestamps

    @path_timestamps.setter
    def path_timestamps(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'path_timestamps' array.array() must have the type code of 'f'"
                self._path_timestamps = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'path_timestamps' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._path_timestamps = array.array('f', value)

    @builtins.property
    def total_distance(self):
        """Message field 'total_distance'."""
        return self._total_distance

    @total_distance.setter
    def total_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_distance = value

    @builtins.property
    def total_time(self):
        """Message field 'total_time'."""
        return self._total_time

    @total_time.setter
    def total_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_time = value

    @builtins.property
    def path_smoothness(self):
        """Message field 'path_smoothness'."""
        return self._path_smoothness

    @path_smoothness.setter
    def path_smoothness(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'path_smoothness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'path_smoothness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._path_smoothness = value

    @builtins.property
    def safety_score(self):
        """Message field 'safety_score'."""
        return self._safety_score

    @safety_score.setter
    def safety_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'safety_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'safety_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._safety_score = value

    @builtins.property
    def num_waypoints(self):
        """Message field 'num_waypoints'."""
        return self._num_waypoints

    @num_waypoints.setter
    def num_waypoints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_waypoints' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_waypoints' field must be an unsigned integer in [0, 4294967295]"
        self._num_waypoints = value

    @builtins.property
    def alternative_paths(self):
        """Message field 'alternative_paths'."""
        return self._alternative_paths

    @alternative_paths.setter
    def alternative_paths(self, value):
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
                "The 'alternative_paths' field must be a set or sequence and each value of type 'Point'"
        self._alternative_paths = value

    @builtins.property
    def alternative_scores(self):
        """Message field 'alternative_scores'."""
        return self._alternative_scores

    @alternative_scores.setter
    def alternative_scores(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'alternative_scores' array.array() must have the type code of 'f'"
                self._alternative_scores = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'alternative_scores' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._alternative_scores = array.array('f', value)

    @builtins.property
    def planning_time_ms(self):
        """Message field 'planning_time_ms'."""
        return self._planning_time_ms

    @planning_time_ms.setter
    def planning_time_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'planning_time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'planning_time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._planning_time_ms = value

    @builtins.property
    def algorithm_used(self):
        """Message field 'algorithm_used'."""
        return self._algorithm_used

    @algorithm_used.setter
    def algorithm_used(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'algorithm_used' field must be of type 'str'"
        self._algorithm_used = value

    @builtins.property
    def nodes_explored(self):
        """Message field 'nodes_explored'."""
        return self._nodes_explored

    @nodes_explored.setter
    def nodes_explored(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'nodes_explored' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nodes_explored' field must be an unsigned integer in [0, 4294967295]"
        self._nodes_explored = value

    @builtins.property
    def iterations_count(self):
        """Message field 'iterations_count'."""
        return self._iterations_count

    @iterations_count.setter
    def iterations_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'iterations_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'iterations_count' field must be an unsigned integer in [0, 4294967295]"
        self._iterations_count = value

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
# import rosidl_parser.definition


class Metaclass_CalculatePath_Event(type):
    """Metaclass of message 'CalculatePath_Event'."""

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
                'day2.srv.CalculatePath_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculate_path__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculate_path__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculate_path__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculate_path__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculate_path__event

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


class CalculatePath_Event(metaclass=Metaclass_CalculatePath_Event):
    """Message class 'CalculatePath_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/CalculatePath_Request, 1>',
        'response': 'sequence<day2/CalculatePath_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'CalculatePath_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'CalculatePath_Response'), 1),  # noqa: E501
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
            from day2.srv import CalculatePath_Request
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
                 all(isinstance(v, CalculatePath_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CalculatePath_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.srv import CalculatePath_Response
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
                 all(isinstance(v, CalculatePath_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CalculatePath_Response'"
        self._response = value


class Metaclass_CalculatePath(type):
    """Metaclass of service 'CalculatePath'."""

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
                'day2.srv.CalculatePath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calculate_path

            from day2.srv import _calculate_path
            if _calculate_path.Metaclass_CalculatePath_Request._TYPE_SUPPORT is None:
                _calculate_path.Metaclass_CalculatePath_Request.__import_type_support__()
            if _calculate_path.Metaclass_CalculatePath_Response._TYPE_SUPPORT is None:
                _calculate_path.Metaclass_CalculatePath_Response.__import_type_support__()
            if _calculate_path.Metaclass_CalculatePath_Event._TYPE_SUPPORT is None:
                _calculate_path.Metaclass_CalculatePath_Event.__import_type_support__()


class CalculatePath(metaclass=Metaclass_CalculatePath):
    from day2.srv._calculate_path import CalculatePath_Request as Request
    from day2.srv._calculate_path import CalculatePath_Response as Response
    from day2.srv._calculate_path import CalculatePath_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
