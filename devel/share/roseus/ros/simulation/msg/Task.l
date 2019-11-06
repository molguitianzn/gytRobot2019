;; Auto-generated. Do not edit!


(when (boundp 'simulation::Task)
  (if (not (find-package "SIMULATION"))
    (make-package "SIMULATION"))
  (shadow 'Task (find-package "SIMULATION")))
(unless (find-package "SIMULATION::TASK")
  (make-package "SIMULATION::TASK"))

(in-package "ROS")
;;//! \htmlinclude Task.msg.html


(intern "*TASK_NONE*" (find-package "SIMULATION::TASK"))
(shadow '*TASK_NONE* (find-package "SIMULATION::TASK"))
(defconstant simulation::Task::*TASK_NONE* 0)
(intern "*TASK_WALK*" (find-package "SIMULATION::TASK"))
(shadow '*TASK_WALK* (find-package "SIMULATION::TASK"))
(defconstant simulation::Task::*TASK_WALK* 1)
(intern "*TASK_KICK*" (find-package "SIMULATION::TASK"))
(shadow '*TASK_KICK* (find-package "SIMULATION::TASK"))
(defconstant simulation::Task::*TASK_KICK* 2)
(defclass simulation::Task
  :super ros::object
  :slots (_type _step _lateral _turn ))

(defmethod simulation::Task
  (:init
   (&key
    ((:type __type) 0)
    ((:step __step) 0.0)
    ((:lateral __lateral) 0.0)
    ((:turn __turn) 0.0)
    )
   (send-super :init)
   (setq _type (round __type))
   (setq _step (float __step))
   (setq _lateral (float __lateral))
   (setq _turn (float __turn))
   self)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:step
   (&optional __step)
   (if __step (setq _step __step)) _step)
  (:lateral
   (&optional __lateral)
   (if __lateral (setq _lateral __lateral)) _lateral)
  (:turn
   (&optional __turn)
   (if __turn (setq _turn __turn)) _turn)
  (:serialization-length
   ()
   (+
    ;; int32 _type
    4
    ;; float64 _step
    8
    ;; float64 _lateral
    8
    ;; float64 _turn
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _type
       (write-long _type s)
     ;; float64 _step
       (sys::poke _step (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lateral
       (sys::poke _lateral (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _turn
       (sys::poke _turn (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _type
     (setq _type (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _step
     (setq _step (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lateral
     (setq _lateral (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _turn
     (setq _turn (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get simulation::Task :md5sum-) "19ba3c70aeefc25e705489e4597513cc")
(setf (get simulation::Task :datatype-) "simulation/Task")
(setf (get simulation::Task :definition-)
      "int32 type
float64 step
float64 lateral
float64 turn

int32 TASK_NONE = 0
int32 TASK_WALK = 1
int32 TASK_KICK = 2

")



(provide :simulation/Task "19ba3c70aeefc25e705489e4597513cc")


