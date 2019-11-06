; Auto-generated. Do not edit!


(cl:in-package simulation-srv)


;//! \htmlinclude ImageInfo-request.msg.html

(cl:defclass <ImageInfo-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ImageInfo-request (<ImageInfo-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ImageInfo-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ImageInfo-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name simulation-srv:<ImageInfo-request> is deprecated: use simulation-srv:ImageInfo-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ImageInfo-request>) ostream)
  "Serializes a message object of type '<ImageInfo-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ImageInfo-request>) istream)
  "Deserializes a message object of type '<ImageInfo-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ImageInfo-request>)))
  "Returns string type for a service object of type '<ImageInfo-request>"
  "simulation/ImageInfoRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ImageInfo-request)))
  "Returns string type for a service object of type 'ImageInfo-request"
  "simulation/ImageInfoRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ImageInfo-request>)))
  "Returns md5sum for a message object of type '<ImageInfo-request>"
  "5fc79a3dc52bfd27e58236ef10f8fb6f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ImageInfo-request)))
  "Returns md5sum for a message object of type 'ImageInfo-request"
  "5fc79a3dc52bfd27e58236ef10f8fb6f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ImageInfo-request>)))
  "Returns full string definition for message of type '<ImageInfo-request>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ImageInfo-request)))
  "Returns full string definition for message of type 'ImageInfo-request"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ImageInfo-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ImageInfo-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ImageInfo-request
))
;//! \htmlinclude ImageInfo-response.msg.html

(cl:defclass <ImageInfo-response> (roslisp-msg-protocol:ros-message)
  ((width
    :reader width
    :initarg :width
    :type cl:integer
    :initform 0)
   (height
    :reader height
    :initarg :height
    :type cl:integer
    :initform 0)
   (channels
    :reader channels
    :initarg :channels
    :type cl:integer
    :initform 0))
)

(cl:defclass ImageInfo-response (<ImageInfo-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ImageInfo-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ImageInfo-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name simulation-srv:<ImageInfo-response> is deprecated: use simulation-srv:ImageInfo-response instead.")))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <ImageInfo-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-srv:width-val is deprecated.  Use simulation-srv:width instead.")
  (width m))

(cl:ensure-generic-function 'height-val :lambda-list '(m))
(cl:defmethod height-val ((m <ImageInfo-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-srv:height-val is deprecated.  Use simulation-srv:height instead.")
  (height m))

(cl:ensure-generic-function 'channels-val :lambda-list '(m))
(cl:defmethod channels-val ((m <ImageInfo-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader simulation-srv:channels-val is deprecated.  Use simulation-srv:channels instead.")
  (channels m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ImageInfo-response>) ostream)
  "Serializes a message object of type '<ImageInfo-response>"
  (cl:let* ((signed (cl:slot-value msg 'width)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'height)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'channels)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ImageInfo-response>) istream)
  "Deserializes a message object of type '<ImageInfo-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'width) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'height) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'channels) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ImageInfo-response>)))
  "Returns string type for a service object of type '<ImageInfo-response>"
  "simulation/ImageInfoResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ImageInfo-response)))
  "Returns string type for a service object of type 'ImageInfo-response"
  "simulation/ImageInfoResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ImageInfo-response>)))
  "Returns md5sum for a message object of type '<ImageInfo-response>"
  "5fc79a3dc52bfd27e58236ef10f8fb6f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ImageInfo-response)))
  "Returns md5sum for a message object of type 'ImageInfo-response"
  "5fc79a3dc52bfd27e58236ef10f8fb6f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ImageInfo-response>)))
  "Returns full string definition for message of type '<ImageInfo-response>"
  (cl:format cl:nil "int32 width~%int32 height~%int32 channels~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ImageInfo-response)))
  "Returns full string definition for message of type 'ImageInfo-response"
  (cl:format cl:nil "int32 width~%int32 height~%int32 channels~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ImageInfo-response>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ImageInfo-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ImageInfo-response
    (cl:cons ':width (width msg))
    (cl:cons ':height (height msg))
    (cl:cons ':channels (channels msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ImageInfo)))
  'ImageInfo-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ImageInfo)))
  'ImageInfo-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ImageInfo)))
  "Returns string type for a service object of type '<ImageInfo>"
  "simulation/ImageInfo")