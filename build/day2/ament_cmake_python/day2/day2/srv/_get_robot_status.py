# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:srv/GetRobotStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRobotStatus_Request(type):
    """Metaclass of message 'GetRobotStatus_Request'."""

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
                'day2.srv.GetRobotStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotStatus_Request(metaclass=Metaclass_GetRobotStatus_Request):
    """Message class 'GetRobotStatus_Request'."""

    __slots__ = [
        '_robot_id',
        '_robot_name',
        '_include_sensors',
        '_include_diagnostics',
        '_include_history',
        '_requested_fields',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint32',
        'robot_name': 'string',
        'include_sensors': 'boolean',
        'include_diagnostics': 'boolean',
        'include_history': 'boolean',
        'requested_fields': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.robot_id = kwargs.get('robot_id', int())
        self.robot_name = kwargs.get('robot_name', str())
        self.include_sensors = kwargs.get('include_sensors', bool())
        self.include_diagnostics = kwargs.get('include_diagnostics', bool())
        self.include_history = kwargs.get('include_history', bool())
        self.requested_fields = kwargs.get('requested_fields', [])

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
        if self.robot_id != other.robot_id:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.include_sensors != other.include_sensors:
            return False
        if self.include_diagnostics != other.include_diagnostics:
            return False
        if self.include_history != other.include_history:
            return False
        if self.requested_fields != other.requested_fields:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 4294967296, \
                "The 'robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot_id = value

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
    def include_sensors(self):
        """Message field 'include_sensors'."""
        return self._include_sensors

    @include_sensors.setter
    def include_sensors(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'include_sensors' field must be of type 'bool'"
        self._include_sensors = value

    @builtins.property
    def include_diagnostics(self):
        """Message field 'include_diagnostics'."""
        return self._include_diagnostics

    @include_diagnostics.setter
    def include_diagnostics(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'include_diagnostics' field must be of type 'bool'"
        self._include_diagnostics = value

    @builtins.property
    def include_history(self):
        """Message field 'include_history'."""
        return self._include_history

    @include_history.setter
    def include_history(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'include_history' field must be of type 'bool'"
        self._include_history = value

    @builtins.property
    def requested_fields(self):
        """Message field 'requested_fields'."""
        return self._requested_fields

    @requested_fields.setter
    def requested_fields(self, value):
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
                "The 'requested_fields' field must be a set or sequence and each value of type 'str'"
        self._requested_fields = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRobotStatus_Response(type):
    """Metaclass of message 'GetRobotStatus_Response'."""

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
                'day2.srv.GetRobotStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_status__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from day2.msg import RobotStatus
            if RobotStatus.__class__._TYPE_SUPPORT is None:
                RobotStatus.__class__.__import_type_support__()

            from day2.msg import SensorData
            if SensorData.__class__._TYPE_SUPPORT is None:
                SensorData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotStatus_Response(metaclass=Metaclass_GetRobotStatus_Response):
    """Message class 'GetRobotStatus_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_current_status',
        '_sensor_data',
        '_diagnostic_messages',
        '_status_history',
        '_uptime_hours',
        '_total_commands_executed',
        '_total_distance_traveled',
        '_error_count_today',
        '_average_response_time_ms',
        '_cpu_usage_percent',
        '_memory_usage_percent',
        '_network_latency_ms',
        '_query_timestamp',
        '_last_update_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'current_status': 'day2/RobotStatus',
        'sensor_data': 'sequence<day2/SensorData>',
        'diagnostic_messages': 'sequence<string>',
        'status_history': 'sequence<day2/RobotStatus>',
        'uptime_hours': 'float',
        'total_commands_executed': 'uint32',
        'total_distance_traveled': 'float',
        'error_count_today': 'uint32',
        'average_response_time_ms': 'float',
        'cpu_usage_percent': 'float',
        'memory_usage_percent': 'float',
        'network_latency_ms': 'float',
        'query_timestamp': 'builtin_interfaces/Time',
        'last_update_time': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['day2', 'msg'], 'RobotStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'msg'], 'SensorData')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'msg'], 'RobotStatus')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        from day2.msg import RobotStatus
        self.current_status = kwargs.get('current_status', RobotStatus())
        self.sensor_data = kwargs.get('sensor_data', [])
        self.diagnostic_messages = kwargs.get('diagnostic_messages', [])
        self.status_history = kwargs.get('status_history', [])
        self.uptime_hours = kwargs.get('uptime_hours', float())
        self.total_commands_executed = kwargs.get('total_commands_executed', int())
        self.total_distance_traveled = kwargs.get('total_distance_traveled', float())
        self.error_count_today = kwargs.get('error_count_today', int())
        self.average_response_time_ms = kwargs.get('average_response_time_ms', float())
        self.cpu_usage_percent = kwargs.get('cpu_usage_percent', float())
        self.memory_usage_percent = kwargs.get('memory_usage_percent', float())
        self.network_latency_ms = kwargs.get('network_latency_ms', float())
        from builtin_interfaces.msg import Time
        self.query_timestamp = kwargs.get('query_timestamp', Time())
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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.current_status != other.current_status:
            return False
        if self.sensor_data != other.sensor_data:
            return False
        if self.diagnostic_messages != other.diagnostic_messages:
            return False
        if self.status_history != other.status_history:
            return False
        if self.uptime_hours != other.uptime_hours:
            return False
        if self.total_commands_executed != other.total_commands_executed:
            return False
        if self.total_distance_traveled != other.total_distance_traveled:
            return False
        if self.error_count_today != other.error_count_today:
            return False
        if self.average_response_time_ms != other.average_response_time_ms:
            return False
        if self.cpu_usage_percent != other.cpu_usage_percent:
            return False
        if self.memory_usage_percent != other.memory_usage_percent:
            return False
        if self.network_latency_ms != other.network_latency_ms:
            return False
        if self.query_timestamp != other.query_timestamp:
            return False
        if self.last_update_time != other.last_update_time:
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
    def current_status(self):
        """Message field 'current_status'."""
        return self._current_status

    @current_status.setter
    def current_status(self, value):
        if self._check_fields:
            from day2.msg import RobotStatus
            assert \
                isinstance(value, RobotStatus), \
                "The 'current_status' field must be a sub message of type 'RobotStatus'"
        self._current_status = value

    @builtins.property
    def sensor_data(self):
        """Message field 'sensor_data'."""
        return self._sensor_data

    @sensor_data.setter
    def sensor_data(self, value):
        if self._check_fields:
            from day2.msg import SensorData
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
                 all(isinstance(v, SensorData) for v in value) and
                 True), \
                "The 'sensor_data' field must be a set or sequence and each value of type 'SensorData'"
        self._sensor_data = value

    @builtins.property
    def diagnostic_messages(self):
        """Message field 'diagnostic_messages'."""
        return self._diagnostic_messages

    @diagnostic_messages.setter
    def diagnostic_messages(self, value):
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
                "The 'diagnostic_messages' field must be a set or sequence and each value of type 'str'"
        self._diagnostic_messages = value

    @builtins.property
    def status_history(self):
        """Message field 'status_history'."""
        return self._status_history

    @status_history.setter
    def status_history(self, value):
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
                "The 'status_history' field must be a set or sequence and each value of type 'RobotStatus'"
        self._status_history = value

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
    def total_commands_executed(self):
        """Message field 'total_commands_executed'."""
        return self._total_commands_executed

    @total_commands_executed.setter
    def total_commands_executed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_commands_executed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_commands_executed' field must be an unsigned integer in [0, 4294967295]"
        self._total_commands_executed = value

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
    def error_count_today(self):
        """Message field 'error_count_today'."""
        return self._error_count_today

    @error_count_today.setter
    def error_count_today(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_count_today' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'error_count_today' field must be an unsigned integer in [0, 4294967295]"
        self._error_count_today = value

    @builtins.property
    def average_response_time_ms(self):
        """Message field 'average_response_time_ms'."""
        return self._average_response_time_ms

    @average_response_time_ms.setter
    def average_response_time_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_response_time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_response_time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_response_time_ms = value

    @builtins.property
    def cpu_usage_percent(self):
        """Message field 'cpu_usage_percent'."""
        return self._cpu_usage_percent

    @cpu_usage_percent.setter
    def cpu_usage_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_usage_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_usage_percent = value

    @builtins.property
    def memory_usage_percent(self):
        """Message field 'memory_usage_percent'."""
        return self._memory_usage_percent

    @memory_usage_percent.setter
    def memory_usage_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'memory_usage_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'memory_usage_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._memory_usage_percent = value

    @builtins.property
    def network_latency_ms(self):
        """Message field 'network_latency_ms'."""
        return self._network_latency_ms

    @network_latency_ms.setter
    def network_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'network_latency_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'network_latency_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._network_latency_ms = value

    @builtins.property
    def query_timestamp(self):
        """Message field 'query_timestamp'."""
        return self._query_timestamp

    @query_timestamp.setter
    def query_timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'query_timestamp' field must be a sub message of type 'Time'"
        self._query_timestamp = value

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


class Metaclass_GetRobotStatus_Event(type):
    """Metaclass of message 'GetRobotStatus_Event'."""

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
                'day2.srv.GetRobotStatus_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_status__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_status__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_status__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_status__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_status__event

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


class GetRobotStatus_Event(metaclass=Metaclass_GetRobotStatus_Event):
    """Message class 'GetRobotStatus_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/GetRobotStatus_Request, 1>',
        'response': 'sequence<day2/GetRobotStatus_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'GetRobotStatus_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'GetRobotStatus_Response'), 1),  # noqa: E501
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
            from day2.srv import GetRobotStatus_Request
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
                 all(isinstance(v, GetRobotStatus_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetRobotStatus_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.srv import GetRobotStatus_Response
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
                 all(isinstance(v, GetRobotStatus_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetRobotStatus_Response'"
        self._response = value


class Metaclass_GetRobotStatus(type):
    """Metaclass of service 'GetRobotStatus'."""

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
                'day2.srv.GetRobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_robot_status

            from day2.srv import _get_robot_status
            if _get_robot_status.Metaclass_GetRobotStatus_Request._TYPE_SUPPORT is None:
                _get_robot_status.Metaclass_GetRobotStatus_Request.__import_type_support__()
            if _get_robot_status.Metaclass_GetRobotStatus_Response._TYPE_SUPPORT is None:
                _get_robot_status.Metaclass_GetRobotStatus_Response.__import_type_support__()
            if _get_robot_status.Metaclass_GetRobotStatus_Event._TYPE_SUPPORT is None:
                _get_robot_status.Metaclass_GetRobotStatus_Event.__import_type_support__()


class GetRobotStatus(metaclass=Metaclass_GetRobotStatus):
    from day2.srv._get_robot_status import GetRobotStatus_Request as Request
    from day2.srv._get_robot_status import GetRobotStatus_Response as Response
    from day2.srv._get_robot_status import GetRobotStatus_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
