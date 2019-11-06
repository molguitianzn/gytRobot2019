; Auto-generated. Do not edit!


(cl:in-package simulation-msg)


;//! \htmlinclude GameData.msg.html

(cl:defclass <GameData> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cl:integer
    :initform 0)
   (state
    :reader state
    :initarg :state
    :type cl:integer
    :initform 0)
   (remainTime
    :reader remainTime
    :initarg :remainTime
    :type cl:integer
    :initform 0)
   (secondTime
    :reader secondTime
    :initarg :secondTime
    :type cl:integer
    :initform 0)
   (redScore
    :reader redScore
    :initarg :redScore
    :type cl:integer
    :initform 0)
   (blueScore
    :reader blueScore
    :initarg :blueScore
    :type cl:integer
    :initform 0))
)

(cl:defclass GameData (<GameData>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GameData>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GameData)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name simulation-msg:<GameData> is deprecated: use simulation-msg:GameData instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:mode-val is deprecated.  Use simulation-msg:mode instead.")
  (mode m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:state-val is deprecated.  Use simulation-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'remainTime-val :lambda-list '(m))
(cl:defmethod remainTime-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:remainTime-val is deprecated.  Use simulation-msg:remainTime instead.")
  (remainTime m))

(cl:ensure-generic-function 'secondTime-val :lambda-list '(m))
(cl:defmethod secondTime-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:secondTime-val is deprecated.  Use simulation-msg:secondTime instead.")
  (secondTime m))

(cl:ensure-generic-function 'redScore-val :lambda-list '(m))
(cl:defmethod redScore-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:redScore-val is deprecated.  Use simulation-msg:redScore instead.")
  (redScore m))

(cl:ensure-generic-function 'blueScore-val :lambda-list '(m))
(cl:defmethod blueScore-val ((m <GameData>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:blueScore-val is deprecated.  Use simulation-msg:blueScore instead.")
  (blueScore m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<GameData>)))
    "Constants for message type '<GameData>"
  '((:MODE_NORM . 1)
    (:MODE_KICK . 2)
    (:STATE_INIT . 0)
    (:STATE_READY . 1)
    (:STATE_PLAY . 2)
    (:STATE_PAUSE . 3)
    (:STATE_END . 4))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'GameData)))
    "Constants for message type 'GameData"
  '((:MODE_NORM . 1)
    (:MODE_KICK . 2)
    (:STATE_INIT . 0)
    (:STATE_READY . 1)
    (:STATE_PLAY . 2)
    (:STATE_PAUSE . 3)
    (:STATE_END . 4))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GameData>) ostream)
  "Serializes a message object of type '<GameData>"
  (cl:let* ((signed (cl:slot-value msg 'mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'remainTime)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'secondTime)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'redScore)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'blueScore)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GameData>) istream)
  "Deserializes a message object of type '<GameData>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mode) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'remainTime) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'secondTime) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'redScore) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'blueScore) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GameData>)))
  "Returns string type for a message object of type '<GameData>"
  "simulation/GameData")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GameData)))
  "Returns string type for a message object of type 'GameData"
  "simulation/GameData")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GameData>)))
  "Returns md5sum for a message object of type '<GameData>"
  "252f7aa3551cd9e19b1c2d0f842ab93b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GameData)))
  "Returns md5sum for a message object of type 'GameData"
  "252f7aa3551cd9e19b1c2d0f842ab93b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GameData>)))
  "Returns full string definition for message of type '<GameData>"
  (cl:format cl:nil "int32 mode~%~%int32 MODE_NORM=1~%int32 MODE_KICK=2~%~%int32 state~%int32 remainTime~%int32 secondTime~%int32 redScore~%int32 blueScore~%~%int32 STATE_INIT = 0~%int32 STATE_READY = 1~%int32 STATE_PLAY = 2~%int32 STATE_PAUSE = 3~%int32 STATE_END = 4~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GameData)))
  "Returns full string definition for message of type 'GameData"
  (cl:format cl:nil "int32 mode~%~%int32 MODE_NORM=1~%int32 MODE_KICK=2~%~%int32 state~%int32 remainTime~%int32 secondTime~%int32 redScore~%int32 blueScore~%~%int32 STATE_INIT = 0~%int32 STATE_READY = 1~%int32 STATE_PLAY = 2~%int32 STATE_PAUSE = 3~%int32 STATE_END = 4~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GameData>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GameData>))
  "Converts a ROS message object to a list"
  (cl:list 'GameData
    (cl:cons ':mode (mode msg))
    (cl:cons ':state (state msg))
    (cl:cons ':remainTime (remainTime msg))
    (cl:cons ':secondTime (secondTime msg))
    (cl:cons ':redScore (redScore msg))
    (cl:cons ':blueScore (blueScore msg))
))
