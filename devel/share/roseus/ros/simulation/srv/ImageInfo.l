;; Auto-generated. Do not edit!


(when (boundp 'simulation::ImageInfo)
  (if (not (find-package "SIMULATION"))
    (make-package "SIMULATION"))
  (shadow 'ImageInfo (find-package "SIMULATION")))
(unless (find-package "SIMULATION::IMAGEINFO")
  (make-package "SIMULATION::IMAGEINFO"))
(unless (find-package "SIMULATION::IMAGEINFOREQUEST")
  (make-package "SIMULATION::IMAGEINFOREQUEST"))
(unless (find-package "SIMULATION::IMAGEINFORESPONSE")
  (make-package "SIMULATION::IMAGEINFORESPONSE"))

(in-package "ROS")





(defclass simulation::ImageInfoRequest
  :super ros::object
  :slots ())

(defmethod simulation::ImageInfoRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass simulation::ImageInfoResponse
  :super ros::object
  :slots (_width _height _channels ))

(defmethod simulation::ImageInfoResponse
  (:init
   (&key
    ((:width __width) 0)
    ((:height __height) 0)
    ((:channels __channels) 0)
    )
   (send-super :init)
   (setq _width (round __width))
   (setq _height (round __height))
   (setq _channels (round __channels))
   self)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:channels
   (&optional __channels)
   (if __channels (setq _channels __channels)) _channels)
  (:serialization-length
   ()
   (+
    ;; int32 _width
    4
    ;; int32 _height
    4
    ;; int32 _channels
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _width
       (write-long _width s)
     ;; int32 _height
       (write-long _height s)
     ;; int32 _channels
       (write-long _channels s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _width
     (setq _width (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _height
     (setq _height (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _channels
     (setq _channels (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass simulation::ImageInfo
  :super ros::object
  :slots ())

(setf (get simulation::ImageInfo :md5sum-) "5fc79a3dc52bfd27e58236ef10f8fb6f")
(setf (get simulation::ImageInfo :datatype-) "simulation/ImageInfo")
(setf (get simulation::ImageInfo :request) simulation::ImageInfoRequest)
(setf (get simulation::ImageInfo :response) simulation::ImageInfoResponse)

(defmethod simulation::ImageInfoRequest
  (:response () (instance simulation::ImageInfoResponse :init)))

(setf (get simulation::ImageInfoRequest :md5sum-) "5fc79a3dc52bfd27e58236ef10f8fb6f")
(setf (get simulation::ImageInfoRequest :datatype-) "simulation/ImageInfoRequest")
(setf (get simulation::ImageInfoRequest :definition-)
      "
---
int32 width
int32 height
int32 channels

")

(setf (get simulation::ImageInfoResponse :md5sum-) "5fc79a3dc52bfd27e58236ef10f8fb6f")
(setf (get simulation::ImageInfoResponse :datatype-) "simulation/ImageInfoResponse")
(setf (get simulation::ImageInfoResponse :definition-)
      "
---
int32 width
int32 height
int32 channels

")



(provide :simulation/ImageInfo "5fc79a3dc52bfd27e58236ef10f8fb6f")


