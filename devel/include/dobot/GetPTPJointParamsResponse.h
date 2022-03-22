// Generated by gencpp from file dobot/GetPTPJointParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETPTPJOINTPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETPTPJOINTPARAMSRESPONSE_H


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
struct GetPTPJointParamsResponse_
{
  typedef GetPTPJointParamsResponse_<ContainerAllocator> Type;

  GetPTPJointParamsResponse_()
    : result(0)
    , velocity()
    , acceleration()  {
    }
  GetPTPJointParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , velocity(_alloc)
    , acceleration(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acceleration_type;
  _acceleration_type acceleration;





  typedef boost::shared_ptr< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPTPJointParamsResponse_

typedef ::dobot::GetPTPJointParamsResponse_<std::allocator<void> > GetPTPJointParamsResponse;

typedef boost::shared_ptr< ::dobot::GetPTPJointParamsResponse > GetPTPJointParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetPTPJointParamsResponse const> GetPTPJointParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.velocity == rhs.velocity &&
    lhs.acceleration == rhs.acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator1> & lhs, const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46bf5bf78db0edaa99dd346e0307937e";
  }

  static const char* value(const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46bf5bf78db0edaaULL;
  static const uint64_t static_value2 = 0x99dd346e0307937eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetPTPJointParamsResponse";
  }

  static const char* value(const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n"
"float32[] velocity\n"
"float32[] acceleration\n"
"\n"
;
  }

  static const char* value(const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.velocity);
      stream.next(m.acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPTPJointParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetPTPJointParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetPTPJointParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "acceleration[]" << std::endl;
    for (size_t i = 0; i < v.acceleration.size(); ++i)
    {
      s << indent << "  acceleration[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acceleration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETPTPJOINTPARAMSRESPONSE_H
