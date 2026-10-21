# generated from rosidl_generator_py/resource/_idl.py.em
# with input from serial_motor_msgs:msg/MecanumMotorVels.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MecanumMotorVels(type):
    """Metaclass of message 'MecanumMotorVels'."""

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
            module = import_type_support('serial_motor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'serial_motor_msgs.msg.MecanumMotorVels')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mecanum_motor_vels
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mecanum_motor_vels
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mecanum_motor_vels
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mecanum_motor_vels
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mecanum_motor_vels

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MecanumMotorVels(metaclass=Metaclass_MecanumMotorVels):
    """Message class 'MecanumMotorVels'."""

    __slots__ = [
        '_fl_rad_sec',
        '_fr_rad_sec',
        '_bl_rad_sec',
        '_br_rad_sec',
    ]

    _fields_and_field_types = {
        'fl_rad_sec': 'float',
        'fr_rad_sec': 'float',
        'bl_rad_sec': 'float',
        'br_rad_sec': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fl_rad_sec = kwargs.get('fl_rad_sec', float())
        self.fr_rad_sec = kwargs.get('fr_rad_sec', float())
        self.bl_rad_sec = kwargs.get('bl_rad_sec', float())
        self.br_rad_sec = kwargs.get('br_rad_sec', float())

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
        if self.fl_rad_sec != other.fl_rad_sec:
            return False
        if self.fr_rad_sec != other.fr_rad_sec:
            return False
        if self.bl_rad_sec != other.bl_rad_sec:
            return False
        if self.br_rad_sec != other.br_rad_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fl_rad_sec(self):
        """Message field 'fl_rad_sec'."""
        return self._fl_rad_sec

    @fl_rad_sec.setter
    def fl_rad_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_rad_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_rad_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_rad_sec = value

    @builtins.property
    def fr_rad_sec(self):
        """Message field 'fr_rad_sec'."""
        return self._fr_rad_sec

    @fr_rad_sec.setter
    def fr_rad_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_rad_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_rad_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_rad_sec = value

    @builtins.property
    def bl_rad_sec(self):
        """Message field 'bl_rad_sec'."""
        return self._bl_rad_sec

    @bl_rad_sec.setter
    def bl_rad_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bl_rad_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bl_rad_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bl_rad_sec = value

    @builtins.property
    def br_rad_sec(self):
        """Message field 'br_rad_sec'."""
        return self._br_rad_sec

    @br_rad_sec.setter
    def br_rad_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'br_rad_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'br_rad_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._br_rad_sec = value
