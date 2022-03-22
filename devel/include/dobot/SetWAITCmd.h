// Generated by gencpp from file dobot/SetWAITCmd.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETWAITCMD_H
#define DOBOT_MESSAGE_SETWAITCMD_H

#include <ros/service_traits.h>


#include <dobot/SetWAITCmdRequest.h>
#include <dobot/SetWAITCmdResponse.h>


namespace dobot
{

struct SetWAITCmd
{

typedef SetWAITCmdRequest Request;
typedef SetWAITCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetWAITCmd
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetWAITCmd > {
  static const char* value()
  {
    return "fb785ec2a4d8c6d70ae89fb0f615f4c8";
  }

  static const char* value(const ::dobot::SetWAITCmd&) { return value(); }
};

template<>
struct DataType< ::dobot::SetWAITCmd > {
  static const char* value()
  {
    return "dobot/SetWAITCmd";
  }

  static const char* value(const ::dobot::SetWAITCmd&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetWAITCmdRequest> should match
// service_traits::MD5Sum< ::dobot::SetWAITCmd >
template<>
struct MD5Sum< ::dobot::SetWAITCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetWAITCmd >::value();
  }
  static const char* value(const ::dobot::SetWAITCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetWAITCmdRequest> should match
// service_traits::DataType< ::dobot::SetWAITCmd >
template<>
struct DataType< ::dobot::SetWAITCmdRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetWAITCmd >::value();
  }
  static const char* value(const ::dobot::SetWAITCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetWAITCmdResponse> should match
// service_traits::MD5Sum< ::dobot::SetWAITCmd >
template<>
struct MD5Sum< ::dobot::SetWAITCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetWAITCmd >::value();
  }
  static const char* value(const ::dobot::SetWAITCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetWAITCmdResponse> should match
// service_traits::DataType< ::dobot::SetWAITCmd >
template<>
struct DataType< ::dobot::SetWAITCmdResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetWAITCmd >::value();
  }
  static const char* value(const ::dobot::SetWAITCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETWAITCMD_H
