// Generated by gencpp from file game_ctrl/Score.msg
// DO NOT EDIT!


#ifndef GAME_CTRL_MESSAGE_SCORE_H
#define GAME_CTRL_MESSAGE_SCORE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace game_ctrl
{
template <class ContainerAllocator>
struct Score_
{
  typedef Score_<ContainerAllocator> Type;

  Score_()
    : red(0)
    , blue(0)  {
    }
  Score_(const ContainerAllocator& _alloc)
    : red(0)
    , blue(0)  {
  (void)_alloc;
    }



   typedef int32_t _red_type;
  _red_type red;

   typedef int32_t _blue_type;
  _blue_type blue;





  typedef boost::shared_ptr< ::game_ctrl::Score_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::game_ctrl::Score_<ContainerAllocator> const> ConstPtr;

}; // struct Score_

typedef ::game_ctrl::Score_<std::allocator<void> > Score;

typedef boost::shared_ptr< ::game_ctrl::Score > ScorePtr;
typedef boost::shared_ptr< ::game_ctrl::Score const> ScoreConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::game_ctrl::Score_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::game_ctrl::Score_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace game_ctrl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'game_ctrl': ['/home/molguitianzn/my_git/SEURoboCup2019/src/game_ctrl/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::game_ctrl::Score_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::game_ctrl::Score_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_ctrl::Score_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::game_ctrl::Score_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_ctrl::Score_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::game_ctrl::Score_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::game_ctrl::Score_<ContainerAllocator> >
{
  static const char* value()
  {
    return "135afbe6587fb4d621b00a65873cc59e";
  }

  static const char* value(const ::game_ctrl::Score_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x135afbe6587fb4d6ULL;
  static const uint64_t static_value2 = 0x21b00a65873cc59eULL;
};

template<class ContainerAllocator>
struct DataType< ::game_ctrl::Score_<ContainerAllocator> >
{
  static const char* value()
  {
    return "game_ctrl/Score";
  }

  static const char* value(const ::game_ctrl::Score_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::game_ctrl::Score_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 red\n\
int32 blue\n\
";
  }

  static const char* value(const ::game_ctrl::Score_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::game_ctrl::Score_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.red);
      stream.next(m.blue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Score_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::game_ctrl::Score_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::game_ctrl::Score_<ContainerAllocator>& v)
  {
    s << indent << "red: ";
    Printer<int32_t>::stream(s, indent + "  ", v.red);
    s << indent << "blue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAME_CTRL_MESSAGE_SCORE_H
