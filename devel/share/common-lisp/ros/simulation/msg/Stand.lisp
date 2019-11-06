; Auto-generated. Do not edit!


(cl:in-package simulation-msg)


;//! \htmlinclude Stand.msg.html

(cl:defclass <Stand> (roslisp-msg-protocol:ros-message)
  ((red
    :reader red
    :initarg :red
    :type cl:boolean
    :initform cl:nil)
   (blue
    :reader blue
    :initarg :blue
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Stand (<Stand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Stand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Stand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name simulation-msg:<Stand> is deprecated: use simulation-msg:Stand instead.")))

(cl:ensure-generic-function 'red-val :lambda-list '(m))
(cl:defmethod red-val ((m <Stand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:red-val is deprecated.  Use simulation-msg:red instead.")
  (red m))

(cl:ensure-generic-function 'blue-val :lambda-list '(m))
(cl:defmethod blue-val ((m <Stand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-msg:blue-val is deprecated.  Use simulation-msg:blue instead.")
  (blue m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Stand>) ostream)
  "Serializes a message object of type '<Stand>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'red) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'blue) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Stand>) istream)
  "Deserializes a message object of type '<Stand>"
    (cl:setf (cl:slot-value msg 'red) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'blue) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Stand>)))
  "Returns string type for a message object of type '<Stand>"
  "simulation/Stand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Stand)))
  "Returns string type for a message object of type 'Stand"
  "simulation/Stand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Stand>)))
  "Returns md5sum for a message object of type '<Stand>"
  "86ceb06532353ac324c209f78172bff1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Stand)))
  "Returns md5sum for a message object of type 'Stand"
  "86ceb06532353ac324c209f78172bff1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Stand>)))
  "Returns full string definition for message of type '<Stand>"
  (cl:format cl:nil "bool red~%bool blue~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Stand)))
  "Returns full string definition for message of type 'Stand"
  (cl:format cl:nil "bool red~%bool blue~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Stand>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Stand>))
  "Converts a ROS message object to a list"
  (cl:list 'Stand
    (cl:cons ':red (red msg))
    (cl:cons ':blue (blue msg))
))
