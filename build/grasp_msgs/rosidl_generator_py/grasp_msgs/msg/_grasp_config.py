# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grasp_msgs:msg/GraspConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraspConfig(type):
    """Metaclass of message 'GraspConfig'."""

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
            module = import_type_support('grasp_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grasp_msgs.msg.GraspConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__grasp_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__grasp_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__grasp_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__grasp_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__grasp_config

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GraspConfig(metaclass=Metaclass_GraspConfig):
    """Message class 'GraspConfig'."""

    __slots__ = [
        '_bottom',
        '_top',
        '_surface',
        '_approach',
        '_binormal',
        '_axis',
        '_sample',
        '_width',
        '_score',
    ]

    _fields_and_field_types = {
        'bottom': 'geometry_msgs/Point',
        'top': 'geometry_msgs/Point',
        'surface': 'geometry_msgs/Point',
        'approach': 'geometry_msgs/Vector3',
        'binormal': 'geometry_msgs/Vector3',
        'axis': 'geometry_msgs/Vector3',
        'sample': 'geometry_msgs/Point',
        'width': 'std_msgs/Float32',
        'score': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.bottom = kwargs.get('bottom', Point())
        from geometry_msgs.msg import Point
        self.top = kwargs.get('top', Point())
        from geometry_msgs.msg import Point
        self.surface = kwargs.get('surface', Point())
        from geometry_msgs.msg import Vector3
        self.approach = kwargs.get('approach', Vector3())
        from geometry_msgs.msg import Vector3
        self.binormal = kwargs.get('binormal', Vector3())
        from geometry_msgs.msg import Vector3
        self.axis = kwargs.get('axis', Vector3())
        from geometry_msgs.msg import Point
        self.sample = kwargs.get('sample', Point())
        from std_msgs.msg import Float32
        self.width = kwargs.get('width', Float32())
        from std_msgs.msg import Float32
        self.score = kwargs.get('score', Float32())

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
        if self.bottom != other.bottom:
            return False
        if self.top != other.top:
            return False
        if self.surface != other.surface:
            return False
        if self.approach != other.approach:
            return False
        if self.binormal != other.binormal:
            return False
        if self.axis != other.axis:
            return False
        if self.sample != other.sample:
            return False
        if self.width != other.width:
            return False
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bottom(self):
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bottom' field must be a sub message of type 'Point'"
        self._bottom = value

    @property
    def top(self):
        """Message field 'top'."""
        return self._top

    @top.setter
    def top(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'top' field must be a sub message of type 'Point'"
        self._top = value

    @property
    def surface(self):
        """Message field 'surface'."""
        return self._surface

    @surface.setter
    def surface(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'surface' field must be a sub message of type 'Point'"
        self._surface = value

    @property
    def approach(self):
        """Message field 'approach'."""
        return self._approach

    @approach.setter
    def approach(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'approach' field must be a sub message of type 'Vector3'"
        self._approach = value

    @property
    def binormal(self):
        """Message field 'binormal'."""
        return self._binormal

    @binormal.setter
    def binormal(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'binormal' field must be a sub message of type 'Vector3'"
        self._binormal = value

    @property
    def axis(self):
        """Message field 'axis'."""
        return self._axis

    @axis.setter
    def axis(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'axis' field must be a sub message of type 'Vector3'"
        self._axis = value

    @property
    def sample(self):
        """Message field 'sample'."""
        return self._sample

    @sample.setter
    def sample(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'sample' field must be a sub message of type 'Point'"
        self._sample = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'width' field must be a sub message of type 'Float32'"
        self._width = value

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'score' field must be a sub message of type 'Float32'"
        self._score = value
