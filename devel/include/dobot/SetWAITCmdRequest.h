// Generated by gencpp from file dobot/SetWAITCmdRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETWAITCMDREQUEST_H
#define DOBOT_MESSAGE_SETWAITCMDREQUEST_H


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
struct SetWAITCmdRequest_
{
  typedef SetWAITCmdRequest_<ContainerAllocator> Type;

  SetWAITCmdRequest_()
    : timeout(0)
    , isQueued(false)  {
    }
  SetWAITCmdRequest_(const ContainerAllocator& _alloc)
    : timeout(0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint32_t _timeout_type;
  _timeout_type timeout;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::SetWAITCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetWAITCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetWAITCmdRequest_

typedef ::dobot::SetWAITCmdRequest_<std::allocator<void> > SetWAITCmdRequest;

typedef boost::shared_ptr< ::dobot::SetWAITCmdRequest > SetWAITCmdRequestPtr;
typedef boost::shared_ptr< ::dobot::SetWAITCmdRequest const> SetWAITCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetWAITCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot::SetWAITCmdRequest_<ContainerAllocator1> & lhs, const ::dobot::SetWAITCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.timeout == rhs.timeout &&
    lhs.isQueued == rhs.isQueued;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot::SetWAITCmdRequest_<ContainerAllocator1> & lhs, const ::dobot::SetWAITCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetWAITCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetWAITCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetWAITCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0cb1f385a8b8c0275317175416901061";
  }

  static const char* value(const ::dobot::SetWAITCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0cb1f385a8b8c027ULL;
  static const uint64_t static_value2 = 0x5317175416901061ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetWAITCmdRequest";
  }

  static const char* value(const ::dobot::SetWAITCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 timeout\n"
"bool isQueued\n"
;
  }

  static const char* value(const ::dobot::SetWAITCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timeout);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetWAITCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetWAITCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetWAITCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "timeout: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timeout);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETWAITCMDREQUEST_H
