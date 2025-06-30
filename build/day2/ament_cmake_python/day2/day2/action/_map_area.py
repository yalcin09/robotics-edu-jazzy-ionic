# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:action/MapArea.idl
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


class Metaclass_MapArea_Goal(type):
    """Metaclass of message 'MapArea_Goal'."""

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
                'day2.action.MapArea_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__goal

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


class MapArea_Goal(metaclass=Metaclass_MapArea_Goal):
    """Message class 'MapArea_Goal'."""

    __slots__ = [
        '_boundary_points',
        '_resolution',
        '_mapping_mode',
        '_coverage_percentage',
        '_include_3d_data',
        '_max_exploration_speed',
        '_sensor_overlap_ratio',
        '_waypoint_spacing',
        '_exploration_pattern',
        '_active_sensors',
        '_sensor_range',
        '_use_slam',
        '_slam_algorithm',
        '_min_quality_threshold',
        '_optimize_for_accuracy',
        '_optimize_for_speed',
        '_timeout_seconds',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'boundary_points': 'sequence<geometry_msgs/Point>',
        'resolution': 'float',
        'mapping_mode': 'string',
        'coverage_percentage': 'float',
        'include_3d_data': 'boolean',
        'max_exploration_speed': 'float',
        'sensor_overlap_ratio': 'float',
        'waypoint_spacing': 'float',
        'exploration_pattern': 'string',
        'active_sensors': 'sequence<string>',
        'sensor_range': 'float',
        'use_slam': 'boolean',
        'slam_algorithm': 'string',
        'min_quality_threshold': 'float',
        'optimize_for_accuracy': 'boolean',
        'optimize_for_speed': 'boolean',
        'timeout_seconds': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.boundary_points = kwargs.get('boundary_points', [])
        self.resolution = kwargs.get('resolution', float())
        self.mapping_mode = kwargs.get('mapping_mode', str())
        self.coverage_percentage = kwargs.get('coverage_percentage', float())
        self.include_3d_data = kwargs.get('include_3d_data', bool())
        self.max_exploration_speed = kwargs.get('max_exploration_speed', float())
        self.sensor_overlap_ratio = kwargs.get('sensor_overlap_ratio', float())
        self.waypoint_spacing = kwargs.get('waypoint_spacing', float())
        self.exploration_pattern = kwargs.get('exploration_pattern', str())
        self.active_sensors = kwargs.get('active_sensors', [])
        self.sensor_range = kwargs.get('sensor_range', float())
        self.use_slam = kwargs.get('use_slam', bool())
        self.slam_algorithm = kwargs.get('slam_algorithm', str())
        self.min_quality_threshold = kwargs.get('min_quality_threshold', float())
        self.optimize_for_accuracy = kwargs.get('optimize_for_accuracy', bool())
        self.optimize_for_speed = kwargs.get('optimize_for_speed', bool())
        self.timeout_seconds = kwargs.get('timeout_seconds', float())

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
        if self.boundary_points != other.boundary_points:
            return False
        if self.resolution != other.resolution:
            return False
        if self.mapping_mode != other.mapping_mode:
            return False
        if self.coverage_percentage != other.coverage_percentage:
            return False
        if self.include_3d_data != other.include_3d_data:
            return False
        if self.max_exploration_speed != other.max_exploration_speed:
            return False
        if self.sensor_overlap_ratio != other.sensor_overlap_ratio:
            return False
        if self.waypoint_spacing != other.waypoint_spacing:
            return False
        if self.exploration_pattern != other.exploration_pattern:
            return False
        if self.active_sensors != other.active_sensors:
            return False
        if self.sensor_range != other.sensor_range:
            return False
        if self.use_slam != other.use_slam:
            return False
        if self.slam_algorithm != other.slam_algorithm:
            return False
        if self.min_quality_threshold != other.min_quality_threshold:
            return False
        if self.optimize_for_accuracy != other.optimize_for_accuracy:
            return False
        if self.optimize_for_speed != other.optimize_for_speed:
            return False
        if self.timeout_seconds != other.timeout_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def boundary_points(self):
        """Message field 'boundary_points'."""
        return self._boundary_points

    @boundary_points.setter
    def boundary_points(self, value):
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
                "The 'boundary_points' field must be a set or sequence and each value of type 'Point'"
        self._boundary_points = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._resolution = value

    @builtins.property
    def mapping_mode(self):
        """Message field 'mapping_mode'."""
        return self._mapping_mode

    @mapping_mode.setter
    def mapping_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mapping_mode' field must be of type 'str'"
        self._mapping_mode = value

    @builtins.property
    def coverage_percentage(self):
        """Message field 'coverage_percentage'."""
        return self._coverage_percentage

    @coverage_percentage.setter
    def coverage_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'coverage_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coverage_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coverage_percentage = value

    @builtins.property
    def include_3d_data(self):
        """Message field 'include_3d_data'."""
        return self._include_3d_data

    @include_3d_data.setter
    def include_3d_data(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'include_3d_data' field must be of type 'bool'"
        self._include_3d_data = value

    @builtins.property
    def max_exploration_speed(self):
        """Message field 'max_exploration_speed'."""
        return self._max_exploration_speed

    @max_exploration_speed.setter
    def max_exploration_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_exploration_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_exploration_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_exploration_speed = value

    @builtins.property
    def sensor_overlap_ratio(self):
        """Message field 'sensor_overlap_ratio'."""
        return self._sensor_overlap_ratio

    @sensor_overlap_ratio.setter
    def sensor_overlap_ratio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sensor_overlap_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sensor_overlap_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sensor_overlap_ratio = value

    @builtins.property
    def waypoint_spacing(self):
        """Message field 'waypoint_spacing'."""
        return self._waypoint_spacing

    @waypoint_spacing.setter
    def waypoint_spacing(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'waypoint_spacing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waypoint_spacing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waypoint_spacing = value

    @builtins.property
    def exploration_pattern(self):
        """Message field 'exploration_pattern'."""
        return self._exploration_pattern

    @exploration_pattern.setter
    def exploration_pattern(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'exploration_pattern' field must be of type 'str'"
        self._exploration_pattern = value

    @builtins.property
    def active_sensors(self):
        """Message field 'active_sensors'."""
        return self._active_sensors

    @active_sensors.setter
    def active_sensors(self, value):
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
                "The 'active_sensors' field must be a set or sequence and each value of type 'str'"
        self._active_sensors = value

    @builtins.property
    def sensor_range(self):
        """Message field 'sensor_range'."""
        return self._sensor_range

    @sensor_range.setter
    def sensor_range(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sensor_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sensor_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sensor_range = value

    @builtins.property
    def use_slam(self):
        """Message field 'use_slam'."""
        return self._use_slam

    @use_slam.setter
    def use_slam(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_slam' field must be of type 'bool'"
        self._use_slam = value

    @builtins.property
    def slam_algorithm(self):
        """Message field 'slam_algorithm'."""
        return self._slam_algorithm

    @slam_algorithm.setter
    def slam_algorithm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'slam_algorithm' field must be of type 'str'"
        self._slam_algorithm = value

    @builtins.property
    def min_quality_threshold(self):
        """Message field 'min_quality_threshold'."""
        return self._min_quality_threshold

    @min_quality_threshold.setter
    def min_quality_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_quality_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_quality_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_quality_threshold = value

    @builtins.property
    def optimize_for_accuracy(self):
        """Message field 'optimize_for_accuracy'."""
        return self._optimize_for_accuracy

    @optimize_for_accuracy.setter
    def optimize_for_accuracy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'optimize_for_accuracy' field must be of type 'bool'"
        self._optimize_for_accuracy = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_Result(type):
    """Metaclass of message 'MapArea_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_AREA_TOO_LARGE': 1,
        'ERROR_SENSOR_FAILURE': 2,
        'ERROR_LOCALIZATION_LOST': 3,
        'ERROR_INSUFFICIENT_COVERAGE': 4,
        'ERROR_MAP_QUALITY_LOW': 5,
        'ERROR_TIMEOUT': 6,
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
                'day2.action.MapArea_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_AREA_TOO_LARGE': cls.__constants['ERROR_AREA_TOO_LARGE'],
            'ERROR_SENSOR_FAILURE': cls.__constants['ERROR_SENSOR_FAILURE'],
            'ERROR_LOCALIZATION_LOST': cls.__constants['ERROR_LOCALIZATION_LOST'],
            'ERROR_INSUFFICIENT_COVERAGE': cls.__constants['ERROR_INSUFFICIENT_COVERAGE'],
            'ERROR_MAP_QUALITY_LOW': cls.__constants['ERROR_MAP_QUALITY_LOW'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_MapArea_Result.__constants['ERROR_NONE']

    @property
    def ERROR_AREA_TOO_LARGE(self):
        """Message constant 'ERROR_AREA_TOO_LARGE'."""
        return Metaclass_MapArea_Result.__constants['ERROR_AREA_TOO_LARGE']

    @property
    def ERROR_SENSOR_FAILURE(self):
        """Message constant 'ERROR_SENSOR_FAILURE'."""
        return Metaclass_MapArea_Result.__constants['ERROR_SENSOR_FAILURE']

    @property
    def ERROR_LOCALIZATION_LOST(self):
        """Message constant 'ERROR_LOCALIZATION_LOST'."""
        return Metaclass_MapArea_Result.__constants['ERROR_LOCALIZATION_LOST']

    @property
    def ERROR_INSUFFICIENT_COVERAGE(self):
        """Message constant 'ERROR_INSUFFICIENT_COVERAGE'."""
        return Metaclass_MapArea_Result.__constants['ERROR_INSUFFICIENT_COVERAGE']

    @property
    def ERROR_MAP_QUALITY_LOW(self):
        """Message constant 'ERROR_MAP_QUALITY_LOW'."""
        return Metaclass_MapArea_Result.__constants['ERROR_MAP_QUALITY_LOW']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_MapArea_Result.__constants['ERROR_TIMEOUT']


class MapArea_Result(metaclass=Metaclass_MapArea_Result):
    """
    Message class 'MapArea_Result'.

    Constants:
      ERROR_NONE
      ERROR_AREA_TOO_LARGE
      ERROR_SENSOR_FAILURE
      ERROR_LOCALIZATION_LOST
      ERROR_INSUFFICIENT_COVERAGE
      ERROR_MAP_QUALITY_LOW
      ERROR_TIMEOUT
    """

    __slots__ = [
        '_success',
        '_result_message',
        '_map_topic',
        '_map_file_path',
        '_area_covered',
        '_coverage_percentage',
        '_map_accuracy',
        '_feature_density',
        '_total_mapping_time',
        '_total_distance_traveled',
        '_total_sensor_readings',
        '_average_mapping_speed',
        '_map_width_pixels',
        '_map_height_pixels',
        '_occupied_cells',
        '_free_cells',
        '_unknown_cells',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result_message': 'string',
        'map_topic': 'string',
        'map_file_path': 'string',
        'area_covered': 'float',
        'coverage_percentage': 'float',
        'map_accuracy': 'float',
        'feature_density': 'float',
        'total_mapping_time': 'float',
        'total_distance_traveled': 'float',
        'total_sensor_readings': 'uint32',
        'average_mapping_speed': 'float',
        'map_width_pixels': 'uint32',
        'map_height_pixels': 'uint32',
        'occupied_cells': 'uint32',
        'free_cells': 'uint32',
        'unknown_cells': 'uint32',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.result_message = kwargs.get('result_message', str())
        self.map_topic = kwargs.get('map_topic', str())
        self.map_file_path = kwargs.get('map_file_path', str())
        self.area_covered = kwargs.get('area_covered', float())
        self.coverage_percentage = kwargs.get('coverage_percentage', float())
        self.map_accuracy = kwargs.get('map_accuracy', float())
        self.feature_density = kwargs.get('feature_density', float())
        self.total_mapping_time = kwargs.get('total_mapping_time', float())
        self.total_distance_traveled = kwargs.get('total_distance_traveled', float())
        self.total_sensor_readings = kwargs.get('total_sensor_readings', int())
        self.average_mapping_speed = kwargs.get('average_mapping_speed', float())
        self.map_width_pixels = kwargs.get('map_width_pixels', int())
        self.map_height_pixels = kwargs.get('map_height_pixels', int())
        self.occupied_cells = kwargs.get('occupied_cells', int())
        self.free_cells = kwargs.get('free_cells', int())
        self.unknown_cells = kwargs.get('unknown_cells', int())
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
        if self.map_topic != other.map_topic:
            return False
        if self.map_file_path != other.map_file_path:
            return False
        if self.area_covered != other.area_covered:
            return False
        if self.coverage_percentage != other.coverage_percentage:
            return False
        if self.map_accuracy != other.map_accuracy:
            return False
        if self.feature_density != other.feature_density:
            return False
        if self.total_mapping_time != other.total_mapping_time:
            return False
        if self.total_distance_traveled != other.total_distance_traveled:
            return False
        if self.total_sensor_readings != other.total_sensor_readings:
            return False
        if self.average_mapping_speed != other.average_mapping_speed:
            return False
        if self.map_width_pixels != other.map_width_pixels:
            return False
        if self.map_height_pixels != other.map_height_pixels:
            return False
        if self.occupied_cells != other.occupied_cells:
            return False
        if self.free_cells != other.free_cells:
            return False
        if self.unknown_cells != other.unknown_cells:
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
    def map_topic(self):
        """Message field 'map_topic'."""
        return self._map_topic

    @map_topic.setter
    def map_topic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'map_topic' field must be of type 'str'"
        self._map_topic = value

    @builtins.property
    def map_file_path(self):
        """Message field 'map_file_path'."""
        return self._map_file_path

    @map_file_path.setter
    def map_file_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'map_file_path' field must be of type 'str'"
        self._map_file_path = value

    @builtins.property
    def area_covered(self):
        """Message field 'area_covered'."""
        return self._area_covered

    @area_covered.setter
    def area_covered(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'area_covered' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_covered' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_covered = value

    @builtins.property
    def coverage_percentage(self):
        """Message field 'coverage_percentage'."""
        return self._coverage_percentage

    @coverage_percentage.setter
    def coverage_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'coverage_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coverage_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coverage_percentage = value

    @builtins.property
    def map_accuracy(self):
        """Message field 'map_accuracy'."""
        return self._map_accuracy

    @map_accuracy.setter
    def map_accuracy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'map_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'map_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._map_accuracy = value

    @builtins.property
    def feature_density(self):
        """Message field 'feature_density'."""
        return self._feature_density

    @feature_density.setter
    def feature_density(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'feature_density' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feature_density' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feature_density = value

    @builtins.property
    def total_mapping_time(self):
        """Message field 'total_mapping_time'."""
        return self._total_mapping_time

    @total_mapping_time.setter
    def total_mapping_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_mapping_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_mapping_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_mapping_time = value

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
    def total_sensor_readings(self):
        """Message field 'total_sensor_readings'."""
        return self._total_sensor_readings

    @total_sensor_readings.setter
    def total_sensor_readings(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_sensor_readings' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_sensor_readings' field must be an unsigned integer in [0, 4294967295]"
        self._total_sensor_readings = value

    @builtins.property
    def average_mapping_speed(self):
        """Message field 'average_mapping_speed'."""
        return self._average_mapping_speed

    @average_mapping_speed.setter
    def average_mapping_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_mapping_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_mapping_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_mapping_speed = value

    @builtins.property
    def map_width_pixels(self):
        """Message field 'map_width_pixels'."""
        return self._map_width_pixels

    @map_width_pixels.setter
    def map_width_pixels(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'map_width_pixels' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'map_width_pixels' field must be an unsigned integer in [0, 4294967295]"
        self._map_width_pixels = value

    @builtins.property
    def map_height_pixels(self):
        """Message field 'map_height_pixels'."""
        return self._map_height_pixels

    @map_height_pixels.setter
    def map_height_pixels(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'map_height_pixels' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'map_height_pixels' field must be an unsigned integer in [0, 4294967295]"
        self._map_height_pixels = value

    @builtins.property
    def occupied_cells(self):
        """Message field 'occupied_cells'."""
        return self._occupied_cells

    @occupied_cells.setter
    def occupied_cells(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'occupied_cells' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'occupied_cells' field must be an unsigned integer in [0, 4294967295]"
        self._occupied_cells = value

    @builtins.property
    def free_cells(self):
        """Message field 'free_cells'."""
        return self._free_cells

    @free_cells.setter
    def free_cells(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'free_cells' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'free_cells' field must be an unsigned integer in [0, 4294967295]"
        self._free_cells = value

    @builtins.property
    def unknown_cells(self):
        """Message field 'unknown_cells'."""
        return self._unknown_cells

    @unknown_cells.setter
    def unknown_cells(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unknown_cells' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unknown_cells' field must be an unsigned integer in [0, 4294967295]"
        self._unknown_cells = value

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

# Member 'sensor_data_quality'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_Feedback(type):
    """Metaclass of message 'MapArea_Feedback'."""

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
                'day2.action.MapArea_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__feedback

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


class MapArea_Feedback(metaclass=Metaclass_MapArea_Feedback):
    """Message class 'MapArea_Feedback'."""

    __slots__ = [
        '_current_position',
        '_area_mapped_so_far',
        '_coverage_percentage',
        '_estimated_time_remaining',
        '_current_phase',
        '_next_target',
        '_waypoints_completed',
        '_total_waypoints',
        '_current_map_width',
        '_current_map_height',
        '_current_resolution',
        '_new_features_detected',
        '_sensor_active_status',
        '_sensor_data_quality',
        '_sensor_readings_per_second',
        '_localization_confidence',
        '_loop_closures_detected',
        '_pose_uncertainty',
        '_cpu_usage',
        '_memory_usage',
        '_storage_space_used',
        '_last_sensor_update',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'current_position': 'geometry_msgs/Point',
        'area_mapped_so_far': 'float',
        'coverage_percentage': 'float',
        'estimated_time_remaining': 'float',
        'current_phase': 'string',
        'next_target': 'geometry_msgs/Point',
        'waypoints_completed': 'uint32',
        'total_waypoints': 'uint32',
        'current_map_width': 'uint32',
        'current_map_height': 'uint32',
        'current_resolution': 'float',
        'new_features_detected': 'uint32',
        'sensor_active_status': 'sequence<boolean>',
        'sensor_data_quality': 'sequence<float>',
        'sensor_readings_per_second': 'uint32',
        'localization_confidence': 'float',
        'loop_closures_detected': 'uint32',
        'pose_uncertainty': 'float',
        'cpu_usage': 'float',
        'memory_usage': 'float',
        'storage_space_used': 'float',
        'last_sensor_update': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from geometry_msgs.msg import Point
        self.current_position = kwargs.get('current_position', Point())
        self.area_mapped_so_far = kwargs.get('area_mapped_so_far', float())
        self.coverage_percentage = kwargs.get('coverage_percentage', float())
        self.estimated_time_remaining = kwargs.get('estimated_time_remaining', float())
        self.current_phase = kwargs.get('current_phase', str())
        from geometry_msgs.msg import Point
        self.next_target = kwargs.get('next_target', Point())
        self.waypoints_completed = kwargs.get('waypoints_completed', int())
        self.total_waypoints = kwargs.get('total_waypoints', int())
        self.current_map_width = kwargs.get('current_map_width', int())
        self.current_map_height = kwargs.get('current_map_height', int())
        self.current_resolution = kwargs.get('current_resolution', float())
        self.new_features_detected = kwargs.get('new_features_detected', int())
        self.sensor_active_status = kwargs.get('sensor_active_status', [])
        self.sensor_data_quality = array.array('f', kwargs.get('sensor_data_quality', []))
        self.sensor_readings_per_second = kwargs.get('sensor_readings_per_second', int())
        self.localization_confidence = kwargs.get('localization_confidence', float())
        self.loop_closures_detected = kwargs.get('loop_closures_detected', int())
        self.pose_uncertainty = kwargs.get('pose_uncertainty', float())
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.memory_usage = kwargs.get('memory_usage', float())
        self.storage_space_used = kwargs.get('storage_space_used', float())
        from builtin_interfaces.msg import Time
        self.last_sensor_update = kwargs.get('last_sensor_update', Time())

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
        if self.current_position != other.current_position:
            return False
        if self.area_mapped_so_far != other.area_mapped_so_far:
            return False
        if self.coverage_percentage != other.coverage_percentage:
            return False
        if self.estimated_time_remaining != other.estimated_time_remaining:
            return False
        if self.current_phase != other.current_phase:
            return False
        if self.next_target != other.next_target:
            return False
        if self.waypoints_completed != other.waypoints_completed:
            return False
        if self.total_waypoints != other.total_waypoints:
            return False
        if self.current_map_width != other.current_map_width:
            return False
        if self.current_map_height != other.current_map_height:
            return False
        if self.current_resolution != other.current_resolution:
            return False
        if self.new_features_detected != other.new_features_detected:
            return False
        if self.sensor_active_status != other.sensor_active_status:
            return False
        if self.sensor_data_quality != other.sensor_data_quality:
            return False
        if self.sensor_readings_per_second != other.sensor_readings_per_second:
            return False
        if self.localization_confidence != other.localization_confidence:
            return False
        if self.loop_closures_detected != other.loop_closures_detected:
            return False
        if self.pose_uncertainty != other.pose_uncertainty:
            return False
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.memory_usage != other.memory_usage:
            return False
        if self.storage_space_used != other.storage_space_used:
            return False
        if self.last_sensor_update != other.last_sensor_update:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def area_mapped_so_far(self):
        """Message field 'area_mapped_so_far'."""
        return self._area_mapped_so_far

    @area_mapped_so_far.setter
    def area_mapped_so_far(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'area_mapped_so_far' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_mapped_so_far' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_mapped_so_far = value

    @builtins.property
    def coverage_percentage(self):
        """Message field 'coverage_percentage'."""
        return self._coverage_percentage

    @coverage_percentage.setter
    def coverage_percentage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'coverage_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coverage_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coverage_percentage = value

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
    def next_target(self):
        """Message field 'next_target'."""
        return self._next_target

    @next_target.setter
    def next_target(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'next_target' field must be a sub message of type 'Point'"
        self._next_target = value

    @builtins.property
    def waypoints_completed(self):
        """Message field 'waypoints_completed'."""
        return self._waypoints_completed

    @waypoints_completed.setter
    def waypoints_completed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'waypoints_completed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'waypoints_completed' field must be an unsigned integer in [0, 4294967295]"
        self._waypoints_completed = value

    @builtins.property
    def total_waypoints(self):
        """Message field 'total_waypoints'."""
        return self._total_waypoints

    @total_waypoints.setter
    def total_waypoints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_waypoints' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_waypoints' field must be an unsigned integer in [0, 4294967295]"
        self._total_waypoints = value

    @builtins.property
    def current_map_width(self):
        """Message field 'current_map_width'."""
        return self._current_map_width

    @current_map_width.setter
    def current_map_width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_map_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_map_width' field must be an unsigned integer in [0, 4294967295]"
        self._current_map_width = value

    @builtins.property
    def current_map_height(self):
        """Message field 'current_map_height'."""
        return self._current_map_height

    @current_map_height.setter
    def current_map_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_map_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_map_height' field must be an unsigned integer in [0, 4294967295]"
        self._current_map_height = value

    @builtins.property
    def current_resolution(self):
        """Message field 'current_resolution'."""
        return self._current_resolution

    @current_resolution.setter
    def current_resolution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_resolution = value

    @builtins.property
    def new_features_detected(self):
        """Message field 'new_features_detected'."""
        return self._new_features_detected

    @new_features_detected.setter
    def new_features_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'new_features_detected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'new_features_detected' field must be an unsigned integer in [0, 4294967295]"
        self._new_features_detected = value

    @builtins.property
    def sensor_active_status(self):
        """Message field 'sensor_active_status'."""
        return self._sensor_active_status

    @sensor_active_status.setter
    def sensor_active_status(self, value):
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
                "The 'sensor_active_status' field must be a set or sequence and each value of type 'bool'"
        self._sensor_active_status = value

    @builtins.property
    def sensor_data_quality(self):
        """Message field 'sensor_data_quality'."""
        return self._sensor_data_quality

    @sensor_data_quality.setter
    def sensor_data_quality(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'sensor_data_quality' array.array() must have the type code of 'f'"
                self._sensor_data_quality = value
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
                "The 'sensor_data_quality' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sensor_data_quality = array.array('f', value)

    @builtins.property
    def sensor_readings_per_second(self):
        """Message field 'sensor_readings_per_second'."""
        return self._sensor_readings_per_second

    @sensor_readings_per_second.setter
    def sensor_readings_per_second(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_readings_per_second' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_readings_per_second' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_readings_per_second = value

    @builtins.property
    def localization_confidence(self):
        """Message field 'localization_confidence'."""
        return self._localization_confidence

    @localization_confidence.setter
    def localization_confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'localization_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'localization_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._localization_confidence = value

    @builtins.property
    def loop_closures_detected(self):
        """Message field 'loop_closures_detected'."""
        return self._loop_closures_detected

    @loop_closures_detected.setter
    def loop_closures_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loop_closures_detected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loop_closures_detected' field must be an unsigned integer in [0, 4294967295]"
        self._loop_closures_detected = value

    @builtins.property
    def pose_uncertainty(self):
        """Message field 'pose_uncertainty'."""
        return self._pose_uncertainty

    @pose_uncertainty.setter
    def pose_uncertainty(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pose_uncertainty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pose_uncertainty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pose_uncertainty = value

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
    def storage_space_used(self):
        """Message field 'storage_space_used'."""
        return self._storage_space_used

    @storage_space_used.setter
    def storage_space_used(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'storage_space_used' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'storage_space_used' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._storage_space_used = value

    @builtins.property
    def last_sensor_update(self):
        """Message field 'last_sensor_update'."""
        return self._last_sensor_update

    @last_sensor_update.setter
    def last_sensor_update(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_sensor_update' field must be a sub message of type 'Time'"
        self._last_sensor_update = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_SendGoal_Request(type):
    """Metaclass of message 'MapArea_SendGoal_Request'."""

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
                'day2.action.MapArea_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__send_goal__request

            from day2.action import MapArea
            if MapArea.Goal.__class__._TYPE_SUPPORT is None:
                MapArea.Goal.__class__.__import_type_support__()

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


class MapArea_SendGoal_Request(metaclass=Metaclass_MapArea_SendGoal_Request):
    """Message class 'MapArea_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'day2/MapArea_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_Goal'),  # noqa: E501
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
        from day2.action._map_area import MapArea_Goal
        self.goal = kwargs.get('goal', MapArea_Goal())

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
            from day2.action._map_area import MapArea_Goal
            assert \
                isinstance(value, MapArea_Goal), \
                "The 'goal' field must be a sub message of type 'MapArea_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_SendGoal_Response(type):
    """Metaclass of message 'MapArea_SendGoal_Response'."""

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
                'day2.action.MapArea_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__send_goal__response

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


class MapArea_SendGoal_Response(metaclass=Metaclass_MapArea_SendGoal_Response):
    """Message class 'MapArea_SendGoal_Response'."""

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


class Metaclass_MapArea_SendGoal_Event(type):
    """Metaclass of message 'MapArea_SendGoal_Event'."""

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
                'day2.action.MapArea_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__send_goal__event

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


class MapArea_SendGoal_Event(metaclass=Metaclass_MapArea_SendGoal_Event):
    """Message class 'MapArea_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/MapArea_SendGoal_Request, 1>',
        'response': 'sequence<day2/MapArea_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_SendGoal_Response'), 1),  # noqa: E501
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
            from day2.action import MapArea_SendGoal_Request
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
                 all(isinstance(v, MapArea_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MapArea_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import MapArea_SendGoal_Response
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
                 all(isinstance(v, MapArea_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MapArea_SendGoal_Response'"
        self._response = value


class Metaclass_MapArea_SendGoal(type):
    """Metaclass of service 'MapArea_SendGoal'."""

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
                'day2.action.MapArea_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__map_area__send_goal

            from day2.action import _map_area
            if _map_area.Metaclass_MapArea_SendGoal_Request._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_SendGoal_Request.__import_type_support__()
            if _map_area.Metaclass_MapArea_SendGoal_Response._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_SendGoal_Response.__import_type_support__()
            if _map_area.Metaclass_MapArea_SendGoal_Event._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_SendGoal_Event.__import_type_support__()


class MapArea_SendGoal(metaclass=Metaclass_MapArea_SendGoal):
    from day2.action._map_area import MapArea_SendGoal_Request as Request
    from day2.action._map_area import MapArea_SendGoal_Response as Response
    from day2.action._map_area import MapArea_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_GetResult_Request(type):
    """Metaclass of message 'MapArea_GetResult_Request'."""

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
                'day2.action.MapArea_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__get_result__request

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


class MapArea_GetResult_Request(metaclass=Metaclass_MapArea_GetResult_Request):
    """Message class 'MapArea_GetResult_Request'."""

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


class Metaclass_MapArea_GetResult_Response(type):
    """Metaclass of message 'MapArea_GetResult_Response'."""

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
                'day2.action.MapArea_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__get_result__response

            from day2.action import MapArea
            if MapArea.Result.__class__._TYPE_SUPPORT is None:
                MapArea.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapArea_GetResult_Response(metaclass=Metaclass_MapArea_GetResult_Response):
    """Message class 'MapArea_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'day2/MapArea_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_Result'),  # noqa: E501
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
        from day2.action._map_area import MapArea_Result
        self.result = kwargs.get('result', MapArea_Result())

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
            from day2.action._map_area import MapArea_Result
            assert \
                isinstance(value, MapArea_Result), \
                "The 'result' field must be a sub message of type 'MapArea_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_GetResult_Event(type):
    """Metaclass of message 'MapArea_GetResult_Event'."""

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
                'day2.action.MapArea_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__get_result__event

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


class MapArea_GetResult_Event(metaclass=Metaclass_MapArea_GetResult_Event):
    """Message class 'MapArea_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/MapArea_GetResult_Request, 1>',
        'response': 'sequence<day2/MapArea_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_GetResult_Response'), 1),  # noqa: E501
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
            from day2.action import MapArea_GetResult_Request
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
                 all(isinstance(v, MapArea_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MapArea_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import MapArea_GetResult_Response
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
                 all(isinstance(v, MapArea_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MapArea_GetResult_Response'"
        self._response = value


class Metaclass_MapArea_GetResult(type):
    """Metaclass of service 'MapArea_GetResult'."""

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
                'day2.action.MapArea_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__map_area__get_result

            from day2.action import _map_area
            if _map_area.Metaclass_MapArea_GetResult_Request._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_GetResult_Request.__import_type_support__()
            if _map_area.Metaclass_MapArea_GetResult_Response._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_GetResult_Response.__import_type_support__()
            if _map_area.Metaclass_MapArea_GetResult_Event._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_GetResult_Event.__import_type_support__()


class MapArea_GetResult(metaclass=Metaclass_MapArea_GetResult):
    from day2.action._map_area import MapArea_GetResult_Request as Request
    from day2.action._map_area import MapArea_GetResult_Response as Response
    from day2.action._map_area import MapArea_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapArea_FeedbackMessage(type):
    """Metaclass of message 'MapArea_FeedbackMessage'."""

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
                'day2.action.MapArea_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__map_area__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__map_area__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__map_area__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__map_area__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__map_area__feedback_message

            from day2.action import MapArea
            if MapArea.Feedback.__class__._TYPE_SUPPORT is None:
                MapArea.Feedback.__class__.__import_type_support__()

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


class MapArea_FeedbackMessage(metaclass=Metaclass_MapArea_FeedbackMessage):
    """Message class 'MapArea_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'day2/MapArea_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'MapArea_Feedback'),  # noqa: E501
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
        from day2.action._map_area import MapArea_Feedback
        self.feedback = kwargs.get('feedback', MapArea_Feedback())

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
            from day2.action._map_area import MapArea_Feedback
            assert \
                isinstance(value, MapArea_Feedback), \
                "The 'feedback' field must be a sub message of type 'MapArea_Feedback'"
        self._feedback = value


class Metaclass_MapArea(type):
    """Metaclass of action 'MapArea'."""

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
                'day2.action.MapArea')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__map_area

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from day2.action import _map_area
            if _map_area.Metaclass_MapArea_SendGoal._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_SendGoal.__import_type_support__()
            if _map_area.Metaclass_MapArea_GetResult._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_GetResult.__import_type_support__()
            if _map_area.Metaclass_MapArea_FeedbackMessage._TYPE_SUPPORT is None:
                _map_area.Metaclass_MapArea_FeedbackMessage.__import_type_support__()


class MapArea(metaclass=Metaclass_MapArea):

    # The goal message defined in the action definition.
    from day2.action._map_area import MapArea_Goal as Goal
    # The result message defined in the action definition.
    from day2.action._map_area import MapArea_Result as Result
    # The feedback message defined in the action definition.
    from day2.action._map_area import MapArea_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from day2.action._map_area import MapArea_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from day2.action._map_area import MapArea_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from day2.action._map_area import MapArea_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
