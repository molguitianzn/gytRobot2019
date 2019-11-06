;; Auto-generated. Do not edit!


(when (boundp 'game_ctrl::TeamInfo)
  (if (not (find-package "GAME_CTRL"))
    (make-package "GAME_CTRL"))
  (shadow 'TeamInfo (find-package "GAME_CTRL")))
(unless (find-package "GAME_CTRL::TEAMINFO")
  (make-package "GAME_CTRL::TEAMINFO"))
(unless (find-package "GAME_CTRL::TEAMINFOREQUEST")
  (make-package "GAME_CTRL::TEAMINFOREQUEST"))
(unless (find-package "GAME_CTRL::TEAMINFORESPONSE")
  (make-package "GAME_CTRL::TEAMINFORESPONSE"))

(in-package "ROS")





(defclass game_ctrl::TeamInfoRequest
  :super ros::object
  :slots (_teamname ))

(defmethod game_ctrl::TeamInfoRequest
  (:init
   (&key
    ((:teamname __teamname) "")
    )
   (send-super :init)
   (setq _teamname (string __teamname))
   self)
  (:teamname
   (&optional __teamname)
   (if __teamname (setq _teamname __teamname)) _teamname)
  (:serialization-length
   ()
   (+
    ;; string _teamname
    4 (length _teamname)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _teamname
       (write-long (length _teamname) s) (princ _teamname s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _teamname
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _teamname (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass game_ctrl::TeamInfoResponse
  :super ros::object
  :slots (_team ))

(defmethod game_ctrl::TeamInfoResponse
  (:init
   (&key
    ((:team __team) "")
    )
   (send-super :init)
   (setq _team (string __team))
   self)
  (:team
   (&optional __team)
   (if __team (setq _team __team)) _team)
  (:serialization-length
   ()
   (+
    ;; string _team
    4 (length _team)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _team
       (write-long (length _team) s) (princ _team s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _team
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _team (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass game_ctrl::TeamInfo
  :super ros::object
  :slots ())

(setf (get game_ctrl::TeamInfo :md5sum-) "967db2d47319aba09eabb132f932430e")
(setf (get game_ctrl::TeamInfo :datatype-) "game_ctrl/TeamInfo")
(setf (get game_ctrl::TeamInfo :request) game_ctrl::TeamInfoRequest)
(setf (get game_ctrl::TeamInfo :response) game_ctrl::TeamInfoResponse)

(defmethod game_ctrl::TeamInfoRequest
  (:response () (instance game_ctrl::TeamInfoResponse :init)))

(setf (get game_ctrl::TeamInfoRequest :md5sum-) "967db2d47319aba09eabb132f932430e")
(setf (get game_ctrl::TeamInfoRequest :datatype-) "game_ctrl/TeamInfoRequest")
(setf (get game_ctrl::TeamInfoRequest :definition-)
      "string teamname
---
string team
")

(setf (get game_ctrl::TeamInfoResponse :md5sum-) "967db2d47319aba09eabb132f932430e")
(setf (get game_ctrl::TeamInfoResponse :datatype-) "game_ctrl/TeamInfoResponse")
(setf (get game_ctrl::TeamInfoResponse :definition-)
      "string teamname
---
string team
")



(provide :game_ctrl/TeamInfo "967db2d47319aba09eabb132f932430e")


