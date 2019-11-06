;; Auto-generated. Do not edit!


(when (boundp 'game_ctrl::Score)
  (if (not (find-package "GAME_CTRL"))
    (make-package "GAME_CTRL"))
  (shadow 'Score (find-package "GAME_CTRL")))
(unless (find-package "GAME_CTRL::SCORE")
  (make-package "GAME_CTRL::SCORE"))

(in-package "ROS")
;;//! \htmlinclude Score.msg.html


(defclass game_ctrl::Score
  :super ros::object
  :slots (_red _blue ))

(defmethod game_ctrl::Score
  (:init
   (&key
    ((:red __red) 0)
    ((:blue __blue) 0)
    )
   (send-super :init)
   (setq _red (round __red))
   (setq _blue (round __blue))
   self)
  (:red
   (&optional __red)
   (if __red (setq _red __red)) _red)
  (:blue
   (&optional __blue)
   (if __blue (setq _blue __blue)) _blue)
  (:serialization-length
   ()
   (+
    ;; int32 _red
    4
    ;; int32 _blue
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _red
       (write-long _red s)
     ;; int32 _blue
       (write-long _blue s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _red
     (setq _red (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _blue
     (setq _blue (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get game_ctrl::Score :md5sum-) "135afbe6587fb4d621b00a65873cc59e")
(setf (get game_ctrl::Score :datatype-) "game_ctrl/Score")
(setf (get game_ctrl::Score :definition-)
      "int32 red
int32 blue
")



(provide :game_ctrl/Score "135afbe6587fb4d621b00a65873cc59e")


