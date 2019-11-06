; Auto-generated. Do not edit!


(cl:in-package game_ctrl-srv)


;//! \htmlinclude TeamInfo-request.msg.html

(cl:defclass <TeamInfo-request> (roslisp-msg-protocol:ros-message)
  ((teamname
    :reader teamname
    :initarg :teamname
    :type cl:string
    :initform ""))
)

(cl:defclass TeamInfo-request (<TeamInfo-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TeamInfo-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TeamInfo-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name game_ctrl-srv:<TeamInfo-request> is deprecated: use game_ctrl-srv:TeamInfo-request instead.")))

(cl:ensure-generic-function 'teamname-val :lambda-list '(m))
(cl:defmethod teamname-val ((m <TeamInfo-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader game_ctrl-srv:teamname-val is deprecated.  Use game_ctrl-srv:teamname instead.")
  (teamname m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TeamInfo-request>) ostream)
  "Serializes a message object of type '<TeamInfo-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'teamname))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'teamname))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TeamInfo-request>) istream)
  "Deserializes a message object of type '<TeamInfo-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'teamname) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'teamname) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TeamInfo-request>)))
  "Returns string type for a service object of type '<TeamInfo-request>"
  "game_ctrl/TeamInfoRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TeamInfo-request)))
  "Returns string type for a service object of type 'TeamInfo-request"
  "game_ctrl/TeamInfoRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TeamInfo-request>)))
  "Returns md5sum for a message object of type '<TeamInfo-request>"
  "967db2d47319aba09eabb132f932430e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TeamInfo-request)))
  "Returns md5sum for a message object of type 'TeamInfo-request"
  "967db2d47319aba09eabb132f932430e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TeamInfo-request>)))
  "Returns full string definition for message of type '<TeamInfo-request>"
  (cl:format cl:nil "string teamname~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TeamInfo-request)))
  "Returns full string definition for message of type 'TeamInfo-request"
  (cl:format cl:nil "string teamname~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TeamInfo-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'teamname))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TeamInfo-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TeamInfo-request
    (cl:cons ':teamname (teamname msg))
))
;//! \htmlinclude TeamInfo-response.msg.html

(cl:defclass <TeamInfo-response> (roslisp-msg-protocol:ros-message)
  ((team
    :reader team
    :initarg :team
    :type cl:string
    :initform ""))
)

(cl:defclass TeamInfo-response (<TeamInfo-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TeamInfo-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TeamInfo-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name game_ctrl-srv:<TeamInfo-response> is deprecated: use game_ctrl-srv:TeamInfo-response instead.")))

(cl:ensure-generic-function 'team-val :lambda-list '(m))
(cl:defmethod team-val ((m <TeamInfo-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader game_ctrl-srv:team-val is deprecated.  Use game_ctrl-srv:team instead.")
  (team m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TeamInfo-response>) ostream)
  "Serializes a message object of type '<TeamInfo-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'team))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'team))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TeamInfo-response>) istream)
  "Deserializes a message object of type '<TeamInfo-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'team) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'team) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TeamInfo-response>)))
  "Returns string type for a service object of type '<TeamInfo-response>"
  "game_ctrl/TeamInfoResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TeamInfo-response)))
  "Returns string type for a service object of type 'TeamInfo-response"
  "game_ctrl/TeamInfoResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TeamInfo-response>)))
  "Returns md5sum for a message object of type '<TeamInfo-response>"
  "967db2d47319aba09eabb132f932430e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TeamInfo-response)))
  "Returns md5sum for a message object of type 'TeamInfo-response"
  "967db2d47319aba09eabb132f932430e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TeamInfo-response>)))
  "Returns full string definition for message of type '<TeamInfo-response>"
  (cl:format cl:nil "string team~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TeamInfo-response)))
  "Returns full string definition for message of type 'TeamInfo-response"
  (cl:format cl:nil "string team~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TeamInfo-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'team))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TeamInfo-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TeamInfo-response
    (cl:cons ':team (team msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TeamInfo)))
  'TeamInfo-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TeamInfo)))
  'TeamInfo-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TeamInfo)))
  "Returns string type for a service object of type '<TeamInfo>"
  "game_ctrl/TeamInfo")