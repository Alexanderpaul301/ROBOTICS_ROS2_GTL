# generated from rosidl_generator_py/resource/_idl.py.em
# with input from task_manager_msgs:msg/TaskStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskStatus(type):
    """Metaclass of message 'TaskStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TASK_NEWBORN': 0,
        'TASK_CONFIGURED': 1,
        'TASK_INITIALISED': 2,
        'TASK_RUNNING': 3,
        'TASK_COMPLETED': 4,
        'TASK_TERMINATED': 128,
        'TASK_INTERRUPTED': 6,
        'TASK_FAILED': 7,
        'TASK_TIMEOUT': 8,
        'TASK_CONFIGURATION_FAILED': 9,
        'TASK_INITIALISATION_FAILED': 10,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('task_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'task_manager_msgs.msg.TaskStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rcl_interfaces.msg import Parameter
            if Parameter.__class__._TYPE_SUPPORT is None:
                Parameter.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TASK_NEWBORN': cls.__constants['TASK_NEWBORN'],
            'TASK_CONFIGURED': cls.__constants['TASK_CONFIGURED'],
            'TASK_INITIALISED': cls.__constants['TASK_INITIALISED'],
            'TASK_RUNNING': cls.__constants['TASK_RUNNING'],
            'TASK_COMPLETED': cls.__constants['TASK_COMPLETED'],
            'TASK_TERMINATED': cls.__constants['TASK_TERMINATED'],
            'TASK_INTERRUPTED': cls.__constants['TASK_INTERRUPTED'],
            'TASK_FAILED': cls.__constants['TASK_FAILED'],
            'TASK_TIMEOUT': cls.__constants['TASK_TIMEOUT'],
            'TASK_CONFIGURATION_FAILED': cls.__constants['TASK_CONFIGURATION_FAILED'],
            'TASK_INITIALISATION_FAILED': cls.__constants['TASK_INITIALISATION_FAILED'],
        }

    @property
    def TASK_NEWBORN(self):
        """Message constant 'TASK_NEWBORN'."""
        return Metaclass_TaskStatus.__constants['TASK_NEWBORN']

    @property
    def TASK_CONFIGURED(self):
        """Message constant 'TASK_CONFIGURED'."""
        return Metaclass_TaskStatus.__constants['TASK_CONFIGURED']

    @property
    def TASK_INITIALISED(self):
        """Message constant 'TASK_INITIALISED'."""
        return Metaclass_TaskStatus.__constants['TASK_INITIALISED']

    @property
    def TASK_RUNNING(self):
        """Message constant 'TASK_RUNNING'."""
        return Metaclass_TaskStatus.__constants['TASK_RUNNING']

    @property
    def TASK_COMPLETED(self):
        """Message constant 'TASK_COMPLETED'."""
        return Metaclass_TaskStatus.__constants['TASK_COMPLETED']

    @property
    def TASK_TERMINATED(self):
        """Message constant 'TASK_TERMINATED'."""
        return Metaclass_TaskStatus.__constants['TASK_TERMINATED']

    @property
    def TASK_INTERRUPTED(self):
        """Message constant 'TASK_INTERRUPTED'."""
        return Metaclass_TaskStatus.__constants['TASK_INTERRUPTED']

    @property
    def TASK_FAILED(self):
        """Message constant 'TASK_FAILED'."""
        return Metaclass_TaskStatus.__constants['TASK_FAILED']

    @property
    def TASK_TIMEOUT(self):
        """Message constant 'TASK_TIMEOUT'."""
        return Metaclass_TaskStatus.__constants['TASK_TIMEOUT']

    @property
    def TASK_CONFIGURATION_FAILED(self):
        """Message constant 'TASK_CONFIGURATION_FAILED'."""
        return Metaclass_TaskStatus.__constants['TASK_CONFIGURATION_FAILED']

    @property
    def TASK_INITIALISATION_FAILED(self):
        """Message constant 'TASK_INITIALISATION_FAILED'."""
        return Metaclass_TaskStatus.__constants['TASK_INITIALISATION_FAILED']


class TaskStatus(metaclass=Metaclass_TaskStatus):
    """
    Message class 'TaskStatus'.

    Constants:
      TASK_NEWBORN
      TASK_CONFIGURED
      TASK_INITIALISED
      TASK_RUNNING
      TASK_COMPLETED
      TASK_TERMINATED
      TASK_INTERRUPTED
      TASK_FAILED
      TASK_TIMEOUT
      TASK_CONFIGURATION_FAILED
      TASK_INITIALISATION_FAILED
    """

    __slots__ = [
        '_id',
        '_name',
        '_status',
        '_status_string',
        '_status_time',
        '_plist',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'name': 'string',
        'status': 'uint8',
        'status_string': 'string',
        'status_time': 'builtin_interfaces/Time',
        'plist': 'sequence<rcl_interfaces/Parameter>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'Parameter')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.name = kwargs.get('name', str())
        self.status = kwargs.get('status', int())
        self.status_string = kwargs.get('status_string', str())
        from builtin_interfaces.msg import Time
        self.status_time = kwargs.get('status_time', Time())
        self.plist = kwargs.get('plist', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.id != other.id:
            return False
        if self.name != other.name:
            return False
        if self.status != other.status:
            return False
        if self.status_string != other.status_string:
            return False
        if self.status_time != other.status_time:
            return False
        if self.plist != other.plist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def status_string(self):
        """Message field 'status_string'."""
        return self._status_string

    @status_string.setter
    def status_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_string' field must be of type 'str'"
        self._status_string = value

    @builtins.property
    def status_time(self):
        """Message field 'status_time'."""
        return self._status_time

    @status_time.setter
    def status_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'status_time' field must be a sub message of type 'Time'"
        self._status_time = value

    @builtins.property
    def plist(self):
        """Message field 'plist'."""
        return self._plist

    @plist.setter
    def plist(self, value):
        if __debug__:
            from rcl_interfaces.msg import Parameter
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
                 all(isinstance(v, Parameter) for v in value) and
                 True), \
                "The 'plist' field must be a set or sequence and each value of type 'Parameter'"
        self._plist = value
