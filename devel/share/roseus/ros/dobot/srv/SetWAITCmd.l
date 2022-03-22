;; Auto-generated. Do not edit!


(when (boundp 'dobot::SetWAITCmd)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'SetWAITCmd (find-package "DOBOT")))
(unless (find-package "DOBOT::SETWAITCMD")
  (make-package "DOBOT::SETWAITCMD"))
(unless (find-package "DOBOT::SETWAITCMDREQUEST")
  (make-package "DOBOT::SETWAITCMDREQUEST"))
(unless (find-package "DOBOT::SETWAITCMDRESPONSE")
  (make-package "DOBOT::SETWAITCMDRESPONSE"))

(in-package "ROS")





(defclass dobot::SetWAITCmdRequest
  :super ros::object
  :slots (_timeout _isQueued ))

(defmethod dobot::SetWAITCmdRequest
  (:init
   (&key
    ((:timeout __timeout) 0)
    ((:isQueued __isQueued) nil)
    )
   (send-super :init)
   (setq _timeout (round __timeout))
   (setq _isQueued __isQueued)
   self)
  (:timeout
   (&optional __timeout)
   (if __timeout (setq _timeout __timeout)) _timeout)
  (:isQueued
   (&optional __isQueued)
   (if __isQueued (setq _isQueued __isQueued)) _isQueued)
  (:serialization-length
   ()
   (+
    ;; uint32 _timeout
    4
    ;; bool _isQueued
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _timeout
       (write-long _timeout s)
     ;; bool _isQueued
       (if _isQueued (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _timeout
     (setq _timeout (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _isQueued
     (setq _isQueued (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::SetWAITCmdResponse
  :super ros::object
  :slots (_result _queuedCmdIndex ))

(defmethod dobot::SetWAITCmdResponse
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

(defclass dobot::SetWAITCmd
  :super ros::object
  :slots ())

(setf (get dobot::SetWAITCmd :md5sum-) "fb785ec2a4d8c6d70ae89fb0f615f4c8")
(setf (get dobot::SetWAITCmd :datatype-) "dobot/SetWAITCmd")
(setf (get dobot::SetWAITCmd :request) dobot::SetWAITCmdRequest)
(setf (get dobot::SetWAITCmd :response) dobot::SetWAITCmdResponse)

(defmethod dobot::SetWAITCmdRequest
  (:response () (instance dobot::SetWAITCmdResponse :init)))

(setf (get dobot::SetWAITCmdRequest :md5sum-) "fb785ec2a4d8c6d70ae89fb0f615f4c8")
(setf (get dobot::SetWAITCmdRequest :datatype-) "dobot/SetWAITCmdRequest")
(setf (get dobot::SetWAITCmdRequest :definition-)
      "uint32 timeout
bool isQueued
---
int32 result
uint64 queuedCmdIndex

")

(setf (get dobot::SetWAITCmdResponse :md5sum-) "fb785ec2a4d8c6d70ae89fb0f615f4c8")
(setf (get dobot::SetWAITCmdResponse :datatype-) "dobot/SetWAITCmdResponse")
(setf (get dobot::SetWAITCmdResponse :definition-)
      "uint32 timeout
bool isQueued
---
int32 result
uint64 queuedCmdIndex

")



(provide :dobot/SetWAITCmd "fb785ec2a4d8c6d70ae89fb0f615f4c8")


