// Generated by gencpp from file dobot/GetPTPCommonParams.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETPTPCOMMONPARAMS_H
#define DOBOT_MESSAGE_GETPTPCOMMONPARAMS_H

#include <ros/service_traits.h>


#include <dobot/GetPTPCommonParamsRequest.h>
#include <dobot/GetPTPCommonParamsResponse.h>


namespace dobot
{

struct GetPTPCommonParams
{

typedef GetPTPCommonParamsRequest Request;
typedef GetPTPCommonParamsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPTPCommonParams
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetPTPCommonParams > {
  static const char* value()
  {
    return "ccb42558fae0625dedee5118e81add9a";
  }

  static const char* value(const ::dobot::GetPTPCommonParams&) { return value(); }
};

template<>
struct DataType< ::dobot::GetPTPCommonParams > {
  static const char* value()
  {
    return "dobot/GetPTPCommonParams";
  }

  static const char* value(const ::dobot::GetPTPCommonParams&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetPTPCommonParamsRequest> should match
// service_traits::MD5Sum< ::dobot::GetPTPCommonParams >
template<>
struct MD5Sum< ::dobot::GetPTPCommonParamsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetPTPCommonParams >::value();
  }
  static const char* value(const ::dobot::GetPTPCommonParamsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetPTPCommonParamsRequest> should match
// service_traits::DataType< ::dobot::GetPTPCommonParams >
template<>
struct DataType< ::dobot::GetPTPCommonParamsRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetPTPCommonParams >::value();
  }
  static const char* value(const ::dobot::GetPTPCommonParamsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetPTPCommonParamsResponse> should match
// service_traits::MD5Sum< ::dobot::GetPTPCommonParams >
template<>
struct MD5Sum< ::dobot::GetPTPCommonParamsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetPTPCommonParams >::value();
  }
  static const char* value(const ::dobot::GetPTPCommonParamsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetPTPCommonParamsResponse> should match
// service_traits::DataType< ::dobot::GetPTPCommonParams >
template<>
struct DataType< ::dobot::GetPTPCommonParamsResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetPTPCommonParams >::value();
  }
  static const char* value(const ::dobot::GetPTPCommonParamsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETPTPCOMMONPARAMS_H
