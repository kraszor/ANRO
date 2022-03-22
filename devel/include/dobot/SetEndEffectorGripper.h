// Generated by gencpp from file dobot/SetEndEffectorGripper.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETENDEFFECTORGRIPPER_H
#define DOBOT_MESSAGE_SETENDEFFECTORGRIPPER_H

#include <ros/service_traits.h>


#include <dobot/SetEndEffectorGripperRequest.h>
#include <dobot/SetEndEffectorGripperResponse.h>


namespace dobot
{

struct SetEndEffectorGripper
{

typedef SetEndEffectorGripperRequest Request;
typedef SetEndEffectorGripperResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetEndEffectorGripper
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetEndEffectorGripper > {
  static const char* value()
  {
    return "1d911d0abb06ff63cb1e204d00f0ce77";
  }

  static const char* value(const ::dobot::SetEndEffectorGripper&) { return value(); }
};

template<>
struct DataType< ::dobot::SetEndEffectorGripper > {
  static const char* value()
  {
    return "dobot/SetEndEffectorGripper";
  }

  static const char* value(const ::dobot::SetEndEffectorGripper&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetEndEffectorGripperRequest> should match
// service_traits::MD5Sum< ::dobot::SetEndEffectorGripper >
template<>
struct MD5Sum< ::dobot::SetEndEffectorGripperRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorGripperRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetEndEffectorGripperRequest> should match
// service_traits::DataType< ::dobot::SetEndEffectorGripper >
template<>
struct DataType< ::dobot::SetEndEffectorGripperRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorGripperRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetEndEffectorGripperResponse> should match
// service_traits::MD5Sum< ::dobot::SetEndEffectorGripper >
template<>
struct MD5Sum< ::dobot::SetEndEffectorGripperResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorGripperResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetEndEffectorGripperResponse> should match
// service_traits::DataType< ::dobot::SetEndEffectorGripper >
template<>
struct DataType< ::dobot::SetEndEffectorGripperResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetEndEffectorGripper >::value();
  }
  static const char* value(const ::dobot::SetEndEffectorGripperResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETENDEFFECTORGRIPPER_H