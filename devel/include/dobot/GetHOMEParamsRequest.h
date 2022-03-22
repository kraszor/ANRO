// Generated by gencpp from file dobot/GetHOMEParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETHOMEPARAMSREQUEST_H
#define DOBOT_MESSAGE_GETHOMEPARAMSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct GetHOMEParamsRequest_
{
  typedef GetHOMEParamsRequest_<ContainerAllocator> Type;

  GetHOMEParamsRequest_()
    {
    }
  GetHOMEParamsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetHOMEParamsRequest_

typedef ::dobot::GetHOMEParamsRequest_<std::allocator<void> > GetHOMEParamsRequest;

typedef boost::shared_ptr< ::dobot::GetHOMEParamsRequest > GetHOMEParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::GetHOMEParamsRequest const> GetHOMEParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetHOMEParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetHOMEParamsRequest";
  }

  static const char* value(const ::dobot::GetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::GetHOMEParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetHOMEParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetHOMEParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetHOMEParamsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETHOMEPARAMSREQUEST_H
