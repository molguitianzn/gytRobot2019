; Auto-generated. Do not edit!


(cl:in-package simulation-msg)


;//! \htmlinclude LegAngles.msg.html

(cl:defclass <LegAngles> (roslisp-msg-protocol:ros-message)
  ((total
    :reader total
    :initarg :total
    :type cl:integer
    :initform 0)
   (id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (time
    :reader time
    :initarg :time
    :type cl:integer
    :initform 0)
   (left_hip_yaw
    :reader left_hip_yaw
    :initarg :left_hip_yaw
    :type cl:float
    :initform 0.0)
   (left_hip_roll
    :reader left_hip_roll
    :initarg :left_hip_roll
    :type cl:float
    :initform 0.0)
   (left_hip_pitch
    :reader left_hip_pitch
    :initarg :left_hip_pitch
    :type cl:float
    :initform 0.0)
   (left_knee
    :reader left_knee
    :initarg :left_knee
    :type cl:float
    :initform 0.0)
   (left_ankle_pitch
    :reader left_ankle_pitch
    :initarg :left_ankle_pitch
    :type cl:float
    :initform 0.0)
   (left_ankle_roll
    :reader left_ankle_roll
    :initarg :left_ankle_roll
    :type cl:float
    :initform 0.0)
   (right_hip_yaw
    :reader right_hip_yaw
    :initarg :right_hip_yaw
    :type cl:float
    :initform 0.0)
   (right_hip_roll
    :reader right_hip_roll
    :initarg :right_hip_roll
    :type cl:float
    :initform 0.0)
   (right_hip_pitch
    :reader right_hip_pitch
    :initarg :right_hip_pitch
    :type cl:float
    :initform 0.0)
   (right_knee
    :reader right_knee
    :initarg :right_knee
    :type cl:float
    :initform 0.0)
   (right_ankle_pitch
    :reader right_ankle_pitch
    :initarg :right_ankle_pitch
    :type cl:float
    :initform 0.0)
   (right_ankle_roll
    :reader right_ankle_roll
    :initarg :right_ankle_roll
    :type cl:float
    :initform 0.0))
)

(cl:defclass LegAngles (<LegAngles>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LegAngles>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LegAngles)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name simulation-msg:<LegAngles> is deprecated: use simulation-msg:LegAngles instead.")))

(cl:ensure-generic-function 'total-val :lambda-list '(m))
(cl:defmethod total-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:total-val is deprecated.  Use simulation-msg:total instead.")
  (total m))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:id-val is deprecated.  Use simulation-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:time-val is deprecated.  Use simulation-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'left_hip_yaw-val :lambda-list '(m))
(cl:defmethod left_hip_yaw-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_hip_yaw-val is deprecated.  Use simulation-msg:left_hip_yaw instead.")
  (left_hip_yaw m))

(cl:ensure-generic-function 'left_hip_roll-val :lambda-list '(m))
(cl:defmethod left_hip_roll-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_hip_roll-val is deprecated.  Use simulation-msg:left_hip_roll instead.")
  (left_hip_roll m))

(cl:ensure-generic-function 'left_hip_pitch-val :lambda-list '(m))
(cl:defmethod left_hip_pitch-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_hip_pitch-val is deprecated.  Use simulation-msg:left_hip_pitch instead.")
  (left_hip_pitch m))

(cl:ensure-generic-function 'left_knee-val :lambda-list '(m))
(cl:defmethod left_knee-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_knee-val is deprecated.  Use simulation-msg:left_knee instead.")
  (left_knee m))

(cl:ensure-generic-function 'left_ankle_pitch-val :lambda-list '(m))
(cl:defmethod left_ankle_pitch-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_ankle_pitch-val is deprecated.  Use simulation-msg:left_ankle_pitch instead.")
  (left_ankle_pitch m))

(cl:ensure-generic-function 'left_ankle_roll-val :lambda-list '(m))
(cl:defmethod left_ankle_roll-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:left_ankle_roll-val is deprecated.  Use simulation-msg:left_ankle_roll instead.")
  (left_ankle_roll m))

(cl:ensure-generic-function 'right_hip_yaw-val :lambda-list '(m))
(cl:defmethod right_hip_yaw-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_hip_yaw-val is deprecated.  Use simulation-msg:right_hip_yaw instead.")
  (right_hip_yaw m))

(cl:ensure-generic-function 'right_hip_roll-val :lambda-list '(m))
(cl:defmethod right_hip_roll-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_hip_roll-val is deprecated.  Use simulation-msg:right_hip_roll instead.")
  (right_hip_roll m))

(cl:ensure-generic-function 'right_hip_pitch-val :lambda-list '(m))
(cl:defmethod right_hip_pitch-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_hip_pitch-val is deprecated.  Use simulation-msg:right_hip_pitch instead.")
  (right_hip_pitch m))

(cl:ensure-generic-function 'right_knee-val :lambda-list '(m))
(cl:defmethod right_knee-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_knee-val is deprecated.  Use simulation-msg:right_knee instead.")
  (right_knee m))

(cl:ensure-generic-function 'right_ankle_pitch-val :lambda-list '(m))
(cl:defmethod right_ankle_pitch-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_ankle_pitch-val is deprecated.  Use simulation-msg:right_ankle_pitch instead.")
  (right_ankle_pitch m))

(cl:ensure-generic-function 'right_ankle_roll-val :lambda-list '(m))
(cl:defmethod right_ankle_roll-val ((m <LegAngles>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:right_ankle_roll-val is deprecated.  Use simulation-msg:right_ankle_roll instead.")
  (right_ankle_roll m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LegAngles>) ostream)
  "Serializes a message object of type '<LegAngles>"
  (cl:let* ((signed (cl:slot-value msg 'total)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'time)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_hip_yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_hip_roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_hip_pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_knee))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_ankle_pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'left_ankle_roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_hip_yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_hip_roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_hip_pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_knee))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_ankle_pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'right_ankle_roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LegAngles>) istream)
  "Deserializes a message object of type '<LegAngles>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'total) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'time) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_hip_yaw) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_hip_roll) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_hip_pitch) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_knee) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_ankle_pitch) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'left_ankle_roll) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_hip_yaw) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_hip_roll) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_hip_pitch) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_knee) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_ankle_pitch) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'right_ankle_roll) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LegAngles>)))
  "Returns string type for a message object of type '<LegAngles>"
  "simulation/LegAngles")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LegAngles)))
  "Returns string type for a message object of type 'LegAngles"
  "simulation/LegAngles")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LegAngles>)))
  "Returns md5sum for a message object of type '<LegAngles>"
  "1ff69379a7a6971bcc0c02bafcd2f458")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LegAngles)))
  "Returns md5sum for a message object of type 'LegAngles"
  "1ff69379a7a6971bcc0c02bafcd2f458")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LegAngles>)))
  "Returns full string definition for message of type '<LegAngles>"
  (cl:format cl:nil "int32 total~%int32 id~%int32 time~%float64 left_hip_yaw~%float64 left_hip_roll~%float64 left_hip_pitch~%float64 left_knee~%float64 left_ankle_pitch~%float64 left_ankle_roll~%float64 right_hip_yaw~%float64 right_hip_roll~%float64 right_hip_pitch~%float64 right_knee~%float64 right_ankle_pitch~%float64 right_ankle_roll~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LegAngles)))
  "Returns full string definition for message of type 'LegAngles"
  (cl:format cl:nil "int32 total~%int32 id~%int32 time~%float64 left_hip_yaw~%float64 left_hip_roll~%float64 left_hip_pitch~%float64 left_knee~%float64 left_ankle_pitch~%float64 left_ankle_roll~%float64 right_hip_yaw~%float64 right_hip_roll~%float64 right_hip_pitch~%float64 right_knee~%float64 right_ankle_pitch~%float64 right_ankle_roll~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LegAngles>))
  (cl:+ 0
     4
     4
     4
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LegAngles>))
  "Converts a ROS message object to a list"
  (cl:list 'LegAngles
    (cl:cons ':total (total msg))
    (cl:cons ':id (id msg))
    (cl:cons ':time (time msg))
    (cl:cons ':left_hip_yaw (left_hip_yaw msg))
    (cl:cons ':left_hip_roll (left_hip_roll msg))
    (cl:cons ':left_hip_pitch (left_hip_pitch msg))
    (cl:cons ':left_knee (left_knee msg))
    (cl:cons ':left_ankle_pitch (left_ankle_pitch msg))
    (cl:cons ':left_ankle_roll (left_ankle_roll msg))
    (cl:cons ':right_hip_yaw (right_hip_yaw msg))
    (cl:cons ':right_hip_roll (right_hip_roll msg))
    (cl:cons ':right_hip_pitch (right_hip_pitch msg))
    (cl:cons ':right_knee (right_knee msg))
    (cl:cons ':right_ankle_pitch (right_ankle_pitch msg))
    (cl:cons ':right_ankle_roll (right_ankle_roll msg))
))
