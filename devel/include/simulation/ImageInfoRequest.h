// Generated by gencpp from file simulation/ImageInfoRequest.msg
// DO NOT EDIT!


#ifndef SIMULATION_MESSAGE_IMAGEINFOREQUEST_H
#define SIMULATION_MESSAGE_IMAGEINFOREQUEST_H


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
struct ImageInfoRequest_
{
  typedef ImageInfoRequest_<ContainerAllocator> Type;

  ImageInfoRequest_()
    {
    }
  ImageInfoRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::simulation::ImageInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation::ImageInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ImageInfoRequest_

typedef ::simulation::ImageInfoRequest_<std::allocator<void> > ImageInfoRequest;

typedef boost::shared_ptr< ::simulation::ImageInfoRequest > ImageInfoRequestPtr;
typedef boost::shared_ptr< ::simulation::ImageInfoRequest const> ImageInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation::ImageInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation::ImageInfoRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::simulation::ImageInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation::ImageInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::ImageInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::ImageInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::ImageInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::ImageInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation::ImageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::simulation::ImageInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation::ImageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation/ImageInfoRequest";
  }

  static const char* value(const ::simulation::ImageInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation::ImageInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::simulation::ImageInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation::ImageInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation::ImageInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::simulation::ImageInfoRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_MESSAGE_IMAGEINFOREQUEST_H
