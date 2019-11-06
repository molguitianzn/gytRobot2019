#ifndef __UNIROBOT_HPP
#define __UNIROBOT_HPP

#include <webots/Robot.hpp>
#include <webots/Camera.hpp>
#include <webots/Motor.hpp>
#include <webots/Accelerometer.hpp>
#include <ros/ros.h>
#include <std_srvs/Empty.h>
#include <geometry_msgs/Point.h>
#include <simulation/ImageInfo.h>
#include <simulation/Task.h>
#include <simulation/GameData.h>
#include <simulation/Stand.h>
#include <simulation/BodyAngles.h>
#include <std_srvs/SetBool.h>

#include "walk/IKWalk.hpp"

struct UpperOutputs{
    double left_shoulder, left_elbow;
    double right_shoulder, right_elbow;
    double head_yaw, head_pitch;
};

class UniRobot: public webots::Robot
{
public:
    UniRobot(std::string name, std::string actdir);
    ~UniRobot();
    void run();

private:
    int mTimeStep;
    int totalTime;
    std::string mName, mActdir;
    ros::NodeHandle *mNode;
    ros::ServiceServer mImageInfoServer;
    ros::ServiceServer mResetServer;
    ros::Publisher mImagePublisher;
    ros::Subscriber mHeadSubscriber;
    ros::Subscriber mTaskSubscriber;
    ros::Subscriber mGdataSubscriber;
    ros::Subscriber mAngleSubscriber;

    std::list<simulation::Task> mTasks;
    simulation::GameData mGdata;

    bool mAct;
    std::vector<simulation::BodyAngles> mBodyAngles;
    
    void AnglesUpdate(const simulation::BodyAngles::ConstPtr &p);
    void HeadChanged(const geometry_msgs::Point::ConstPtr &p);
    void TaskUpdate(const simulation::Task::ConstPtr &p);
    void GdataUpdate(const simulation::GameData::ConstPtr &p);

    bool SetReset(std_srvs::SetBool::Request &req, std_srvs::SetBool::Response &res);
    bool ImageInfoService(simulation::ImageInfo::Request &req, 
        simulation::ImageInfo::Response &res);
    
    void PublishImage();

    void runWalk(const Rhoban::IKWalkParameters& params, double timeLength,
                  double& phase, double& time);
    void stopWalk(bool &isWalking, double &phase, double &time);
    float ComputeVtorso(float theta);
    float ComputeVrightleg(float theta, float x, float y, float z);

    void ActionRightFootPos(float x, float y, float z);
    void ActionRightKick(float x, float y, float z, float alpha);
    void ActionReady();
    void ActionReset();

    void SetPositions();
    void GetPositions(Rhoban::IKWalkOutputs &lOuts, UpperOutputs &uOuts);
    
    int myStep();
    void wait(int ms);

    webots::Camera *mCamera;
    webots::Accelerometer *mAccelerometer;

    UpperOutputs mUOuts;
    Rhoban::IKWalkOutputs mLOuts;
    bool mReset;
};


#endif
