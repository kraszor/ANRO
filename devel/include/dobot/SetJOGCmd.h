// Generated by gencpp from file dobot/SetJOGCmd.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETJOGCMD_H
#define DOBOT_MESSAGE_SETJOGCMD_H

#include <ros/service_traits.h>


#include <dobot/SetJOGCmdRequest.h>
#include <dobot/SetJOGCmdResponse.h>


namespace dobot
{

struct SetJOGCmd
{

typedef SetJOGCmdRequest Request;
typedef SetJOGCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetJOGCmd
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetJOGCmd > {
  static const char* value()
  {
    return "1b7c1bd2f60c0408e6705df335544340";
  }

  static const char* value(const ::dobot::SetJOGCmd&) { return value(); }
};

template<>
struct DataType< ::dobot::SetJOGCmd > {
  static const char* value()
  {
    return "dobot/SetJOGCmd";
  }

  static const char* value(const ::dobot::SetJOGCmd&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetJOGCmdRequest> should match
// service_traits::MD5Sum< ::dobot::SetJOGCmd >
template<>
struct MD5Sum< ::dobot::SetJOGCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetJOGCmd >::value();
  }
  static const char* value(const ::dobot::SetJOGCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetJOGCmdRequest> should match
// service_traits::DataType< ::dobot::SetJOGCmd >
template<>
struct DataType< ::dobot::SetJOGCmdRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetJOGCmd >::value();
  }
  static const char* value(const ::dobot::SetJOGCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetJOGCmdResponse> should match
// service_traits::MD5Sum< ::dobot::SetJOGCmd >
template<>
struct MD5Sum< ::dobot::SetJOGCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetJOGCmd >::value();
  }
  static const char* value(const ::dobot::SetJOGCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetJOGCmdResponse> should match
// service_traits::DataType< ::dobot::SetJOGCmd >
template<>
struct DataType< ::dobot::SetJOGCmdResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetJOGCmd >::value();
  }
  static const char* value(const ::dobot::SetJOGCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETJOGCMD_H
