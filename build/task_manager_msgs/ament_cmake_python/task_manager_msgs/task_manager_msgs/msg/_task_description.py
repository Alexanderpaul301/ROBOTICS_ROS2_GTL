# generated from rosidl_generator_py/resource/_idl.py.em
# with input from task_manager_msgs:msg/TaskDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskDescription(type):
    """Metaclass of message 'TaskDescription'."""

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
            module = import_type_support('task_manager_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'task_manager_msgs.msg.TaskDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_description

            from rcl_interfaces.msg import ParameterDescriptor
            if ParameterDescriptor.__class__._TYPE_SUPPORT is None:
                ParameterDescriptor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskDescription(metaclass=Metaclass_TaskDescription):
    """Message class 'TaskDescription'."""

    __slots__ = [
        '_name',
        '_description',
        '_periodic',
        '_config',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'description': 'string',
        'periodic': 'boolean',
        'config': 'sequence<rcl_interfaces/ParameterDescriptor>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'ParameterDescriptor')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.description = kwargs.get('description', str())
        self.periodic = kwargs.get('periodic', bool())
        self.config = kwargs.get('config', [])

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
        if self.name != other.name:
            return False
        if self.description != other.description:
            return False
        if self.periodic != other.periodic:
            return False
        if self.config != other.config:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def periodic(self):
        """Message field 'periodic'."""
        return self._periodic

    @periodic.setter
    def periodic(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'periodic' field must be of type 'bool'"
        self._periodic = value

    @builtins.property
    def config(self):
        """Message field 'config'."""
        return self._config

    @config.setter
    def config(self, value):
        if __debug__:
            from rcl_interfaces.msg import ParameterDescriptor
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
                 all(isinstance(v, ParameterDescriptor) for v in value) and
                 True), \
                "The 'config' field must be a set or sequence and each value of type 'ParameterDescriptor'"
        self._config = value
