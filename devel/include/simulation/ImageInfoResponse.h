// Generated by gencpp from file simulation/ImageInfoResponse.msg
// DO NOT EDIT!


#ifndef SIMULATION_MESSAGE_IMAGEINFORESPONSE_H
#define SIMULATION_MESSAGE_IMAGEINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simulation
{
template <class ContainerAllocator>
struct ImageInfoResponse_
{
  typedef ImageInfoResponse_<ContainerAllocator> Type;

  ImageInfoResponse_()
    : width(0)
    , height(0)
    , channels(0)  {
    }
  ImageInfoResponse_(const ContainerAllocator& _alloc)
    : width(0)
    , height(0)
    , channels(0)  {
  (void)_alloc;
    }



   typedef int32_t _width_type;
  _width_type width;

   typedef int32_t _height_type;
  _height_type height;

   typedef int32_t _channels_type;
  _channels_type channels;





  typedef boost::shared_ptr< ::simulation::ImageInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation::ImageInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ImageInfoResponse_

typedef ::simulation::ImageInfoResponse_<std::allocator<void> > ImageInfoResponse;

typedef boost::shared_ptr< ::simulation::ImageInfoResponse > ImageInfoResponsePtr;
typedef boost::shared_ptr< ::simulation::ImageInfoResponse const> ImageInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation::ImageInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation::ImageInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simulation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'simulation': ['/home/molguitianzn/my_git/SEURoboCup2019/src/simulation/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simulation::ImageInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation::ImageInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::ImageInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::ImageInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::ImageInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::ImageInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation::ImageInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5fc79a3dc52bfd27e58236ef10f8fb6f";
  }

  static const char* value(const ::simulation::ImageInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5fc79a3dc52bfd27ULL;
  static const uint64_t static_value2 = 0xe58236ef10f8fb6fULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation::ImageInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation/ImageInfoResponse";
  }

  static const char* value(const ::simulation::ImageInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation::ImageInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 width\n\
int32 height\n\
int32 channels\n\
\n\
";
  }

  static const char* value(const ::simulation::ImageInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation::ImageInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.channels);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation::ImageInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulation::ImageInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "channels: ";
    Printer<int32_t>::stream(s, indent + "  ", v.channels);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_MESSAGE_IMAGEINFORESPONSE_H
