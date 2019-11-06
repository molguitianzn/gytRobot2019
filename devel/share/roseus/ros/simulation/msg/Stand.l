;; Auto-generated. Do not edit!


(when (boundp 'simulation::Stand)
  (if (not (find-package "SIMULATION"))
    (make-package "SIMULATION"))
  (shadow 'Stand (find-package "SIMULATION")))
(unless (find-package "SIMULATION::STAND")
  (make-package "SIMULATION::STAND"))

(in-package "ROS")
;;//! \htmlinclude Stand.msg.html


(defclass simulation::Stand
  :super ros::object
  :slots (_red _blue ))

(defmethod simulation::Stand
  (:init
   (&key
    ((:red __red) nil)
    ((:blue __blue) nil)
    )
   (send-super :init)
   (setq _red __red)
   (setq _blue __blue)
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
    ;; bool _red
    1
    ;; bool _blue
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _red
       (if _red (write-byte -1 s) (write-byte 0 s))
     ;; bool _blue
       (if _blue (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _red
     (setq _red (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _blue
     (setq _blue (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get simulation::Stand :md5sum-) "86ceb06532353ac324c209f78172bff1")
(setf (get simulation::Stand :datatype-) "simulation/Stand")
(setf (get simulation::Stand :definition-)
      "bool red
bool blue
")



(provide :simulation/Stand "86ceb06532353ac324c209f78172bff1")


