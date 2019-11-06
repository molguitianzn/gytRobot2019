;; Auto-generated. Do not edit!


(when (boundp 'simulation::BodyAngles)
  (if (not (find-package "SIMULATION"))
    (make-package "SIMULATION"))
  (shadow 'BodyAngles (find-package "SIMULATION")))
(unless (find-package "SIMULATION::BODYANGLES")
  (make-package "SIMULATION::BODYANGLES"))

(in-package "ROS")
;;//! \htmlinclude BodyAngles.msg.html


(defclass simulation::BodyAngles
  :super ros::object
  :slots (_total _id _time _left_hip_yaw _left_hip_roll _left_hip_pitch _left_knee _left_ankle_pitch _left_ankle_roll _right_hip_yaw _right_hip_roll _right_hip_pitch _right_knee _right_ankle_pitch _right_ankle_roll _left_shoulder _left_elbow _right_shoulder _right_elbow ))

(defmethod simulation::BodyAngles
  (:init
   (&key
    ((:total __total) 0)
    ((:id __id) 0)
    ((:time __time) 0)
    ((:left_hip_yaw __left_hip_yaw) 0.0)
    ((:left_hip_roll __left_hip_roll) 0.0)
    ((:left_hip_pitch __left_hip_pitch) 0.0)
    ((:left_knee __left_knee) 0.0)
    ((:left_ankle_pitch __left_ankle_pitch) 0.0)
    ((:left_ankle_roll __left_ankle_roll) 0.0)
    ((:right_hip_yaw __right_hip_yaw) 0.0)
    ((:right_hip_roll __right_hip_roll) 0.0)
    ((:right_hip_pitch __right_hip_pitch) 0.0)
    ((:right_knee __right_knee) 0.0)
    ((:right_ankle_pitch __right_ankle_pitch) 0.0)
    ((:right_ankle_roll __right_ankle_roll) 0.0)
    ((:left_shoulder __left_shoulder) 0.0)
    ((:left_elbow __left_elbow) 0.0)
    ((:right_shoulder __right_shoulder) 0.0)
    ((:right_elbow __right_elbow) 0.0)
    )
   (send-super :init)
   (setq _total (round __total))
   (setq _id (round __id))
   (setq _time (round __time))
   (setq _left_hip_yaw (float __left_hip_yaw))
   (setq _left_hip_roll (float __left_hip_roll))
   (setq _left_hip_pitch (float __left_hip_pitch))
   (setq _left_knee (float __left_knee))
   (setq _left_ankle_pitch (float __left_ankle_pitch))
   (setq _left_ankle_roll (float __left_ankle_roll))
   (setq _right_hip_yaw (float __right_hip_yaw))
   (setq _right_hip_roll (float __right_hip_roll))
   (setq _right_hip_pitch (float __right_hip_pitch))
   (setq _right_knee (float __right_knee))
   (setq _right_ankle_pitch (float __right_ankle_pitch))
   (setq _right_ankle_roll (float __right_ankle_roll))
   (setq _left_shoulder (float __left_shoulder))
   (setq _left_elbow (float __left_elbow))
   (setq _right_shoulder (float __right_shoulder))
   (setq _right_elbow (float __right_elbow))
   self)
  (:total
   (&optional __total)
   (if __total (setq _total __total)) _total)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:left_hip_yaw
   (&optional __left_hip_yaw)
   (if __left_hip_yaw (setq _left_hip_yaw __left_hip_yaw)) _left_hip_yaw)
  (:left_hip_roll
   (&optional __left_hip_roll)
   (if __left_hip_roll (setq _left_hip_roll __left_hip_roll)) _left_hip_roll)
  (:left_hip_pitch
   (&optional __left_hip_pitch)
   (if __left_hip_pitch (setq _left_hip_pitch __left_hip_pitch)) _left_hip_pitch)
  (:left_knee
   (&optional __left_knee)
   (if __left_knee (setq _left_knee __left_knee)) _left_knee)
  (:left_ankle_pitch
   (&optional __left_ankle_pitch)
   (if __left_ankle_pitch (setq _left_ankle_pitch __left_ankle_pitch)) _left_ankle_pitch)
  (:left_ankle_roll
   (&optional __left_ankle_roll)
   (if __left_ankle_roll (setq _left_ankle_roll __left_ankle_roll)) _left_ankle_roll)
  (:right_hip_yaw
   (&optional __right_hip_yaw)
   (if __right_hip_yaw (setq _right_hip_yaw __right_hip_yaw)) _right_hip_yaw)
  (:right_hip_roll
   (&optional __right_hip_roll)
   (if __right_hip_roll (setq _right_hip_roll __right_hip_roll)) _right_hip_roll)
  (:right_hip_pitch
   (&optional __right_hip_pitch)
   (if __right_hip_pitch (setq _right_hip_pitch __right_hip_pitch)) _right_hip_pitch)
  (:right_knee
   (&optional __right_knee)
   (if __right_knee (setq _right_knee __right_knee)) _right_knee)
  (:right_ankle_pitch
   (&optional __right_ankle_pitch)
   (if __right_ankle_pitch (setq _right_ankle_pitch __right_ankle_pitch)) _right_ankle_pitch)
  (:right_ankle_roll
   (&optional __right_ankle_roll)
   (if __right_ankle_roll (setq _right_ankle_roll __right_ankle_roll)) _right_ankle_roll)
  (:left_shoulder
   (&optional __left_shoulder)
   (if __left_shoulder (setq _left_shoulder __left_shoulder)) _left_shoulder)
  (:left_elbow
   (&optional __left_elbow)
   (if __left_elbow (setq _left_elbow __left_elbow)) _left_elbow)
  (:right_shoulder
   (&optional __right_shoulder)
   (if __right_shoulder (setq _right_shoulder __right_shoulder)) _right_shoulder)
  (:right_elbow
   (&optional __right_elbow)
   (if __right_elbow (setq _right_elbow __right_elbow)) _right_elbow)
  (:serialization-length
   ()
   (+
    ;; int32 _total
    4
    ;; int32 _id
    4
    ;; int32 _time
    4
    ;; float64 _left_hip_yaw
    8
    ;; float64 _left_hip_roll
    8
    ;; float64 _left_hip_pitch
    8
    ;; float64 _left_knee
    8
    ;; float64 _left_ankle_pitch
    8
    ;; float64 _left_ankle_roll
    8
    ;; float64 _right_hip_yaw
    8
    ;; float64 _right_hip_roll
    8
    ;; float64 _right_hip_pitch
    8
    ;; float64 _right_knee
    8
    ;; float64 _right_ankle_pitch
    8
    ;; float64 _right_ankle_roll
    8
    ;; float64 _left_shoulder
    8
    ;; float64 _left_elbow
    8
    ;; float64 _right_shoulder
    8
    ;; float64 _right_elbow
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _total
       (write-long _total s)
     ;; int32 _id
       (write-long _id s)
     ;; int32 _time
       (write-long _time s)
     ;; float64 _left_hip_yaw
       (sys::poke _left_hip_yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_hip_roll
       (sys::poke _left_hip_roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_hip_pitch
       (sys::poke _left_hip_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_knee
       (sys::poke _left_knee (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_ankle_pitch
       (sys::poke _left_ankle_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_ankle_roll
       (sys::poke _left_ankle_roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_hip_yaw
       (sys::poke _right_hip_yaw (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_hip_roll
       (sys::poke _right_hip_roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_hip_pitch
       (sys::poke _right_hip_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_knee
       (sys::poke _right_knee (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_ankle_pitch
       (sys::poke _right_ankle_pitch (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_ankle_roll
       (sys::poke _right_ankle_roll (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_shoulder
       (sys::poke _left_shoulder (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _left_elbow
       (sys::poke _left_elbow (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_shoulder
       (sys::poke _right_shoulder (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _right_elbow
       (sys::poke _right_elbow (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _total
     (setq _total (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _time
     (setq _time (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _left_hip_yaw
     (setq _left_hip_yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_hip_roll
     (setq _left_hip_roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_hip_pitch
     (setq _left_hip_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_knee
     (setq _left_knee (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_ankle_pitch
     (setq _left_ankle_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_ankle_roll
     (setq _left_ankle_roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_hip_yaw
     (setq _right_hip_yaw (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_hip_roll
     (setq _right_hip_roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_hip_pitch
     (setq _right_hip_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_knee
     (setq _right_knee (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_ankle_pitch
     (setq _right_ankle_pitch (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_ankle_roll
     (setq _right_ankle_roll (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_shoulder
     (setq _left_shoulder (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _left_elbow
     (setq _left_elbow (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_shoulder
     (setq _right_shoulder (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _right_elbow
     (setq _right_elbow (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get simulation::BodyAngles :md5sum-) "dbb3402eec6db5b7fff29a56bafe2d79")
(setf (get simulation::BodyAngles :datatype-) "simulation/BodyAngles")
(setf (get simulation::BodyAngles :definition-)
      "int32 total
int32 id
int32 time
float64 left_hip_yaw
float64 left_hip_roll
float64 left_hip_pitch
float64 left_knee
float64 left_ankle_pitch
float64 left_ankle_roll
float64 right_hip_yaw
float64 right_hip_roll
float64 right_hip_pitch
float64 right_knee
float64 right_ankle_pitch
float64 right_ankle_roll
float64 left_shoulder
float64 left_elbow
float64 right_shoulder
float64 right_elbow
")



(provide :simulation/BodyAngles "dbb3402eec6db5b7fff29a56bafe2d79")


