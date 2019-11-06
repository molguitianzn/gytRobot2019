;; Auto-generated. Do not edit!


(when (boundp 'simulation::GameData)
  (if (not (find-package "SIMULATION"))
    (make-package "SIMULATION"))
  (shadow 'GameData (find-package "SIMULATION")))
(unless (find-package "SIMULATION::GAMEDATA")
  (make-package "SIMULATION::GAMEDATA"))

(in-package "ROS")
;;//! \htmlinclude GameData.msg.html


(intern "*MODE_NORM*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*MODE_NORM* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*MODE_NORM* 1)
(intern "*MODE_KICK*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*MODE_KICK* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*MODE_KICK* 2)
(intern "*STATE_INIT*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*STATE_INIT* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*STATE_INIT* 0)
(intern "*STATE_READY*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*STATE_READY* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*STATE_READY* 1)
(intern "*STATE_PLAY*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*STATE_PLAY* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*STATE_PLAY* 2)
(intern "*STATE_PAUSE*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*STATE_PAUSE* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*STATE_PAUSE* 3)
(intern "*STATE_END*" (find-package "SIMULATION::GAMEDATA"))
(shadow '*STATE_END* (find-package "SIMULATION::GAMEDATA"))
(defconstant simulation::GameData::*STATE_END* 4)
(defclass simulation::GameData
  :super ros::object
  :slots (_mode _state _remainTime _secondTime _redScore _blueScore ))

(defmethod simulation::GameData
  (:init
   (&key
    ((:mode __mode) 0)
    ((:state __state) 0)
    ((:remainTime __remainTime) 0)
    ((:secondTime __secondTime) 0)
    ((:redScore __redScore) 0)
    ((:blueScore __blueScore) 0)
    )
   (send-super :init)
   (setq _mode (round __mode))
   (setq _state (round __state))
   (setq _remainTime (round __remainTime))
   (setq _secondTime (round __secondTime))
   (setq _redScore (round __redScore))
   (setq _blueScore (round __blueScore))
   self)
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:remainTime
   (&optional __remainTime)
   (if __remainTime (setq _remainTime __remainTime)) _remainTime)
  (:secondTime
   (&optional __secondTime)
   (if __secondTime (setq _secondTime __secondTime)) _secondTime)
  (:redScore
   (&optional __redScore)
   (if __redScore (setq _redScore __redScore)) _redScore)
  (:blueScore
   (&optional __blueScore)
   (if __blueScore (setq _blueScore __blueScore)) _blueScore)
  (:serialization-length
   ()
   (+
    ;; int32 _mode
    4
    ;; int32 _state
    4
    ;; int32 _remainTime
    4
    ;; int32 _secondTime
    4
    ;; int32 _redScore
    4
    ;; int32 _blueScore
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _mode
       (write-long _mode s)
     ;; int32 _state
       (write-long _state s)
     ;; int32 _remainTime
       (write-long _remainTime s)
     ;; int32 _secondTime
       (write-long _secondTime s)
     ;; int32 _redScore
       (write-long _redScore s)
     ;; int32 _blueScore
       (write-long _blueScore s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _mode
     (setq _mode (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _state
     (setq _state (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _remainTime
     (setq _remainTime (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _secondTime
     (setq _secondTime (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _redScore
     (setq _redScore (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _blueScore
     (setq _blueScore (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get simulation::GameData :md5sum-) "252f7aa3551cd9e19b1c2d0f842ab93b")
(setf (get simulation::GameData :datatype-) "simulation/GameData")
(setf (get simulation::GameData :definition-)
      "int32 mode

int32 MODE_NORM=1
int32 MODE_KICK=2

int32 state
int32 remainTime
int32 secondTime
int32 redScore
int32 blueScore

int32 STATE_INIT = 0
int32 STATE_READY = 1
int32 STATE_PLAY = 2
int32 STATE_PAUSE = 3
int32 STATE_END = 4

")



(provide :simulation/GameData "252f7aa3551cd9e19b1c2d0f842ab93b")


