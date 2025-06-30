# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:action/PickAndPlace.idl
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


class Metaclass_PickAndPlace_Goal(type):
    """Metaclass of message 'PickAndPlace_Goal'."""

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
                'day2.action.PickAndPlace_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__goal

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


class PickAndPlace_Goal(metaclass=Metaclass_PickAndPlace_Goal):
    """Message class 'PickAndPlace_Goal'."""

    __slots__ = [
        '_object_id',
        '_pickup_location',
        '_place_location',
        '_object_type',
        '_object_weight',
        '_object_dimensions',
        '_grasp_type',
        '_grasp_force',
        '_approach_distance',
        '_lift_height',
        '_max_velocity',
        '_max_acceleration',
        '_use_careful_mode',
        '_timeout_seconds',
        '_collision_threshold',
        '_enable_force_feedback',
        '_forbidden_zones',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'object_id': 'string',
        'pickup_location': 'geometry_msgs/Point',
        'place_location': 'geometry_msgs/Point',
        'object_type': 'string',
        'object_weight': 'float',
        'object_dimensions': 'geometry_msgs/Vector3',
        'grasp_type': 'string',
        'grasp_force': 'float',
        'approach_distance': 'float',
        'lift_height': 'float',
        'max_velocity': 'float',
        'max_acceleration': 'float',
        'use_careful_mode': 'boolean',
        'timeout_seconds': 'float',
        'collision_threshold': 'float',
        'enable_force_feedback': 'boolean',
        'forbidden_zones': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.object_id = kwargs.get('object_id', str())
        from geometry_msgs.msg import Point
        self.pickup_location = kwargs.get('pickup_location', Point())
        from geometry_msgs.msg import Point
        self.place_location = kwargs.get('place_location', Point())
        self.object_type = kwargs.get('object_type', str())
        self.object_weight = kwargs.get('object_weight', float())
        from geometry_msgs.msg import Vector3
        self.object_dimensions = kwargs.get('object_dimensions', Vector3())
        self.grasp_type = kwargs.get('grasp_type', str())
        self.grasp_force = kwargs.get('grasp_force', float())
        self.approach_distance = kwargs.get('approach_distance', float())
        self.lift_height = kwargs.get('lift_height', float())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.use_careful_mode = kwargs.get('use_careful_mode', bool())
        self.timeout_seconds = kwargs.get('timeout_seconds', float())
        self.collision_threshold = kwargs.get('collision_threshold', float())
        self.enable_force_feedback = kwargs.get('enable_force_feedback', bool())
        self.forbidden_zones = kwargs.get('forbidden_zones', [])

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
        if self.object_id != other.object_id:
            return False
        if self.pickup_location != other.pickup_location:
            return False
        if self.place_location != other.place_location:
            return False
        if self.object_type != other.object_type:
            return False
        if self.object_weight != other.object_weight:
            return False
        if self.object_dimensions != other.object_dimensions:
            return False
        if self.grasp_type != other.grasp_type:
            return False
        if self.grasp_force != other.grasp_force:
            return False
        if self.approach_distance != other.approach_distance:
            return False
        if self.lift_height != other.lift_height:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.use_careful_mode != other.use_careful_mode:
            return False
        if self.timeout_seconds != other.timeout_seconds:
            return False
        if self.collision_threshold != other.collision_threshold:
            return False
        if self.enable_force_feedback != other.enable_force_feedback:
            return False
        if self.forbidden_zones != other.forbidden_zones:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def pickup_location(self):
        """Message field 'pickup_location'."""
        return self._pickup_location

    @pickup_location.setter
    def pickup_location(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'pickup_location' field must be a sub message of type 'Point'"
        self._pickup_location = value

    @builtins.property
    def place_location(self):
        """Message field 'place_location'."""
        return self._place_location

    @place_location.setter
    def place_location(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'place_location' field must be a sub message of type 'Point'"
        self._place_location = value

    @builtins.property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_type' field must be of type 'str'"
        self._object_type = value

    @builtins.property
    def object_weight(self):
        """Message field 'object_weight'."""
        return self._object_weight

    @object_weight.setter
    def object_weight(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'object_weight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'object_weight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._object_weight = value

    @builtins.property
    def object_dimensions(self):
        """Message field 'object_dimensions'."""
        return self._object_dimensions

    @object_dimensions.setter
    def object_dimensions(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'object_dimensions' field must be a sub message of type 'Vector3'"
        self._object_dimensions = value

    @builtins.property
    def grasp_type(self):
        """Message field 'grasp_type'."""
        return self._grasp_type

    @grasp_type.setter
    def grasp_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'grasp_type' field must be of type 'str'"
        self._grasp_type = value

    @builtins.property
    def grasp_force(self):
        """Message field 'grasp_force'."""
        return self._grasp_force

    @grasp_force.setter
    def grasp_force(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'grasp_force' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grasp_force' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grasp_force = value

    @builtins.property
    def approach_distance(self):
        """Message field 'approach_distance'."""
        return self._approach_distance

    @approach_distance.setter
    def approach_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'approach_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'approach_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._approach_distance = value

    @builtins.property
    def lift_height(self):
        """Message field 'lift_height'."""
        return self._lift_height

    @lift_height.setter
    def lift_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lift_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lift_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lift_height = value

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
    def use_careful_mode(self):
        """Message field 'use_careful_mode'."""
        return self._use_careful_mode

    @use_careful_mode.setter
    def use_careful_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_careful_mode' field must be of type 'bool'"
        self._use_careful_mode = value

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
    def collision_threshold(self):
        """Message field 'collision_threshold'."""
        return self._collision_threshold

    @collision_threshold.setter
    def collision_threshold(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'collision_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'collision_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._collision_threshold = value

    @builtins.property
    def enable_force_feedback(self):
        """Message field 'enable_force_feedback'."""
        return self._enable_force_feedback

    @enable_force_feedback.setter
    def enable_force_feedback(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_force_feedback' field must be of type 'bool'"
        self._enable_force_feedback = value

    @builtins.property
    def forbidden_zones(self):
        """Message field 'forbidden_zones'."""
        return self._forbidden_zones

    @forbidden_zones.setter
    def forbidden_zones(self, value):
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
                "The 'forbidden_zones' field must be a set or sequence and each value of type 'str'"
        self._forbidden_zones = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_Result(type):
    """Metaclass of message 'PickAndPlace_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_OBJECT_NOT_FOUND': 1,
        'ERROR_GRASP_FAILED': 2,
        'ERROR_OBJECT_DROPPED': 3,
        'ERROR_COLLISION_DETECTED': 4,
        'ERROR_PLACE_LOCATION_BLOCKED': 5,
        'ERROR_FORCE_LIMIT_EXCEEDED': 6,
        'ERROR_TIMEOUT': 7,
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
                'day2.action.PickAndPlace_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__result

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
            'ERROR_OBJECT_NOT_FOUND': cls.__constants['ERROR_OBJECT_NOT_FOUND'],
            'ERROR_GRASP_FAILED': cls.__constants['ERROR_GRASP_FAILED'],
            'ERROR_OBJECT_DROPPED': cls.__constants['ERROR_OBJECT_DROPPED'],
            'ERROR_COLLISION_DETECTED': cls.__constants['ERROR_COLLISION_DETECTED'],
            'ERROR_PLACE_LOCATION_BLOCKED': cls.__constants['ERROR_PLACE_LOCATION_BLOCKED'],
            'ERROR_FORCE_LIMIT_EXCEEDED': cls.__constants['ERROR_FORCE_LIMIT_EXCEEDED'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_NONE']

    @property
    def ERROR_OBJECT_NOT_FOUND(self):
        """Message constant 'ERROR_OBJECT_NOT_FOUND'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_OBJECT_NOT_FOUND']

    @property
    def ERROR_GRASP_FAILED(self):
        """Message constant 'ERROR_GRASP_FAILED'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_GRASP_FAILED']

    @property
    def ERROR_OBJECT_DROPPED(self):
        """Message constant 'ERROR_OBJECT_DROPPED'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_OBJECT_DROPPED']

    @property
    def ERROR_COLLISION_DETECTED(self):
        """Message constant 'ERROR_COLLISION_DETECTED'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_COLLISION_DETECTED']

    @property
    def ERROR_PLACE_LOCATION_BLOCKED(self):
        """Message constant 'ERROR_PLACE_LOCATION_BLOCKED'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_PLACE_LOCATION_BLOCKED']

    @property
    def ERROR_FORCE_LIMIT_EXCEEDED(self):
        """Message constant 'ERROR_FORCE_LIMIT_EXCEEDED'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_FORCE_LIMIT_EXCEEDED']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_PickAndPlace_Result.__constants['ERROR_TIMEOUT']


class PickAndPlace_Result(metaclass=Metaclass_PickAndPlace_Result):
    """
    Message class 'PickAndPlace_Result'.

    Constants:
      ERROR_NONE
      ERROR_OBJECT_NOT_FOUND
      ERROR_GRASP_FAILED
      ERROR_OBJECT_DROPPED
      ERROR_COLLISION_DETECTED
      ERROR_PLACE_LOCATION_BLOCKED
      ERROR_FORCE_LIMIT_EXCEEDED
      ERROR_TIMEOUT
    """

    __slots__ = [
        '_success',
        '_result_message',
        '_final_object_location',
        '_total_task_time',
        '_pickup_successful',
        '_transport_successful',
        '_place_successful',
        '_pickup_duration',
        '_transport_duration',
        '_place_duration',
        '_accuracy_score',
        '_max_force_applied',
        '_grasp_quality',
        '_error_code',
        '_error_details',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result_message': 'string',
        'final_object_location': 'geometry_msgs/Point',
        'total_task_time': 'float',
        'pickup_successful': 'boolean',
        'transport_successful': 'boolean',
        'place_successful': 'boolean',
        'pickup_duration': 'float',
        'transport_duration': 'float',
        'place_duration': 'float',
        'accuracy_score': 'float',
        'max_force_applied': 'float',
        'grasp_quality': 'float',
        'error_code': 'uint32',
        'error_details': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.result_message = kwargs.get('result_message', str())
        from geometry_msgs.msg import Point
        self.final_object_location = kwargs.get('final_object_location', Point())
        self.total_task_time = kwargs.get('total_task_time', float())
        self.pickup_successful = kwargs.get('pickup_successful', bool())
        self.transport_successful = kwargs.get('transport_successful', bool())
        self.place_successful = kwargs.get('place_successful', bool())
        self.pickup_duration = kwargs.get('pickup_duration', float())
        self.transport_duration = kwargs.get('transport_duration', float())
        self.place_duration = kwargs.get('place_duration', float())
        self.accuracy_score = kwargs.get('accuracy_score', float())
        self.max_force_applied = kwargs.get('max_force_applied', float())
        self.grasp_quality = kwargs.get('grasp_quality', float())
        self.error_code = kwargs.get('error_code', int())
        self.error_details = kwargs.get('error_details', str())

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
        if self.final_object_location != other.final_object_location:
            return False
        if self.total_task_time != other.total_task_time:
            return False
        if self.pickup_successful != other.pickup_successful:
            return False
        if self.transport_successful != other.transport_successful:
            return False
        if self.place_successful != other.place_successful:
            return False
        if self.pickup_duration != other.pickup_duration:
            return False
        if self.transport_duration != other.transport_duration:
            return False
        if self.place_duration != other.place_duration:
            return False
        if self.accuracy_score != other.accuracy_score:
            return False
        if self.max_force_applied != other.max_force_applied:
            return False
        if self.grasp_quality != other.grasp_quality:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_details != other.error_details:
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
    def final_object_location(self):
        """Message field 'final_object_location'."""
        return self._final_object_location

    @final_object_location.setter
    def final_object_location(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'final_object_location' field must be a sub message of type 'Point'"
        self._final_object_location = value

    @builtins.property
    def total_task_time(self):
        """Message field 'total_task_time'."""
        return self._total_task_time

    @total_task_time.setter
    def total_task_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_task_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_task_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_task_time = value

    @builtins.property
    def pickup_successful(self):
        """Message field 'pickup_successful'."""
        return self._pickup_successful

    @pickup_successful.setter
    def pickup_successful(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'pickup_successful' field must be of type 'bool'"
        self._pickup_successful = value

    @builtins.property
    def transport_successful(self):
        """Message field 'transport_successful'."""
        return self._transport_successful

    @transport_successful.setter
    def transport_successful(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'transport_successful' field must be of type 'bool'"
        self._transport_successful = value

    @builtins.property
    def place_successful(self):
        """Message field 'place_successful'."""
        return self._place_successful

    @place_successful.setter
    def place_successful(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'place_successful' field must be of type 'bool'"
        self._place_successful = value

    @builtins.property
    def pickup_duration(self):
        """Message field 'pickup_duration'."""
        return self._pickup_duration

    @pickup_duration.setter
    def pickup_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pickup_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pickup_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pickup_duration = value

    @builtins.property
    def transport_duration(self):
        """Message field 'transport_duration'."""
        return self._transport_duration

    @transport_duration.setter
    def transport_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'transport_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'transport_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._transport_duration = value

    @builtins.property
    def place_duration(self):
        """Message field 'place_duration'."""
        return self._place_duration

    @place_duration.setter
    def place_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'place_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'place_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._place_duration = value

    @builtins.property
    def accuracy_score(self):
        """Message field 'accuracy_score'."""
        return self._accuracy_score

    @accuracy_score.setter
    def accuracy_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accuracy_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accuracy_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accuracy_score = value

    @builtins.property
    def max_force_applied(self):
        """Message field 'max_force_applied'."""
        return self._max_force_applied

    @max_force_applied.setter
    def max_force_applied(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_force_applied' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_force_applied' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_force_applied = value

    @builtins.property
    def grasp_quality(self):
        """Message field 'grasp_quality'."""
        return self._grasp_quality

    @grasp_quality.setter
    def grasp_quality(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'grasp_quality' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grasp_quality' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grasp_quality = value

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

    @builtins.property
    def error_details(self):
        """Message field 'error_details'."""
        return self._error_details

    @error_details.setter
    def error_details(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_details' field must be of type 'str'"
        self._error_details = value


# Import statements for member types

# Member 'force_torque_readings'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_Feedback(type):
    """Metaclass of message 'PickAndPlace_Feedback'."""

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
                'day2.action.PickAndPlace_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__feedback

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PickAndPlace_Feedback(metaclass=Metaclass_PickAndPlace_Feedback):
    """Message class 'PickAndPlace_Feedback'."""

    __slots__ = [
        '_current_phase',
        '_completion_percentage',
        '_gripper_position',
        '_object_position',
        '_object_detected',
        '_object_in_grasp',
        '_current_grasp_force',
        '_transport_progress',
        '_force_torque_readings',
        '_collision_warning',
        '_estimated_time_remaining',
        '_current_velocity',
        '_current_behavior',
        '_is_moving',
        '_grasp_stability',
        '_path_deviation',
        '_phase_start_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'current_phase': 'string',
        'completion_percentage': 'float',
        'gripper_position': 'geometry_msgs/Point',
        'object_position': 'geometry_msgs/Point',
        'object_detected': 'boolean',
        'object_in_grasp': 'boolean',
        'current_grasp_force': 'float',
        'transport_progress': 'float',
        'force_torque_readings': 'sequence<float>',
        'collision_warning': 'boolean',
        'estimated_time_remaining': 'float',
        'current_velocity': 'geometry_msgs/Twist',
        'current_behavior': 'string',
        'is_moving': 'boolean',
        'grasp_stability': 'float',
        'path_deviation': 'float',
        'phase_start_time': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.current_phase = kwargs.get('current_phase', str())
        self.completion_percentage = kwargs.get('completion_percentage', float())
        from geometry_msgs.msg import Point
        self.gripper_position = kwargs.get('gripper_position', Point())
        from geometry_msgs.msg import Point
        self.object_position = kwargs.get('object_position', Point())
        self.object_detected = kwargs.get('object_detected', bool())
        self.object_in_grasp = kwargs.get('object_in_grasp', bool())
        self.current_grasp_force = kwargs.get('current_grasp_force', float())
        self.transport_progress = kwargs.get('transport_progress', float())
        self.force_torque_readings = array.array('f', kwargs.get('force_torque_readings', []))
        self.collision_warning = kwargs.get('collision_warning', bool())
        self.estimated_time_remaining = kwargs.get('estimated_time_remaining', float())
        from geometry_msgs.msg import Twist
        self.current_velocity = kwargs.get('current_velocity', Twist())
        self.current_behavior = kwargs.get('current_behavior', str())
        self.is_moving = kwargs.get('is_moving', bool())
        self.grasp_stability = kwargs.get('grasp_stability', float())
        self.path_deviation = kwargs.get('path_deviation', float())
        from builtin_interfaces.msg import Time
        self.phase_start_time = kwargs.get('phase_start_time', Time())

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
        if self.completion_percentage != other.completion_percentage:
            return False
        if self.gripper_position != other.gripper_position:
            return False
        if self.object_position != other.object_position:
            return False
        if self.object_detected != other.object_detected:
            return False
        if self.object_in_grasp != other.object_in_grasp:
            return False
        if self.current_grasp_force != other.current_grasp_force:
            return False
        if self.transport_progress != other.transport_progress:
            return False
        if self.force_torque_readings != other.force_torque_readings:
            return False
        if self.collision_warning != other.collision_warning:
            return False
        if self.estimated_time_remaining != other.estimated_time_remaining:
            return False
        if self.current_velocity != other.current_velocity:
            return False
        if self.current_behavior != other.current_behavior:
            return False
        if self.is_moving != other.is_moving:
            return False
        if self.grasp_stability != other.grasp_stability:
            return False
        if self.path_deviation != other.path_deviation:
            return False
        if self.phase_start_time != other.phase_start_time:
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
    def gripper_position(self):
        """Message field 'gripper_position'."""
        return self._gripper_position

    @gripper_position.setter
    def gripper_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'gripper_position' field must be a sub message of type 'Point'"
        self._gripper_position = value

    @builtins.property
    def object_position(self):
        """Message field 'object_position'."""
        return self._object_position

    @object_position.setter
    def object_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'object_position' field must be a sub message of type 'Point'"
        self._object_position = value

    @builtins.property
    def object_detected(self):
        """Message field 'object_detected'."""
        return self._object_detected

    @object_detected.setter
    def object_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'object_detected' field must be of type 'bool'"
        self._object_detected = value

    @builtins.property
    def object_in_grasp(self):
        """Message field 'object_in_grasp'."""
        return self._object_in_grasp

    @object_in_grasp.setter
    def object_in_grasp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'object_in_grasp' field must be of type 'bool'"
        self._object_in_grasp = value

    @builtins.property
    def current_grasp_force(self):
        """Message field 'current_grasp_force'."""
        return self._current_grasp_force

    @current_grasp_force.setter
    def current_grasp_force(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current_grasp_force' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_grasp_force' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_grasp_force = value

    @builtins.property
    def transport_progress(self):
        """Message field 'transport_progress'."""
        return self._transport_progress

    @transport_progress.setter
    def transport_progress(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'transport_progress' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'transport_progress' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._transport_progress = value

    @builtins.property
    def force_torque_readings(self):
        """Message field 'force_torque_readings'."""
        return self._force_torque_readings

    @force_torque_readings.setter
    def force_torque_readings(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'force_torque_readings' array.array() must have the type code of 'f'"
                self._force_torque_readings = value
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
                "The 'force_torque_readings' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._force_torque_readings = array.array('f', value)

    @builtins.property
    def collision_warning(self):
        """Message field 'collision_warning'."""
        return self._collision_warning

    @collision_warning.setter
    def collision_warning(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'collision_warning' field must be of type 'bool'"
        self._collision_warning = value

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
    def current_velocity(self):
        """Message field 'current_velocity'."""
        return self._current_velocity

    @current_velocity.setter
    def current_velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'current_velocity' field must be a sub message of type 'Twist'"
        self._current_velocity = value

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
    def is_moving(self):
        """Message field 'is_moving'."""
        return self._is_moving

    @is_moving.setter
    def is_moving(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_moving' field must be of type 'bool'"
        self._is_moving = value

    @builtins.property
    def grasp_stability(self):
        """Message field 'grasp_stability'."""
        return self._grasp_stability

    @grasp_stability.setter
    def grasp_stability(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'grasp_stability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grasp_stability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grasp_stability = value

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
    def phase_start_time(self):
        """Message field 'phase_start_time'."""
        return self._phase_start_time

    @phase_start_time.setter
    def phase_start_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'phase_start_time' field must be a sub message of type 'Time'"
        self._phase_start_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_SendGoal_Request(type):
    """Metaclass of message 'PickAndPlace_SendGoal_Request'."""

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
                'day2.action.PickAndPlace_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__send_goal__request

            from day2.action import PickAndPlace
            if PickAndPlace.Goal.__class__._TYPE_SUPPORT is None:
                PickAndPlace.Goal.__class__.__import_type_support__()

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


class PickAndPlace_SendGoal_Request(metaclass=Metaclass_PickAndPlace_SendGoal_Request):
    """Message class 'PickAndPlace_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'day2/PickAndPlace_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_Goal'),  # noqa: E501
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
        from day2.action._pick_and_place import PickAndPlace_Goal
        self.goal = kwargs.get('goal', PickAndPlace_Goal())

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
            from day2.action._pick_and_place import PickAndPlace_Goal
            assert \
                isinstance(value, PickAndPlace_Goal), \
                "The 'goal' field must be a sub message of type 'PickAndPlace_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_SendGoal_Response(type):
    """Metaclass of message 'PickAndPlace_SendGoal_Response'."""

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
                'day2.action.PickAndPlace_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__send_goal__response

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


class PickAndPlace_SendGoal_Response(metaclass=Metaclass_PickAndPlace_SendGoal_Response):
    """Message class 'PickAndPlace_SendGoal_Response'."""

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


class Metaclass_PickAndPlace_SendGoal_Event(type):
    """Metaclass of message 'PickAndPlace_SendGoal_Event'."""

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
                'day2.action.PickAndPlace_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__send_goal__event

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


class PickAndPlace_SendGoal_Event(metaclass=Metaclass_PickAndPlace_SendGoal_Event):
    """Message class 'PickAndPlace_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/PickAndPlace_SendGoal_Request, 1>',
        'response': 'sequence<day2/PickAndPlace_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_SendGoal_Response'), 1),  # noqa: E501
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
            from day2.action import PickAndPlace_SendGoal_Request
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
                 all(isinstance(v, PickAndPlace_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'PickAndPlace_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import PickAndPlace_SendGoal_Response
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
                 all(isinstance(v, PickAndPlace_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'PickAndPlace_SendGoal_Response'"
        self._response = value


class Metaclass_PickAndPlace_SendGoal(type):
    """Metaclass of service 'PickAndPlace_SendGoal'."""

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
                'day2.action.PickAndPlace_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pick_and_place__send_goal

            from day2.action import _pick_and_place
            if _pick_and_place.Metaclass_PickAndPlace_SendGoal_Request._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_SendGoal_Request.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_SendGoal_Response._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_SendGoal_Response.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_SendGoal_Event._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_SendGoal_Event.__import_type_support__()


class PickAndPlace_SendGoal(metaclass=Metaclass_PickAndPlace_SendGoal):
    from day2.action._pick_and_place import PickAndPlace_SendGoal_Request as Request
    from day2.action._pick_and_place import PickAndPlace_SendGoal_Response as Response
    from day2.action._pick_and_place import PickAndPlace_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_GetResult_Request(type):
    """Metaclass of message 'PickAndPlace_GetResult_Request'."""

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
                'day2.action.PickAndPlace_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__get_result__request

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


class PickAndPlace_GetResult_Request(metaclass=Metaclass_PickAndPlace_GetResult_Request):
    """Message class 'PickAndPlace_GetResult_Request'."""

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


class Metaclass_PickAndPlace_GetResult_Response(type):
    """Metaclass of message 'PickAndPlace_GetResult_Response'."""

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
                'day2.action.PickAndPlace_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__get_result__response

            from day2.action import PickAndPlace
            if PickAndPlace.Result.__class__._TYPE_SUPPORT is None:
                PickAndPlace.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PickAndPlace_GetResult_Response(metaclass=Metaclass_PickAndPlace_GetResult_Response):
    """Message class 'PickAndPlace_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'day2/PickAndPlace_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_Result'),  # noqa: E501
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
        from day2.action._pick_and_place import PickAndPlace_Result
        self.result = kwargs.get('result', PickAndPlace_Result())

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
            from day2.action._pick_and_place import PickAndPlace_Result
            assert \
                isinstance(value, PickAndPlace_Result), \
                "The 'result' field must be a sub message of type 'PickAndPlace_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_GetResult_Event(type):
    """Metaclass of message 'PickAndPlace_GetResult_Event'."""

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
                'day2.action.PickAndPlace_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__get_result__event

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


class PickAndPlace_GetResult_Event(metaclass=Metaclass_PickAndPlace_GetResult_Event):
    """Message class 'PickAndPlace_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/PickAndPlace_GetResult_Request, 1>',
        'response': 'sequence<day2/PickAndPlace_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_GetResult_Response'), 1),  # noqa: E501
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
            from day2.action import PickAndPlace_GetResult_Request
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
                 all(isinstance(v, PickAndPlace_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'PickAndPlace_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.action import PickAndPlace_GetResult_Response
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
                 all(isinstance(v, PickAndPlace_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'PickAndPlace_GetResult_Response'"
        self._response = value


class Metaclass_PickAndPlace_GetResult(type):
    """Metaclass of service 'PickAndPlace_GetResult'."""

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
                'day2.action.PickAndPlace_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pick_and_place__get_result

            from day2.action import _pick_and_place
            if _pick_and_place.Metaclass_PickAndPlace_GetResult_Request._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_GetResult_Request.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_GetResult_Response._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_GetResult_Response.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_GetResult_Event._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_GetResult_Event.__import_type_support__()


class PickAndPlace_GetResult(metaclass=Metaclass_PickAndPlace_GetResult):
    from day2.action._pick_and_place import PickAndPlace_GetResult_Request as Request
    from day2.action._pick_and_place import PickAndPlace_GetResult_Response as Response
    from day2.action._pick_and_place import PickAndPlace_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PickAndPlace_FeedbackMessage(type):
    """Metaclass of message 'PickAndPlace_FeedbackMessage'."""

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
                'day2.action.PickAndPlace_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pick_and_place__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pick_and_place__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pick_and_place__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__pick_and_place__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pick_and_place__feedback_message

            from day2.action import PickAndPlace
            if PickAndPlace.Feedback.__class__._TYPE_SUPPORT is None:
                PickAndPlace.Feedback.__class__.__import_type_support__()

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


class PickAndPlace_FeedbackMessage(metaclass=Metaclass_PickAndPlace_FeedbackMessage):
    """Message class 'PickAndPlace_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'day2/PickAndPlace_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'action'], 'PickAndPlace_Feedback'),  # noqa: E501
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
        from day2.action._pick_and_place import PickAndPlace_Feedback
        self.feedback = kwargs.get('feedback', PickAndPlace_Feedback())

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
            from day2.action._pick_and_place import PickAndPlace_Feedback
            assert \
                isinstance(value, PickAndPlace_Feedback), \
                "The 'feedback' field must be a sub message of type 'PickAndPlace_Feedback'"
        self._feedback = value


class Metaclass_PickAndPlace(type):
    """Metaclass of action 'PickAndPlace'."""

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
                'day2.action.PickAndPlace')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__pick_and_place

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from day2.action import _pick_and_place
            if _pick_and_place.Metaclass_PickAndPlace_SendGoal._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_SendGoal.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_GetResult._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_GetResult.__import_type_support__()
            if _pick_and_place.Metaclass_PickAndPlace_FeedbackMessage._TYPE_SUPPORT is None:
                _pick_and_place.Metaclass_PickAndPlace_FeedbackMessage.__import_type_support__()


class PickAndPlace(metaclass=Metaclass_PickAndPlace):

    # The goal message defined in the action definition.
    from day2.action._pick_and_place import PickAndPlace_Goal as Goal
    # The result message defined in the action definition.
    from day2.action._pick_and_place import PickAndPlace_Result as Result
    # The feedback message defined in the action definition.
    from day2.action._pick_and_place import PickAndPlace_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from day2.action._pick_and_place import PickAndPlace_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from day2.action._pick_and_place import PickAndPlace_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from day2.action._pick_and_place import PickAndPlace_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
