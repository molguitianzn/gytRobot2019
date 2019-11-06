// Generated by gencpp from file simulation/Task.msg
// DO NOT EDIT!


#ifndef SIMULATION_MESSAGE_TASK_H
#define SIMULATION_MESSAGE_TASK_H


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
struct Task_
{
  typedef Task_<ContainerAllocator> Type;

  Task_()
    : type(0)
    , step(0.0)
    , lateral(0.0)
    , turn(0.0)  {
    }
  Task_(const ContainerAllocator& _alloc)
    : type(0)
    , step(0.0)
    , lateral(0.0)
    , turn(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _type_type;
  _type_type type;

   typedef double _step_type;
  _step_type step;

   typedef double _lateral_type;
  _lateral_type lateral;

   typedef double _turn_type;
  _turn_type turn;



  enum {
    TASK_NONE = 0,
    TASK_WALK = 1,
    TASK_KICK = 2,
  };


  typedef boost::shared_ptr< ::simulation::Task_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation::Task_<ContainerAllocator> const> ConstPtr;

}; // struct Task_

typedef ::simulation::Task_<std::allocator<void> > Task;

typedef boost::shared_ptr< ::simulation::Task > TaskPtr;
typedef boost::shared_ptr< ::simulation::Task const> TaskConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation::Task_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation::Task_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::simulation::Task_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation::Task_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::Task_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation::Task_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::Task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation::Task_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "19ba3c70aeefc25e705489e4597513cc";
  }

  static const char* value(const ::simulation::Task_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x19ba3c70aeefc25eULL;
  static const uint64_t static_value2 = 0x705489e4597513ccULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation/Task";
  }

  static const char* value(const ::simulation::Task_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 type\n\
float64 step\n\
float64 lateral\n\
float64 turn\n\
\n\
int32 TASK_NONE = 0\n\
int32 TASK_WALK = 1\n\
int32 TASK_KICK = 2\n\
";
  }

  static const char* value(const ::simulation::Task_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation::Task_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.step);
      stream.next(m.lateral);
      stream.next(m.turn);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Task_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation::Task_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulation::Task_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "step: ";
    Printer<double>::stream(s, indent + "  ", v.step);
    s << indent << "lateral: ";
    Printer<double>::stream(s, indent + "  ", v.lateral);
    s << indent << "turn: ";
    Printer<double>::stream(s, indent + "  ", v.turn);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_MESSAGE_TASK_H
