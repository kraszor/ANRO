// Generated by gencpp from file dobot/SetQueuedCmdStopExec.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXEC_H
#define DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXEC_H

#include <ros/service_traits.h>


#include <dobot/SetQueuedCmdStopExecRequest.h>
#include <dobot/SetQueuedCmdStopExecResponse.h>


namespace dobot
{

struct SetQueuedCmdStopExec
{

typedef SetQueuedCmdStopExecRequest Request;
typedef SetQueuedCmdStopExecResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetQueuedCmdStopExec
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetQueuedCmdStopExec > {
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExec&) { return value(); }
};

template<>
struct DataType< ::dobot::SetQueuedCmdStopExec > {
  static const char* value()
  {
    return "dobot/SetQueuedCmdStopExec";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExec&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetQueuedCmdStopExecRequest> should match
// service_traits::MD5Sum< ::dobot::SetQueuedCmdStopExec >
template<>
struct MD5Sum< ::dobot::SetQueuedCmdStopExecRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdStopExecRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdStopExecRequest> should match
// service_traits::DataType< ::dobot::SetQueuedCmdStopExec >
template<>
struct DataType< ::dobot::SetQueuedCmdStopExecRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdStopExecRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetQueuedCmdStopExecResponse> should match
// service_traits::MD5Sum< ::dobot::SetQueuedCmdStopExec >
template<>
struct MD5Sum< ::dobot::SetQueuedCmdStopExecResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetQueuedCmdStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdStopExecResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetQueuedCmdStopExecResponse> should match
// service_traits::DataType< ::dobot::SetQueuedCmdStopExec >
template<>
struct DataType< ::dobot::SetQueuedCmdStopExecResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetQueuedCmdStopExec >::value();
  }
  static const char* value(const ::dobot::SetQueuedCmdStopExecResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXEC_H
