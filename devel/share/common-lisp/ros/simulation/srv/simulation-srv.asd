
(cl:in-package :asdf)

(defsystem "simulation-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ImageInfo" :depends-on ("_package_ImageInfo"))
    (:file "_package_ImageInfo" :depends-on ("_package"))
  ))