// Generated by gencpp from file dobot/SetCPCmdRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETCPCMDREQUEST_H
#define DOBOT_MESSAGE_SETCPCMDREQUEST_H


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
struct SetCPCmdRequest_
{
  typedef SetCPCmdRequest_<ContainerAllocator> Type;

  SetCPCmdRequest_()
    : cpMode(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , velocity(0.0)  {
    }
  SetCPCmdRequest_(const ContainerAllocator& _alloc)
    : cpMode(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , velocity(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _cpMode_type;
  _cpMode_type cpMode;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::dobot::SetCPCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetCPCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCPCmdRequest_

typedef ::dobot::SetCPCmdRequest_<std::allocator<void> > SetCPCmdRequest;

typedef boost::shared_ptr< ::dobot::SetCPCmdRequest > SetCPCmdRequestPtr;
typedef boost::shared_ptr< ::dobot::SetCPCmdRequest const> SetCPCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetCPCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetCPCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetCPCmdRequest_<ContainerAllocator1> & lhs, const ::dobot::SetCPCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cpMode == rhs.cpMode &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetCPCmdRequest_<ContainerAllocator1> & lhs, const ::dobot::SetCPCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetCPCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetCPCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetCPCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b52be2f8d70c4a4a2952d74f424d9d8b";
  }

  static const char* value(const ::dobot::SetCPCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb52be2f8d70c4a4aULL;
  static const uint64_t static_value2 = 0x2952d74f424d9d8bULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetCPCmdRequest";
  }

  static const char* value(const ::dobot::SetCPCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 cpMode\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 velocity\n"
;
  }

  static const char* value(const ::dobot::SetCPCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cpMode);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCPCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetCPCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetCPCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "cpMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cpMode);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETCPCMDREQUEST_H