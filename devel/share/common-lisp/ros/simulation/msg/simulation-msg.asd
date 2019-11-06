
(cl:in-package :asdf)

(defsystem "simulation-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "BodyAngles" :depends-on ("_package_BodyAngles"))
    (:file "_package_BodyAngles" :depends-on ("_package"))
    (:file "GameData" :depends-on ("_package_GameData"))
    (:file "_package_GameData" :depends-on ("_package"))
    (:file "LegAngles" :depends-on ("_package_LegAngles"))
    (:file "_package_LegAngles" :depends-on ("_package"))
    (:file "Stand" :depends-on ("_package_Stand"))
    (:file "_package_Stand" :depends-on ("_package"))
    (:file "Task" :depends-on ("_package_Task"))
    (:file "_package_Task" :depends-on ("_package"))
  ))