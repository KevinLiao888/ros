// Generated by gencpp from file controller/setposResponse.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MESSAGE_SETPOSRESPONSE_H
#define CONTROLLER_MESSAGE_SETPOSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace controller
{
template <class ContainerAllocator>
struct setposResponse_
{
  typedef setposResponse_<ContainerAllocator> Type;

  setposResponse_()
    : return_code(0)  {
    }
  setposResponse_(const ContainerAllocator& _alloc)
    : return_code(0)  {
  (void)_alloc;
    }



   typedef int64_t _return_code_type;
  _return_code_type return_code;





  typedef boost::shared_ptr< ::controller::setposResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller::setposResponse_<ContainerAllocator> const> ConstPtr;

}; // struct setposResponse_

typedef ::controller::setposResponse_<std::allocator<void> > setposResponse;

typedef boost::shared_ptr< ::controller::setposResponse > setposResponsePtr;
typedef boost::shared_ptr< ::controller::setposResponse const> setposResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller::setposResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller::setposResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace controller

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'controller': ['/root/catkin_ws/src/controller/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::controller::setposResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller::setposResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller::setposResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller::setposResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller::setposResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller::setposResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller::setposResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fef2d33174a4c686f62532cd40b1b7da";
  }

  static const char* value(const ::controller::setposResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfef2d33174a4c686ULL;
  static const uint64_t static_value2 = 0xf62532cd40b1b7daULL;
};

template<class ContainerAllocator>
struct DataType< ::controller::setposResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller/setposResponse";
  }

  static const char* value(const ::controller::setposResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller::setposResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 return_code\n\
\n\
";
  }

  static const char* value(const ::controller::setposResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller::setposResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.return_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct setposResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller::setposResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller::setposResponse_<ContainerAllocator>& v)
  {
    s << indent << "return_code: ";
    Printer<int64_t>::stream(s, indent + "  ", v.return_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MESSAGE_SETPOSRESPONSE_H
