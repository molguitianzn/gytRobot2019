
(cl:in-package :asdf)

(defsystem "game_ctrl-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "TeamInfo" :depends-on ("_package_TeamInfo"))
    (:file "_package_TeamInfo" :depends-on ("_package"))
  ))