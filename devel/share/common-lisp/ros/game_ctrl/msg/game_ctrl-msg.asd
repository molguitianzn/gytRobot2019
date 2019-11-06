
(cl:in-package :asdf)

(defsystem "game_ctrl-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Score" :depends-on ("_package_Score"))
    (:file "_package_Score" :depends-on ("_package"))
  ))