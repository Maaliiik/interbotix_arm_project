# generated from rosidl_generator_py/resource/_idl.py.em
# with input from emse_moveit_actions:action/ReachPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReachPose_Goal(type):
    """Metaclass of message 'ReachPose_Goal'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__goal

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReachPose_Goal(metaclass=Metaclass_ReachPose_Goal):
    """Message class 'ReachPose_Goal'."""

    __slots__ = [
        '_target_pose',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.target_pose = kwargs.get('target_pose', Pose())

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
        if self.target_pose != other.target_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'target_pose' field must be a sub message of type 'Pose'"
        self._target_pose = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_Result(type):
    """Metaclass of message 'ReachPose_Result'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__result

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotTrajectory
            if RobotTrajectory.__class__._TYPE_SUPPORT is None:
                RobotTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReachPose_Result(metaclass=Metaclass_ReachPose_Result):
    """Message class 'ReachPose_Result'."""

    __slots__ = [
        '_error_code',
        '_trajectory_start',
        '_planned_trajectory',
        '_executed_trajectory',
        '_planning_time',
    ]

    _fields_and_field_types = {
        'error_code': 'moveit_msgs/MoveItErrorCodes',
        'trajectory_start': 'moveit_msgs/RobotState',
        'planned_trajectory': 'moveit_msgs/RobotTrajectory',
        'executed_trajectory': 'moveit_msgs/RobotTrajectory',
        'planning_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())
        from moveit_msgs.msg import RobotState
        self.trajectory_start = kwargs.get('trajectory_start', RobotState())
        from moveit_msgs.msg import RobotTrajectory
        self.planned_trajectory = kwargs.get('planned_trajectory', RobotTrajectory())
        from moveit_msgs.msg import RobotTrajectory
        self.executed_trajectory = kwargs.get('executed_trajectory', RobotTrajectory())
        self.planning_time = kwargs.get('planning_time', float())

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
        if self.error_code != other.error_code:
            return False
        if self.trajectory_start != other.trajectory_start:
            return False
        if self.planned_trajectory != other.planned_trajectory:
            return False
        if self.executed_trajectory != other.executed_trajectory:
            return False
        if self.planning_time != other.planning_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            from moveit_msgs.msg import MoveItErrorCodes
            assert \
                isinstance(value, MoveItErrorCodes), \
                "The 'error_code' field must be a sub message of type 'MoveItErrorCodes'"
        self._error_code = value

    @builtins.property
    def trajectory_start(self):
        """Message field 'trajectory_start'."""
        return self._trajectory_start

    @trajectory_start.setter
    def trajectory_start(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'trajectory_start' field must be a sub message of type 'RobotState'"
        self._trajectory_start = value

    @builtins.property
    def planned_trajectory(self):
        """Message field 'planned_trajectory'."""
        return self._planned_trajectory

    @planned_trajectory.setter
    def planned_trajectory(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotTrajectory
            assert \
                isinstance(value, RobotTrajectory), \
                "The 'planned_trajectory' field must be a sub message of type 'RobotTrajectory'"
        self._planned_trajectory = value

    @builtins.property
    def executed_trajectory(self):
        """Message field 'executed_trajectory'."""
        return self._executed_trajectory

    @executed_trajectory.setter
    def executed_trajectory(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotTrajectory
            assert \
                isinstance(value, RobotTrajectory), \
                "The 'executed_trajectory' field must be a sub message of type 'RobotTrajectory'"
        self._executed_trajectory = value

    @builtins.property
    def planning_time(self):
        """Message field 'planning_time'."""
        return self._planning_time

    @planning_time.setter
    def planning_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'planning_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planning_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planning_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_Feedback(type):
    """Metaclass of message 'ReachPose_Feedback'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReachPose_Feedback(metaclass=Metaclass_ReachPose_Feedback):
    """Message class 'ReachPose_Feedback'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', str())

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_SendGoal_Request(type):
    """Metaclass of message 'ReachPose_SendGoal_Request'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__send_goal__request

            from emse_moveit_actions.action import ReachPose
            if ReachPose.Goal.__class__._TYPE_SUPPORT is None:
                ReachPose.Goal.__class__.__import_type_support__()

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


class ReachPose_SendGoal_Request(metaclass=Metaclass_ReachPose_SendGoal_Request):
    """Message class 'ReachPose_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'emse_moveit_actions/ReachPose_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['emse_moveit_actions', 'action'], 'ReachPose_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from emse_moveit_actions.action._reach_pose import ReachPose_Goal
        self.goal = kwargs.get('goal', ReachPose_Goal())

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
        if __debug__:
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
        if __debug__:
            from emse_moveit_actions.action._reach_pose import ReachPose_Goal
            assert \
                isinstance(value, ReachPose_Goal), \
                "The 'goal' field must be a sub message of type 'ReachPose_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_SendGoal_Response(type):
    """Metaclass of message 'ReachPose_SendGoal_Response'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__send_goal__response

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


class ReachPose_SendGoal_Response(metaclass=Metaclass_ReachPose_SendGoal_Response):
    """Message class 'ReachPose_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
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
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ReachPose_SendGoal(type):
    """Metaclass of service 'ReachPose_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__reach_pose__send_goal

            from emse_moveit_actions.action import _reach_pose
            if _reach_pose.Metaclass_ReachPose_SendGoal_Request._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_SendGoal_Request.__import_type_support__()
            if _reach_pose.Metaclass_ReachPose_SendGoal_Response._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_SendGoal_Response.__import_type_support__()


class ReachPose_SendGoal(metaclass=Metaclass_ReachPose_SendGoal):
    from emse_moveit_actions.action._reach_pose import ReachPose_SendGoal_Request as Request
    from emse_moveit_actions.action._reach_pose import ReachPose_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_GetResult_Request(type):
    """Metaclass of message 'ReachPose_GetResult_Request'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__get_result__request

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


class ReachPose_GetResult_Request(metaclass=Metaclass_ReachPose_GetResult_Request):
    """Message class 'ReachPose_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        if __debug__:
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


class Metaclass_ReachPose_GetResult_Response(type):
    """Metaclass of message 'ReachPose_GetResult_Response'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__get_result__response

            from emse_moveit_actions.action import ReachPose
            if ReachPose.Result.__class__._TYPE_SUPPORT is None:
                ReachPose.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReachPose_GetResult_Response(metaclass=Metaclass_ReachPose_GetResult_Response):
    """Message class 'ReachPose_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'emse_moveit_actions/ReachPose_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['emse_moveit_actions', 'action'], 'ReachPose_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from emse_moveit_actions.action._reach_pose import ReachPose_Result
        self.result = kwargs.get('result', ReachPose_Result())

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
        if __debug__:
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
        if __debug__:
            from emse_moveit_actions.action._reach_pose import ReachPose_Result
            assert \
                isinstance(value, ReachPose_Result), \
                "The 'result' field must be a sub message of type 'ReachPose_Result'"
        self._result = value


class Metaclass_ReachPose_GetResult(type):
    """Metaclass of service 'ReachPose_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__reach_pose__get_result

            from emse_moveit_actions.action import _reach_pose
            if _reach_pose.Metaclass_ReachPose_GetResult_Request._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_GetResult_Request.__import_type_support__()
            if _reach_pose.Metaclass_ReachPose_GetResult_Response._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_GetResult_Response.__import_type_support__()


class ReachPose_GetResult(metaclass=Metaclass_ReachPose_GetResult):
    from emse_moveit_actions.action._reach_pose import ReachPose_GetResult_Request as Request
    from emse_moveit_actions.action._reach_pose import ReachPose_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReachPose_FeedbackMessage(type):
    """Metaclass of message 'ReachPose_FeedbackMessage'."""

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
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__reach_pose__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__reach_pose__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__reach_pose__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__reach_pose__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__reach_pose__feedback_message

            from emse_moveit_actions.action import ReachPose
            if ReachPose.Feedback.__class__._TYPE_SUPPORT is None:
                ReachPose.Feedback.__class__.__import_type_support__()

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


class ReachPose_FeedbackMessage(metaclass=Metaclass_ReachPose_FeedbackMessage):
    """Message class 'ReachPose_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'emse_moveit_actions/ReachPose_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['emse_moveit_actions', 'action'], 'ReachPose_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from emse_moveit_actions.action._reach_pose import ReachPose_Feedback
        self.feedback = kwargs.get('feedback', ReachPose_Feedback())

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
        if __debug__:
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
        if __debug__:
            from emse_moveit_actions.action._reach_pose import ReachPose_Feedback
            assert \
                isinstance(value, ReachPose_Feedback), \
                "The 'feedback' field must be a sub message of type 'ReachPose_Feedback'"
        self._feedback = value


class Metaclass_ReachPose(type):
    """Metaclass of action 'ReachPose'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('emse_moveit_actions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'emse_moveit_actions.action.ReachPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__reach_pose

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from emse_moveit_actions.action import _reach_pose
            if _reach_pose.Metaclass_ReachPose_SendGoal._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_SendGoal.__import_type_support__()
            if _reach_pose.Metaclass_ReachPose_GetResult._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_GetResult.__import_type_support__()
            if _reach_pose.Metaclass_ReachPose_FeedbackMessage._TYPE_SUPPORT is None:
                _reach_pose.Metaclass_ReachPose_FeedbackMessage.__import_type_support__()


class ReachPose(metaclass=Metaclass_ReachPose):

    # The goal message defined in the action definition.
    from emse_moveit_actions.action._reach_pose import ReachPose_Goal as Goal
    # The result message defined in the action definition.
    from emse_moveit_actions.action._reach_pose import ReachPose_Result as Result
    # The feedback message defined in the action definition.
    from emse_moveit_actions.action._reach_pose import ReachPose_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from emse_moveit_actions.action._reach_pose import ReachPose_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from emse_moveit_actions.action._reach_pose import ReachPose_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from emse_moveit_actions.action._reach_pose import ReachPose_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
