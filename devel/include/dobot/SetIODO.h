// Generated by gencpp from file dobot/SetIODO.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETIODO_H
#define DOBOT_MESSAGE_SETIODO_H

#include <ros/service_traits.h>


#include <dobot/SetIODORequest.h>
#include <dobot/SetIODOResponse.h>


namespace dobot
{

struct SetIODO
{

typedef SetIODORequest Request;
typedef SetIODOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetIODO
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetIODO > {
  static const char* value()
  {
    return "1ba1fdd7d67ee9bbca1ff95166a02cb2";
  }

  static const char* value(const ::dobot::SetIODO&) { return value(); }
};

template<>
struct DataType< ::dobot::SetIODO > {
  static const char* value()
  {
    return "dobot/SetIODO";
  }

  static const char* value(const ::dobot::SetIODO&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetIODORequest> should match
// service_traits::MD5Sum< ::dobot::SetIODO >
template<>
struct MD5Sum< ::dobot::SetIODORequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetIODO >::value();
  }
  static const char* value(const ::dobot::SetIODORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetIODORequest> should match
// service_traits::DataType< ::dobot::SetIODO >
template<>
struct DataType< ::dobot::SetIODORequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetIODO >::value();
  }
  static const char* value(const ::dobot::SetIODORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetIODOResponse> should match
// service_traits::MD5Sum< ::dobot::SetIODO >
template<>
struct MD5Sum< ::dobot::SetIODOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetIODO >::value();
  }
  static const char* value(const ::dobot::SetIODOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetIODOResponse> should match
// service_traits::DataType< ::dobot::SetIODO >
template<>
struct DataType< ::dobot::SetIODOResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetIODO >::value();
  }
  static const char* value(const ::dobot::SetIODOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETIODO_H
