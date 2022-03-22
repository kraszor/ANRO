;; Auto-generated. Do not edit!


(when (boundp 'dobot::SetHOMECmd)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'SetHOMECmd (find-package "DOBOT")))
(unless (find-package "DOBOT::SETHOMECMD")
  (make-package "DOBOT::SETHOMECMD"))
(unless (find-package "DOBOT::SETHOMECMDREQUEST")
  (make-package "DOBOT::SETHOMECMDREQUEST"))
(unless (find-package "DOBOT::SETHOMECMDRESPONSE")
  (make-package "DOBOT::SETHOMECMDRESPONSE"))

(in-package "ROS")





(defclass dobot::SetHOMECmdRequest
  :super ros::object
  :slots (_isQueued ))

(defmethod dobot::SetHOMECmdRequest
  (:init
   (&key
    ((:isQueued __isQueued) nil)
    )
   (send-super :init)
   (setq _isQueued __isQueued)
   self)
  (:isQueued
   (&optional __isQueued)
   (if __isQueued (setq _isQueued __isQueued)) _isQueued)
  (:serialization-length
   ()
   (+
    ;; bool _isQueued
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _isQueued
       (if _isQueued (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _isQueued
     (setq _isQueued (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::SetHOMECmdResponse
  :super ros::object
  :slots (_result _queuedCmdIndex ))

(defmethod dobot::SetHOMECmdResponse
  (:init
   (&key
    ((:result __result) 0)
    ((:queuedCmdIndex __queuedCmdIndex) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   (setq _queuedCmdIndex (round __queuedCmdIndex))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:queuedCmdIndex
   (&optional __queuedCmdIndex)
   (if __queuedCmdIndex (setq _queuedCmdIndex __queuedCmdIndex)) _queuedCmdIndex)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ;; uint64 _queuedCmdIndex
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;; uint64 _queuedCmdIndex
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _queuedCmdIndex (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _queuedCmdIndex) (= (length (_queuedCmdIndex . bv)) 2)) ;; bignum
              (write-long (ash (elt (_queuedCmdIndex . bv) 0) 0) s)
              (write-long (ash (elt (_queuedCmdIndex . bv) 1) -1) s))
             ((and (class _queuedCmdIndex) (= (length (_queuedCmdIndex . bv)) 1)) ;; big1
              (write-long (elt (_queuedCmdIndex . bv) 0) s)
              (write-long (if (>= _queuedCmdIndex 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _queuedCmdIndex s)(write-long (if (>= _queuedCmdIndex 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint64 _queuedCmdIndex
     
#+(or :alpha :irix6 :x86_64)
      (setf _queuedCmdIndex (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _queuedCmdIndex (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass dobot::SetHOMECmd
  :super ros::object
  :slots ())

(setf (get dobot::SetHOMECmd :md5sum-) "1426e222c26eea762d704ddc12e84ae4")
(setf (get dobot::SetHOMECmd :datatype-) "dobot/SetHOMECmd")
(setf (get dobot::SetHOMECmd :request) dobot::SetHOMECmdRequest)
(setf (get dobot::SetHOMECmd :response) dobot::SetHOMECmdResponse)

(defmethod dobot::SetHOMECmdRequest
  (:response () (instance dobot::SetHOMECmdResponse :init)))

(setf (get dobot::SetHOMECmdRequest :md5sum-) "1426e222c26eea762d704ddc12e84ae4")
(setf (get dobot::SetHOMECmdRequest :datatype-) "dobot/SetHOMECmdRequest")
(setf (get dobot::SetHOMECmdRequest :definition-)
      "bool isQueued
---
int32 result
uint64 queuedCmdIndex

")

(setf (get dobot::SetHOMECmdResponse :md5sum-) "1426e222c26eea762d704ddc12e84ae4")
(setf (get dobot::SetHOMECmdResponse :datatype-) "dobot/SetHOMECmdResponse")
(setf (get dobot::SetHOMECmdResponse :definition-)
      "bool isQueued
---
int32 result
uint64 queuedCmdIndex

")



(provide :dobot/SetHOMECmd "1426e222c26eea762d704ddc12e84ae4")


