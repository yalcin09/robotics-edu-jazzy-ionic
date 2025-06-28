# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:srv/RobotCommand.idl
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


class Metaclass_RobotCommand_Request(type):
    """Metaclass of message 'RobotCommand_Request'."""

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
                'day2.srv.RobotCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_command__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class RobotCommand_Request(metaclass=Metaclass_RobotCommand_Request):
    """Message class 'RobotCommand_Request'."""

    __slots__ = [
        '_command_type',
        '_target_position',
        '_target_orientation',
        '_max_velocity',
        '_max_acceleration',
        '_timeout_seconds',
        '_force_execution',
        '_additional_params',
        '_deadline',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'command_type': 'string',
        'target_position': 'geometry_msgs/Point',
        'target_orientation': 'geometry_msgs/Vector3',
        'max_velocity': 'float',
        'max_acceleration': 'float',
        'timeout_seconds': 'float',
        'force_execution': 'boolean',
        'additional_params': 'sequence<string>',
        'deadline': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.command_type = kwargs.get('command_type', str())
        from geometry_msgs.msg import Point
        self.target_position = kwargs.get('target_position', Point())
        from geometry_msgs.msg import Vector3
        self.target_orientation = kwargs.get('target_orientation', Vector3())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.timeout_seconds = kwargs.get('timeout_seconds', float())
        self.force_execution = kwargs.get('force_execution', bool())
        self.additional_params = kwargs.get('additional_params', [])
        from builtin_interfaces.msg import Time
        self.deadline = kwargs.get('deadline', Time())

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
        if self.command_type != other.command_type:
            return False
        if self.target_position != other.target_position:
            return False
        if self.target_orientation != other.target_orientation:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.timeout_seconds != other.timeout_seconds:
            return False
        if self.force_execution != other.force_execution:
            return False
        if self.additional_params != other.additional_params:
            return False
        if self.deadline != other.deadline:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'command_type' field must be of type 'str'"
        self._command_type = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target_position' field must be a sub message of type 'Point'"
        self._target_position = value

    @builtins.property
    def target_orientation(self):
        """Message field 'target_orientation'."""
        return self._target_orientation

    @target_orientation.setter
    def target_orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'target_orientation' field must be a sub message of type 'Vector3'"
        self._target_orientation = value

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
    def force_execution(self):
        """Message field 'force_execution'."""
        return self._force_execution

    @force_execution.setter
    def force_execution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'force_execution' field must be of type 'bool'"
        self._force_execution = value

    @builtins.property
    def additional_params(self):
        """Message field 'additional_params'."""
        return self._additional_params

    @additional_params.setter
    def additional_params(self, value):
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
                "The 'additional_params' field must be a set or sequence and each value of type 'str'"
        self._additional_params = value

    @builtins.property
    def deadline(self):
        """Message field 'deadline'."""
        return self._deadline

    @deadline.setter
    def deadline(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'deadline' field must be a sub message of type 'Time'"
        self._deadline = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotCommand_Response(type):
    """Metaclass of message 'RobotCommand_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_INVALID_COMMAND': 1,
        'ERROR_OUT_OF_BOUNDS': 2,
        'ERROR_ROBOT_BUSY': 3,
        'ERROR_SAFETY_VIOLATION': 4,
        'ERROR_HARDWARE_FAILURE': 5,
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
                'day2.srv.RobotCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_command__response

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
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_INVALID_COMMAND': cls.__constants['ERROR_INVALID_COMMAND'],
            'ERROR_OUT_OF_BOUNDS': cls.__constants['ERROR_OUT_OF_BOUNDS'],
            'ERROR_ROBOT_BUSY': cls.__constants['ERROR_ROBOT_BUSY'],
            'ERROR_SAFETY_VIOLATION': cls.__constants['ERROR_SAFETY_VIOLATION'],
            'ERROR_HARDWARE_FAILURE': cls.__constants['ERROR_HARDWARE_FAILURE'],
            'ERROR_TIMEOUT': cls.__constants['ERROR_TIMEOUT'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_NONE']

    @property
    def ERROR_INVALID_COMMAND(self):
        """Message constant 'ERROR_INVALID_COMMAND'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_INVALID_COMMAND']

    @property
    def ERROR_OUT_OF_BOUNDS(self):
        """Message constant 'ERROR_OUT_OF_BOUNDS'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_OUT_OF_BOUNDS']

    @property
    def ERROR_ROBOT_BUSY(self):
        """Message constant 'ERROR_ROBOT_BUSY'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_ROBOT_BUSY']

    @property
    def ERROR_SAFETY_VIOLATION(self):
        """Message constant 'ERROR_SAFETY_VIOLATION'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_SAFETY_VIOLATION']

    @property
    def ERROR_HARDWARE_FAILURE(self):
        """Message constant 'ERROR_HARDWARE_FAILURE'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_HARDWARE_FAILURE']

    @property
    def ERROR_TIMEOUT(self):
        """Message constant 'ERROR_TIMEOUT'."""
        return Metaclass_RobotCommand_Response.__constants['ERROR_TIMEOUT']


class RobotCommand_Response(metaclass=Metaclass_RobotCommand_Response):
    """
    Message class 'RobotCommand_Response'.

    Constants:
      ERROR_NONE
      ERROR_INVALID_COMMAND
      ERROR_OUT_OF_BOUNDS
      ERROR_ROBOT_BUSY
      ERROR_SAFETY_VIOLATION
      ERROR_HARDWARE_FAILURE
      ERROR_TIMEOUT
    """

    __slots__ = [
        '_success',
        '_message',
        '_command_id',
        '_estimated_duration',
        '_actual_target',
        '_estimated_completion',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'command_id': 'uint32',
        'estimated_duration': 'float',
        'actual_target': 'geometry_msgs/Point',
        'estimated_completion': 'builtin_interfaces/Time',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.command_id = kwargs.get('command_id', int())
        self.estimated_duration = kwargs.get('estimated_duration', float())
        from geometry_msgs.msg import Point
        self.actual_target = kwargs.get('actual_target', Point())
        from builtin_interfaces.msg import Time
        self.estimated_completion = kwargs.get('estimated_completion', Time())
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
        if self.command_id != other.command_id:
            return False
        if self.estimated_duration != other.estimated_duration:
            return False
        if self.actual_target != other.actual_target:
            return False
        if self.estimated_completion != other.estimated_completion:
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
    def command_id(self):
        """Message field 'command_id'."""
        return self._command_id

    @command_id.setter
    def command_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'command_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'command_id' field must be an unsigned integer in [0, 4294967295]"
        self._command_id = value

    @builtins.property
    def estimated_duration(self):
        """Message field 'estimated_duration'."""
        return self._estimated_duration

    @estimated_duration.setter
    def estimated_duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'estimated_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_duration = value

    @builtins.property
    def actual_target(self):
        """Message field 'actual_target'."""
        return self._actual_target

    @actual_target.setter
    def actual_target(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'actual_target' field must be a sub message of type 'Point'"
        self._actual_target = value

    @builtins.property
    def estimated_completion(self):
        """Message field 'estimated_completion'."""
        return self._estimated_completion

    @estimated_completion.setter
    def estimated_completion(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'estimated_completion' field must be a sub message of type 'Time'"
        self._estimated_completion = value

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


class Metaclass_RobotCommand_Event(type):
    """Metaclass of message 'RobotCommand_Event'."""

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
                'day2.srv.RobotCommand_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_command__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_command__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_command__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_command__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_command__event

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


class RobotCommand_Event(metaclass=Metaclass_RobotCommand_Event):
    """Message class 'RobotCommand_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/RobotCommand_Request, 1>',
        'response': 'sequence<day2/RobotCommand_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'RobotCommand_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'RobotCommand_Response'), 1),  # noqa: E501
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
            from day2.srv import RobotCommand_Request
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
                 all(isinstance(v, RobotCommand_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'RobotCommand_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.srv import RobotCommand_Response
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
                 all(isinstance(v, RobotCommand_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'RobotCommand_Response'"
        self._response = value


class Metaclass_RobotCommand(type):
    """Metaclass of service 'RobotCommand'."""

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
                'day2.srv.RobotCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_command

            from day2.srv import _robot_command
            if _robot_command.Metaclass_RobotCommand_Request._TYPE_SUPPORT is None:
                _robot_command.Metaclass_RobotCommand_Request.__import_type_support__()
            if _robot_command.Metaclass_RobotCommand_Response._TYPE_SUPPORT is None:
                _robot_command.Metaclass_RobotCommand_Response.__import_type_support__()
            if _robot_command.Metaclass_RobotCommand_Event._TYPE_SUPPORT is None:
                _robot_command.Metaclass_RobotCommand_Event.__import_type_support__()


class RobotCommand(metaclass=Metaclass_RobotCommand):
    from day2.srv._robot_command import RobotCommand_Request as Request
    from day2.srv._robot_command import RobotCommand_Response as Response
    from day2.srv._robot_command import RobotCommand_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
