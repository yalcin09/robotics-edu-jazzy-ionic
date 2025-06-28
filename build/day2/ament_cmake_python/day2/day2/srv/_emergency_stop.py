# generated from rosidl_generator_py/resource/_idl.py.em
# with input from day2:srv/EmergencyStop.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmergencyStop_Request(type):
    """Metaclass of message 'EmergencyStop_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SOFT_STOP': 0,
        'IMMEDIATE_STOP': 1,
        'EMERGENCY_STOP': 2,
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
                'day2.srv.EmergencyStop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency_stop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency_stop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency_stop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency_stop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency_stop__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOFT_STOP': cls.__constants['SOFT_STOP'],
            'IMMEDIATE_STOP': cls.__constants['IMMEDIATE_STOP'],
            'EMERGENCY_STOP': cls.__constants['EMERGENCY_STOP'],
        }

    @property
    def SOFT_STOP(self):
        """Message constant 'SOFT_STOP'."""
        return Metaclass_EmergencyStop_Request.__constants['SOFT_STOP']

    @property
    def IMMEDIATE_STOP(self):
        """Message constant 'IMMEDIATE_STOP'."""
        return Metaclass_EmergencyStop_Request.__constants['IMMEDIATE_STOP']

    @property
    def EMERGENCY_STOP(self):
        """Message constant 'EMERGENCY_STOP'."""
        return Metaclass_EmergencyStop_Request.__constants['EMERGENCY_STOP']


class EmergencyStop_Request(metaclass=Metaclass_EmergencyStop_Request):
    """
    Message class 'EmergencyStop_Request'.

    Constants:
      SOFT_STOP
      IMMEDIATE_STOP
      EMERGENCY_STOP
    """

    __slots__ = [
        '_robot_id',
        '_reason',
        '_stop_type',
        '_disable_motors',
        '_lock_brakes',
        '_sound_alarm',
        '_operator_id',
        '_priority_level',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint32',
        'reason': 'string',
        'stop_type': 'uint8',
        'disable_motors': 'boolean',
        'lock_brakes': 'boolean',
        'sound_alarm': 'boolean',
        'operator_id': 'string',
        'priority_level': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.reason = kwargs.get('reason', str())
        self.stop_type = kwargs.get('stop_type', int())
        self.disable_motors = kwargs.get('disable_motors', bool())
        self.lock_brakes = kwargs.get('lock_brakes', bool())
        self.sound_alarm = kwargs.get('sound_alarm', bool())
        self.operator_id = kwargs.get('operator_id', str())
        self.priority_level = kwargs.get('priority_level', int())

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
        if self.reason != other.reason:
            return False
        if self.stop_type != other.stop_type:
            return False
        if self.disable_motors != other.disable_motors:
            return False
        if self.lock_brakes != other.lock_brakes:
            return False
        if self.sound_alarm != other.sound_alarm:
            return False
        if self.operator_id != other.operator_id:
            return False
        if self.priority_level != other.priority_level:
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
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

    @builtins.property
    def stop_type(self):
        """Message field 'stop_type'."""
        return self._stop_type

    @stop_type.setter
    def stop_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'stop_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_type' field must be an unsigned integer in [0, 255]"
        self._stop_type = value

    @builtins.property
    def disable_motors(self):
        """Message field 'disable_motors'."""
        return self._disable_motors

    @disable_motors.setter
    def disable_motors(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'disable_motors' field must be of type 'bool'"
        self._disable_motors = value

    @builtins.property
    def lock_brakes(self):
        """Message field 'lock_brakes'."""
        return self._lock_brakes

    @lock_brakes.setter
    def lock_brakes(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lock_brakes' field must be of type 'bool'"
        self._lock_brakes = value

    @builtins.property
    def sound_alarm(self):
        """Message field 'sound_alarm'."""
        return self._sound_alarm

    @sound_alarm.setter
    def sound_alarm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'sound_alarm' field must be of type 'bool'"
        self._sound_alarm = value

    @builtins.property
    def operator_id(self):
        """Message field 'operator_id'."""
        return self._operator_id

    @operator_id.setter
    def operator_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'operator_id' field must be of type 'str'"
        self._operator_id = value

    @builtins.property
    def priority_level(self):
        """Message field 'priority_level'."""
        return self._priority_level

    @priority_level.setter
    def priority_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'priority_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority_level' field must be an unsigned integer in [0, 255]"
        self._priority_level = value


# Import statements for member types

# Member 'stopped_robot_ids'
# Member 'stop_distances'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_EmergencyStop_Response(type):
    """Metaclass of message 'EmergencyStop_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ERROR_NONE': 0,
        'ERROR_ROBOT_NOT_FOUND': 1,
        'ERROR_ALREADY_STOPPED': 2,
        'ERROR_STOP_FAILED': 3,
        'ERROR_COMMUNICATION_FAILED': 4,
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
                'day2.srv.EmergencyStop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency_stop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency_stop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency_stop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency_stop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency_stop__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ERROR_NONE': cls.__constants['ERROR_NONE'],
            'ERROR_ROBOT_NOT_FOUND': cls.__constants['ERROR_ROBOT_NOT_FOUND'],
            'ERROR_ALREADY_STOPPED': cls.__constants['ERROR_ALREADY_STOPPED'],
            'ERROR_STOP_FAILED': cls.__constants['ERROR_STOP_FAILED'],
            'ERROR_COMMUNICATION_FAILED': cls.__constants['ERROR_COMMUNICATION_FAILED'],
        }

    @property
    def ERROR_NONE(self):
        """Message constant 'ERROR_NONE'."""
        return Metaclass_EmergencyStop_Response.__constants['ERROR_NONE']

    @property
    def ERROR_ROBOT_NOT_FOUND(self):
        """Message constant 'ERROR_ROBOT_NOT_FOUND'."""
        return Metaclass_EmergencyStop_Response.__constants['ERROR_ROBOT_NOT_FOUND']

    @property
    def ERROR_ALREADY_STOPPED(self):
        """Message constant 'ERROR_ALREADY_STOPPED'."""
        return Metaclass_EmergencyStop_Response.__constants['ERROR_ALREADY_STOPPED']

    @property
    def ERROR_STOP_FAILED(self):
        """Message constant 'ERROR_STOP_FAILED'."""
        return Metaclass_EmergencyStop_Response.__constants['ERROR_STOP_FAILED']

    @property
    def ERROR_COMMUNICATION_FAILED(self):
        """Message constant 'ERROR_COMMUNICATION_FAILED'."""
        return Metaclass_EmergencyStop_Response.__constants['ERROR_COMMUNICATION_FAILED']


class EmergencyStop_Response(metaclass=Metaclass_EmergencyStop_Response):
    """
    Message class 'EmergencyStop_Response'.

    Constants:
      ERROR_NONE
      ERROR_ROBOT_NOT_FOUND
      ERROR_ALREADY_STOPPED
      ERROR_STOP_FAILED
      ERROR_COMMUNICATION_FAILED
    """

    __slots__ = [
        '_success',
        '_message',
        '_stop_timestamp',
        '_stopped_robot_ids',
        '_robot_responses',
        '_stop_distances',
        '_system_safe_state',
        '_active_alarms',
        '_required_actions',
        '_manual_reset_required',
        '_reset_procedures',
        '_estimated_recovery_time',
        '_incident_id',
        '_incident_classification',
        '_requires_investigation',
        '_error_code',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'stop_timestamp': 'builtin_interfaces/Time',
        'stopped_robot_ids': 'sequence<uint32>',
        'robot_responses': 'sequence<string>',
        'stop_distances': 'sequence<float>',
        'system_safe_state': 'boolean',
        'active_alarms': 'sequence<string>',
        'required_actions': 'sequence<string>',
        'manual_reset_required': 'boolean',
        'reset_procedures': 'sequence<string>',
        'estimated_recovery_time': 'float',
        'incident_id': 'uint32',
        'incident_classification': 'string',
        'requires_investigation': 'boolean',
        'error_code': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.stop_timestamp = kwargs.get('stop_timestamp', Time())
        self.stopped_robot_ids = array.array('I', kwargs.get('stopped_robot_ids', []))
        self.robot_responses = kwargs.get('robot_responses', [])
        self.stop_distances = array.array('f', kwargs.get('stop_distances', []))
        self.system_safe_state = kwargs.get('system_safe_state', bool())
        self.active_alarms = kwargs.get('active_alarms', [])
        self.required_actions = kwargs.get('required_actions', [])
        self.manual_reset_required = kwargs.get('manual_reset_required', bool())
        self.reset_procedures = kwargs.get('reset_procedures', [])
        self.estimated_recovery_time = kwargs.get('estimated_recovery_time', float())
        self.incident_id = kwargs.get('incident_id', int())
        self.incident_classification = kwargs.get('incident_classification', str())
        self.requires_investigation = kwargs.get('requires_investigation', bool())
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
        if self.stop_timestamp != other.stop_timestamp:
            return False
        if self.stopped_robot_ids != other.stopped_robot_ids:
            return False
        if self.robot_responses != other.robot_responses:
            return False
        if self.stop_distances != other.stop_distances:
            return False
        if self.system_safe_state != other.system_safe_state:
            return False
        if self.active_alarms != other.active_alarms:
            return False
        if self.required_actions != other.required_actions:
            return False
        if self.manual_reset_required != other.manual_reset_required:
            return False
        if self.reset_procedures != other.reset_procedures:
            return False
        if self.estimated_recovery_time != other.estimated_recovery_time:
            return False
        if self.incident_id != other.incident_id:
            return False
        if self.incident_classification != other.incident_classification:
            return False
        if self.requires_investigation != other.requires_investigation:
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
    def stop_timestamp(self):
        """Message field 'stop_timestamp'."""
        return self._stop_timestamp

    @stop_timestamp.setter
    def stop_timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stop_timestamp' field must be a sub message of type 'Time'"
        self._stop_timestamp = value

    @builtins.property
    def stopped_robot_ids(self):
        """Message field 'stopped_robot_ids'."""
        return self._stopped_robot_ids

    @stopped_robot_ids.setter
    def stopped_robot_ids(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'I', \
                    "The 'stopped_robot_ids' array.array() must have the type code of 'I'"
                self._stopped_robot_ids = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'stopped_robot_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._stopped_robot_ids = array.array('I', value)

    @builtins.property
    def robot_responses(self):
        """Message field 'robot_responses'."""
        return self._robot_responses

    @robot_responses.setter
    def robot_responses(self, value):
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
                "The 'robot_responses' field must be a set or sequence and each value of type 'str'"
        self._robot_responses = value

    @builtins.property
    def stop_distances(self):
        """Message field 'stop_distances'."""
        return self._stop_distances

    @stop_distances.setter
    def stop_distances(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'stop_distances' array.array() must have the type code of 'f'"
                self._stop_distances = value
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
                "The 'stop_distances' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._stop_distances = array.array('f', value)

    @builtins.property
    def system_safe_state(self):
        """Message field 'system_safe_state'."""
        return self._system_safe_state

    @system_safe_state.setter
    def system_safe_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'system_safe_state' field must be of type 'bool'"
        self._system_safe_state = value

    @builtins.property
    def active_alarms(self):
        """Message field 'active_alarms'."""
        return self._active_alarms

    @active_alarms.setter
    def active_alarms(self, value):
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
                "The 'active_alarms' field must be a set or sequence and each value of type 'str'"
        self._active_alarms = value

    @builtins.property
    def required_actions(self):
        """Message field 'required_actions'."""
        return self._required_actions

    @required_actions.setter
    def required_actions(self, value):
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
                "The 'required_actions' field must be a set or sequence and each value of type 'str'"
        self._required_actions = value

    @builtins.property
    def manual_reset_required(self):
        """Message field 'manual_reset_required'."""
        return self._manual_reset_required

    @manual_reset_required.setter
    def manual_reset_required(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'manual_reset_required' field must be of type 'bool'"
        self._manual_reset_required = value

    @builtins.property
    def reset_procedures(self):
        """Message field 'reset_procedures'."""
        return self._reset_procedures

    @reset_procedures.setter
    def reset_procedures(self, value):
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
                "The 'reset_procedures' field must be a set or sequence and each value of type 'str'"
        self._reset_procedures = value

    @builtins.property
    def estimated_recovery_time(self):
        """Message field 'estimated_recovery_time'."""
        return self._estimated_recovery_time

    @estimated_recovery_time.setter
    def estimated_recovery_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'estimated_recovery_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_recovery_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_recovery_time = value

    @builtins.property
    def incident_id(self):
        """Message field 'incident_id'."""
        return self._incident_id

    @incident_id.setter
    def incident_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'incident_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'incident_id' field must be an unsigned integer in [0, 4294967295]"
        self._incident_id = value

    @builtins.property
    def incident_classification(self):
        """Message field 'incident_classification'."""
        return self._incident_classification

    @incident_classification.setter
    def incident_classification(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'incident_classification' field must be of type 'str'"
        self._incident_classification = value

    @builtins.property
    def requires_investigation(self):
        """Message field 'requires_investigation'."""
        return self._requires_investigation

    @requires_investigation.setter
    def requires_investigation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'requires_investigation' field must be of type 'bool'"
        self._requires_investigation = value

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


class Metaclass_EmergencyStop_Event(type):
    """Metaclass of message 'EmergencyStop_Event'."""

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
                'day2.srv.EmergencyStop_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency_stop__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency_stop__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency_stop__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency_stop__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency_stop__event

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


class EmergencyStop_Event(metaclass=Metaclass_EmergencyStop_Event):
    """Message class 'EmergencyStop_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<day2/EmergencyStop_Request, 1>',
        'response': 'sequence<day2/EmergencyStop_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'EmergencyStop_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['day2', 'srv'], 'EmergencyStop_Response'), 1),  # noqa: E501
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
            from day2.srv import EmergencyStop_Request
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
                 all(isinstance(v, EmergencyStop_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'EmergencyStop_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from day2.srv import EmergencyStop_Response
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
                 all(isinstance(v, EmergencyStop_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'EmergencyStop_Response'"
        self._response = value


class Metaclass_EmergencyStop(type):
    """Metaclass of service 'EmergencyStop'."""

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
                'day2.srv.EmergencyStop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__emergency_stop

            from day2.srv import _emergency_stop
            if _emergency_stop.Metaclass_EmergencyStop_Request._TYPE_SUPPORT is None:
                _emergency_stop.Metaclass_EmergencyStop_Request.__import_type_support__()
            if _emergency_stop.Metaclass_EmergencyStop_Response._TYPE_SUPPORT is None:
                _emergency_stop.Metaclass_EmergencyStop_Response.__import_type_support__()
            if _emergency_stop.Metaclass_EmergencyStop_Event._TYPE_SUPPORT is None:
                _emergency_stop.Metaclass_EmergencyStop_Event.__import_type_support__()


class EmergencyStop(metaclass=Metaclass_EmergencyStop):
    from day2.srv._emergency_stop import EmergencyStop_Request as Request
    from day2.srv._emergency_stop import EmergencyStop_Response as Response
    from day2.srv._emergency_stop import EmergencyStop_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
