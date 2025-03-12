# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wpa_cli_msgs:msg/Network.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Network(type):
    """Metaclass of message 'Network'."""

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
            module = import_type_support('wpa_cli_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wpa_cli_msgs.msg.Network')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__network
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__network
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__network
            cls._TYPE_SUPPORT = module.type_support_msg__msg__network
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__network

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Network(metaclass=Metaclass_Network):
    """Message class 'Network'."""

    __slots__ = [
        '_bssid',
        '_ssid',
        '_channel',
        '_level',
        '_info',
    ]

    _fields_and_field_types = {
        'bssid': 'string',
        'ssid': 'string',
        'channel': 'int32',
        'level': 'int32',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bssid = kwargs.get('bssid', str())
        self.ssid = kwargs.get('ssid', str())
        self.channel = kwargs.get('channel', int())
        self.level = kwargs.get('level', int())
        self.info = kwargs.get('info', str())

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
        if self.bssid != other.bssid:
            return False
        if self.ssid != other.ssid:
            return False
        if self.channel != other.channel:
            return False
        if self.level != other.level:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bssid(self):
        """Message field 'bssid'."""
        return self._bssid

    @bssid.setter
    def bssid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bssid' field must be of type 'str'"
        self._bssid = value

    @builtins.property
    def ssid(self):
        """Message field 'ssid'."""
        return self._ssid

    @ssid.setter
    def ssid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ssid' field must be of type 'str'"
        self._ssid = value

    @builtins.property
    def channel(self):
        """Message field 'channel'."""
        return self._channel

    @channel.setter
    def channel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'channel' field must be an integer in [-2147483648, 2147483647]"
        self._channel = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'level' field must be an integer in [-2147483648, 2147483647]"
        self._level = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value
