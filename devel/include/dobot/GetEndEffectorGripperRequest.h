// Generated by gencpp from file dobot/GetEndEffectorGripperRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETENDEFFECTORGRIPPERREQUEST_H
#define DOBOT_MESSAGE_GETENDEFFECTORGRIPPERREQUEST_H


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
struct GetEndEffectorGripperRequest_
{
  typedef GetEndEffectorGripperRequest_<ContainerAllocator> Type;

  GetEndEffectorGripperRequest_()
    {
    }
  GetEndEffectorGripperRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetEndEffectorGripperRequest_

typedef ::dobot::GetEndEffectorGripperRequest_<std::allocator<void> > GetEndEffectorGripperRequest;

typedef boost::shared_ptr< ::dobot::GetEndEffectorGripperRequest > GetEndEffectorGripperRequestPtr;
typedef boost::shared_ptr< ::dobot::GetEndEffectorGripperRequest const> GetEndEffectorGripperRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetEndEffectorGripperRequest";
  }

  static const char* value(const ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetEndEffectorGripperRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetEndEffectorGripperRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETENDEFFECTORGRIPPERREQUEST_H
