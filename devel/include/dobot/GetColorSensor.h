// Generated by gencpp from file dobot/GetColorSensor.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETCOLORSENSOR_H
#define DOBOT_MESSAGE_GETCOLORSENSOR_H

#include <ros/service_traits.h>


#include <dobot/GetColorSensorRequest.h>
#include <dobot/GetColorSensorResponse.h>


namespace dobot
{

struct GetColorSensor
{

typedef GetColorSensorRequest Request;
typedef GetColorSensorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetColorSensor
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetColorSensor > {
  static const char* value()
  {
    return "1596aa7baed44f60a5db0d6e3455a3e9";
  }

  static const char* value(const ::dobot::GetColorSensor&) { return value(); }
};

template<>
struct DataType< ::dobot::GetColorSensor > {
  static const char* value()
  {
    return "dobot/GetColorSensor";
  }

  static const char* value(const ::dobot::GetColorSensor&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetColorSensorRequest> should match
// service_traits::MD5Sum< ::dobot::GetColorSensor >
template<>
struct MD5Sum< ::dobot::GetColorSensorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetColorSensor >::value();
  }
  static const char* value(const ::dobot::GetColorSensorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetColorSensorRequest> should match
// service_traits::DataType< ::dobot::GetColorSensor >
template<>
struct DataType< ::dobot::GetColorSensorRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetColorSensor >::value();
  }
  static const char* value(const ::dobot::GetColorSensorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetColorSensorResponse> should match
// service_traits::MD5Sum< ::dobot::GetColorSensor >
template<>
struct MD5Sum< ::dobot::GetColorSensorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetColorSensor >::value();
  }
  static const char* value(const ::dobot::GetColorSensorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetColorSensorResponse> should match
// service_traits::DataType< ::dobot::GetColorSensor >
template<>
struct DataType< ::dobot::GetColorSensorResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetColorSensor >::value();
  }
  static const char* value(const ::dobot::GetColorSensorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETCOLORSENSOR_H
