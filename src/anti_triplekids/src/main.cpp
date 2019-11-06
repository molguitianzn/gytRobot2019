#include <mutex>
#include <fstream>
#include <ros/ros.h>
#include <sensor_msgs/CompressedImage.h>
#include <sensor_msgs/image_encodings.h>
#include <simulation/ImageInfo.h>
#include <simulation/Task.h>
#include <simulation/GameData.h>
#include <game_ctrl/TeamInfo.h>
#include <geometry_msgs/Point.h>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>

using namespace std;
using namespace cv;

extern void GdataUpdate(const simulation::GameData::ConstPtr &p);
extern void PositionUpdate(const geometry_msgs::Point::ConstPtr &pos);
extern void ImageUpdate(const sensor_msgs::CompressedImage::ConstPtr &image);
extern void ImagePublish(const cv::Mat &image, string encoding="bgr8");
extern void TaskPublish(const simulation::Task &task);
extern void HeadPublish(double yaw, double pitch);
extern void GetImageInfo();
extern string GetRobot(string tname);
extern cv::Mat GetImage();
extern geometry_msgs::Point GetPosition();
extern simulation::GameData GetGdata();

extern int gytStepDebugger(int, double*);

extern cv::Mat colorMask(const cv::Mat, Scalar *, bool toWhite);// = false
extern cv::Mat gytThreshold(const cv::Mat, Scalar * ); // 阈值
extern cv::Mat billboardMask(cv::Mat &);
extern cv::Point tripleKidBallDetection(cv::Mat &, cv::Mat &, Scalar *, Scalar *, Scalar *, bool &);
extern cv::Mat findColorArea(cv::Mat & , cv::Mat & , Scalar * );
extern cv::Point findgate(cv::Mat &, cv::Mat &, bool &, std::string &);

extern simulation::Task tripleKidsCtrlBall(cv::Size , cv::Point , cv::Point , simulation::Task );
extern void getAdjustRate(double *, cv::Size, cv::Point, cv::Point);
extern void turnCtrl(simulation::Task &, double * , simulation::Task & );
// extern void turnRight(simulation::Task &, double * , simulation::Task & );
extern void speedCtrl(simulation::Task & , double * , simulation::Task & );
// extern void speedDown(simulation::Task & , double * , simulation::Task & );
extern void lateralCtrl(simulation::Task & , double * , simulation::Task & );
// extern void lateralRight(simulation::Task & , double * , simulation::Task & );
extern void RightRotate(simulation::Task & ); //, double * , simulation::Task & );
extern void LeftRotate(simulation::Task & ); //, double * , simulation::Task & );
extern simulation::Task adjustPosstion(cv::Size, cv::Point, simulation::Task, bool &);



std::shared_ptr<ros::NodeHandle> node;
int image_width, image_height, image_channels;
ros::Publisher imagePublisher, taskPublisher, headPublisher;
string robot_name="robot";

int main(int argc, char **argv)
{
    string teamname, hostname="localhost";
    if(argc>1) teamname = string(argv[1]);
    if(argc>2) {
        ifstream ifs(argv[2]);
        if(ifs){
            ifs>>hostname;
            ifs.close();
        }
    }
    string uri = "http://"+hostname+":11311";
    setenv("ROS_MASTER_URI", uri.c_str(), 1);
    ros::init(argc, argv, teamname);
    node = std::make_shared<ros::NodeHandle>();
    robot_name = GetRobot(teamname);
    if(robot_name.size()==0){
        ROS_WARN("can not find this team in game_ctrl");
        return 0;
    }

    GetImageInfo();
    ros::Subscriber imageSub = node->subscribe(robot_name+"/image/compressed", 1, ImageUpdate);
    ros::Subscriber posSub = node->subscribe(robot_name+"/position", 1, PositionUpdate);
    ros::Subscriber gdataSub = node->subscribe("/gamedata", 1, GdataUpdate);
    imagePublisher = node->advertise<sensor_msgs::Image>(teamname+"/image", 1);
    taskPublisher = node->advertise<simulation::Task>(robot_name+"/task", 1);
    headPublisher = node->advertise<geometry_msgs::Point>(robot_name+"/head", 1);

    ros::Rate rate(10);
    double yaw=-M_PI/2;

     //调试步伐=======================================================
    // int gytStepDebugger(int, double*);
    int key = 0;
    double gytCtrl[7] = {0.05, 0.0, 0.0, -9*M_PI/32, 1, 0.0, 0}; // 1 初始状态为自动
    double gytStepCtrl = gytCtrl[0], gytTurnCtrl = gytCtrl[1];
    double gytLateralCtrl = gytCtrl[5];
    double gytHeadYaw = gytCtrl[2], gytHeadPitch = gytCtrl[3];
    int gytTaskCtrl = int(gytCtrl[4]);// 任务类型 0null, 1walk, 2kick
    bool automatic = bool(gytCtrl[6]);
    int loopTime = 0;
    //===============================================================

    // cv::Mat colorMask(const cv::Mat, Scalar *, bool toWhite = false); // 将不需要考虑的颜色过滤，在bgrthres阈值范围内的需要过滤
    Scalar thresLow = Scalar(0, 100, 0); // 无关颜色上下阈值设为0, 待过滤的颜色设为具体数值
    Scalar thresHigh = Scalar(100, 255, 100);
    Scalar bgrthres[2] = {thresLow, thresHigh};
    Scalar bgrthres2[2] = {Scalar(170, 160, 160), Scalar(200, 183, 180)};
    Scalar bgrthres3[2] = {Scalar(200, 200, 200), Scalar(255, 255, 255)};
    Scalar hsvgreen[2] = {Scalar(36, 0, 0), Scalar(70, 255, 255)}; // 绿色
    Scalar hsvwhite[2] = {Scalar(0, 0, 210), Scalar(180, 30, 255)}; // 白色

    //===============================================================
    // cv::Mat gytThreshold(const cv::Mat, Scalar * ); // 阈值

    //===============================================================

    
    // cv::Point tripleKidBallDetection(cv::Mat &, cv::Mat &, Scalar *, Scalar *, Scalar *, bool &);


    //========================================================
    simulation::Task task, NextTask;
    // task.type = simulation::Task::TASK_WALK; // 任务类型 
    task.type = int(gytCtrl[4]); // 任务类型 0null, 1walk, 2kick
    task.step = gytCtrl[0];//gytStepCtrl;  // 行走前进量 米 0.03
    task.lateral = gytCtrl[5]; //gytLateralCtrl 行走横移量 米 0.0
    task.turn = gytCtrl[1] ;//gytTurnCtrl; // 行走转角量 弧度 0.0
    double head_yaw = gytCtrl[2] ;//gytHeadYaw; //头部航向角 0.0  
    double head_pitch = gytCtrl[3] ;//gytHeadPitch; //头部俯仰角 -M_PI/4
    cv::Size ImageSize;
    cv::Point ballLocaltionInView, ballLocaltionInLastView;
    cv::Point gateLocaltionInView;
    bool findBallLocation = false;
    NextTask = task;
    // simulation::Task tripleKidsCtrlBall(cv::Size , cv::Point , cv::Point , simulation::Task );
    // void getAdjustRate(double *, cv::Size, cv::Point, cv::Point);
    // void turnLeft(simulation::Task &, double * , simulation::Task & );
    // void turnRight(simulation::Task &, double * , simulation::Task & );
    // void speedUp(simulation::Task & , double * , simulation::Task & );
    // void speedDown(simulation::Task & , double * , simulation::Task & );
    // void lateralLeft(simulation::Task & , double * , simulation::Task & );
    // void lateralRight(simulation::Task & , double * , simulation::Task & );
    //==========================================================

    int rightRotateTime = 0;// 右旋漂次数
    int leftRotateTime = 0; // 左旋漂次数
    bool haveleftRotate = false; // 是否已经左旋漂
    bool haverightRotate = false; //是否已经右旋漂
    //=============================================================
    int count = 0;
    bool walkOrAdjust = true;
    cv::Point gatelocationInLastView, gatelocationInView;
    bool findGateLocation = false;
    bool possitionNotRight = false;
    bool nearGate = false;

    double ballLocationXlow = 0.2;
    double ballLocationXHigh = 0.8;
    bool ballLocatAtCenter = false;

    while(ros::ok()){
        cv::Mat image_tmp = GetImage();
        geometry_msgs::Point mypos = GetPosition();
        simulation::GameData gdata = GetGdata();     
        if(gdata.state == simulation::GameData::STATE_PLAY)
        {
            // simulation::Task task, NextTask;
            // // task.type = simulation::Task::TASK_WALK; // 任务类型 
            // task.type = int(gytCtrl[4]); // 任务类型 0null, 1walk, 2kick
            // task.step = gytCtrl[0];//gytStepCtrl;  // 行走前进量 米 0.03
            // task.lateral = gytCtrl[5]; //gytLateralCtrl 行走横移量 米 0.0
            // task.turn = gytCtrl[1] ;//gytTurnCtrl; // 行走转角量 弧度 0.0
            // double head_yaw = gytCtrl[2] ;//gytHeadYaw; //头部航向角 0.0  
            // double head_pitch = gytCtrl[3] ;//gytHeadPitch; //头部俯仰角 -M_PI/4
            // cv::Size ImageSize;
            // cv::Point ballLocaltionInView, ballLocaltionInLastView;
            if(gdata.mode == gdata.MODE_NORM) //对抗模式或者预赛
            {
                if(!image_tmp.empty()){
                    //在这里进行图像处理
                    if(walkOrAdjust)
                    {
                        cv::Mat dst1, dst2;
                        ballLocaltionInLastView = ballLocaltionInView;
                        ballLocaltionInView = tripleKidBallDetection(image_tmp, dst1, bgrthres, bgrthres2, bgrthres3, findBallLocation);
                        // gateLocaltionInView = findgate(image_tmp, dst2);
                        // cv::Mat dst1 =  billboardMask(image_tmp);
                        // cv::Mat mask;
                        // cv::Mat dst1 = findColorArea(image_tmp, mask, hsvgreen);
                        // ImagePublish(image_tmp);
                        ImagePublish(image_tmp);
                        // vector<cv::Mat> channels;
                        // cv::split(image_tmp, channels);
                        // Mat channelB = channels[0];
                        // Mat channelG = channels[1];
                        // Mat channelR = channels[2];
                        // ImagePublish(channelR, "mono8");
                        // ImagePublish(binaryImage, "mono8");  
                    }
                    else
                    {
                        cv::Mat dst1, dst2;
                        gatelocationInLastView = gatelocationInView;
                        gatelocationInView = findgate(image_tmp, dst1, findGateLocation, robot_name);
                        // gateLocaltionInView = findgate(image_tmp, dst2);
                        // cv::Mat dst1 =  billboardMask(image_tmp);
                        // cv::Mat mask;
                        // cv::Mat dst1 = findColorArea(image_tmp, mask, hsvgreen);
                        // ImagePublish(image_tmp);
                        ImagePublish(dst1);
                    }
                    
                }
                // 动作控制
                if (automatic)
                {
                    cout << "count = " << count++ << endl;
                    if(robot_name == "redrobot")
                    {
                        if(mypos.x >= 3.8 && ((mypos.y >= -1.25) && (mypos.y <= 1.25)))
                        {
                            nearGate = true; cout<<"接近球门!" << endl;
                        }
                        else
                        {
                            nearGate = false;
                        }
                    }
                    else if(robot_name == "bluerobot")
                    {
                        if(mypos.x >= 3.8 && ((mypos.y >= -1.25) && (mypos.y <= 1.25))) //==================================================
                        {
                            nearGate = true; cout<<"接近球门!" << endl;
                        }
                        else
                        {
                            nearGate = false;
                        }
                    }
                    else
                    {
                        cout<<"no such a robot!"<<endl;
                    }
                    if((ballLocaltionInView.x <= (image_tmp.size()).width * ballLocationXlow) || ballLocaltionInView.x >= (image_tmp.size()).width * ballLocationXHigh)
                    {
                        ballLocatAtCenter = false;
                        cout <<"球不在中间, 不可移开视线!"<<endl;
                    }
                    else 
                    {
                        ballLocatAtCenter = true;
                        cout <<"球在中间, 现在可以移开视线!"<<endl;
                    }

                    // if((mypos.y <= -0.5) && (!haveleftRotate))
                    // {
                    //     leftRotateTime = 50; haveleftRotate = true;
                    //     cout << "即将左旋漂!"<<endl;
                    // }
                    // if((mypos.y >= 0.5) && (!haverightRotate))
                    // {
                    //     rightRotateTime = 50; haverightRotate = true;
                    //     cout << "即将右旋漂!"<<endl;
                    // }
                    if (ballLocatAtCenter && !nearGate && (((count % 100 >= 90) && (count % 100 <= 99)) || (possitionNotRight))) //===1000 200 250=======================================================
                    {
                        cout<<"调整方向!"<<endl;
                        head_pitch = 0;
                        walkOrAdjust = false; //adjusting
                        if (findGateLocation)
                        {
                            cout << "找到球门!"<<endl;
                            task = NextTask;
                            ImageSize = image_tmp.size();
                            NextTask = adjustPosstion(ImageSize, gatelocationInView, task, possitionNotRight);
                        }
                        else
                        {
                            /* 随机旋转 */
                            cout << "找不到球门，旋转调整中!" << endl;
                            possitionNotRight = true;
                            RightRotate(NextTask);
                        }
                        
                    }
                    else
                    {
                        // if(leftRotateTime != 0)
                        // {
                        //     LeftRotate(NextTask); leftRotateTime--;
                        //     cout<<"正在左旋漂!"<<endl;
                        // }
                        // else if(rightRotateTime != 0)
                        // {
                        //     RightRotate(NextTask); rightRotateTime--;
                        //     cout<<"正在右旋漂!"<<endl;
                        // }
                        // else
                        // {
                        cout<<"直线带球!"<<endl;
                        head_pitch = -9*M_PI/32;
                        walkOrAdjust = true;
                        // cout << "count = " << count++ << endl;
                        if (findBallLocation)
                        {
                            task = NextTask;
                            ImageSize = image_tmp.size();
                            NextTask = tripleKidsCtrlBall(ImageSize, ballLocaltionInView, ballLocaltionInLastView, task);
                        }
                        else
                        {
                            task = NextTask;
                            // NextTask.lateral = 0; NextTask.step = -0.02; NextTask.turn = 0;
                            cout<<"I cannot find the ball and step back!"<<endl;
                            if((mypos.y <= -0.5) || (mypos.y >= 0.5))
                            {
                                NextTask.lateral = 0; NextTask.step = 0.03; NextTask.turn = 0;
                            }
                        }
                        if((mypos.y >= -0.5) && (mypos.y <= 0.5))
                        {
                            cout<<"坐标正常!"<<endl;
                            haveleftRotate = false; haverightRotate = false;
                        }
                        // }
                        
                    }

                    cout<<"step:"<<NextTask.step<<";lateral:"<<NextTask.lateral<<";turn:"<<NextTask.turn<<endl;
                    TaskPublish(NextTask);
                    HeadPublish(head_yaw, head_pitch);
                }
                else
                {
                    loopTime = gytStepDebugger(loopTime, gytCtrl); 
                    task.type = int(gytCtrl[4]); // 任务类型 0null, 1walk, 2kick
                    task.step = gytCtrl[0];//gytStepCtrl;  // 行走前进量 米 0.03
                    task.lateral = gytCtrl[5]; //gytLateralCtrl 行走横移量 米 0.0
                    task.turn = gytCtrl[1] ;//gytTurnCtrl; // 行走转角量 弧度 0.0
                    double head_yaw = gytCtrl[2] ;//gytHeadYaw; //头部航向角 0.0  
                    double head_pitch = gytCtrl[3] ;//gytHeadPitch; //头部俯仰角 -M_PI/4
                    automatic = bool(gytCtrl[6]);
                    cout << "mypos = (" << mypos.x << ", " << mypos.y << ", " << mypos.z << ")" << endl;
                    TaskPublish(task);
                    HeadPublish(head_yaw, head_pitch);
                    if(automatic)
                    {
                        NextTask = task;
                    }
                }
                
                
            }
            else //点球模式
            {
                
            }
            // HeadPublish(head_yaw, head_pitch);
            //TaskPublish(task);
            // TaskPublish(NextTask);
        }
        ros::spinOnce();
        rate.sleep();

        // loopTime = gytStepDebugger(loopTime, gytCtrl);
    }
    return 0;
}

simulation::GameData mGdata;
mutex gdata_mutex;
mutex image_mutex, pos_mutex;
cv::Mat image_data;
geometry_msgs::Point my_position;
void ImageUpdate(const sensor_msgs::CompressedImage::ConstPtr &image)
{
    vector<uint8_t> buf(image->data.size());
    memcpy(&(buf[0]), &(image->data[0]), image->data.size());
    try
    {
        std::lock_guard<mutex> lk(image_mutex);
        image_data = imdecode(buf, cv::IMREAD_COLOR);
    }
    catch(std::exception &e){
        ROS_INFO("%s", e.what());
    }
}

void PositionUpdate(const geometry_msgs::Point::ConstPtr &pos)
{
    std::lock_guard<mutex> lk(pos_mutex);
    my_position = *(pos.get());
}

void ImagePublish(const cv::Mat &image, string encoding)
{
    sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), encoding, image).toImageMsg();
    imagePublisher.publish(msg);
}

void TaskPublish(const simulation::Task &task)
{
    taskPublisher.publish(task);
}

void HeadPublish(double yaw, double pitch)
{
    geometry_msgs::Point p;
    p.z = yaw;
    p.y = pitch;
    headPublisher.publish(p);
}

void GetImageInfo()
{
    ros::service::waitForService(robot_name+"/imageinfo");
    ros::ServiceClient infoClient = node->serviceClient<simulation::ImageInfo>(robot_name+"/imageinfo");
    simulation::ImageInfo info;
    infoClient.call(info);
    image_width = info.response.width;
    image_height = info.response.height;
    image_channels = info.response.channels;
    infoClient.shutdown();
}


void GdataUpdate(const simulation::GameData::ConstPtr &p)
{
    gdata_mutex.lock();
    mGdata = *(p.get());
    gdata_mutex.unlock();
}

string GetRobot(string tname)
{
    ros::service::waitForService("/teaminfo");
    ros::ServiceClient infoClient = node->serviceClient<game_ctrl::TeamInfo>("/teaminfo");
    game_ctrl::TeamInfo info;
    info.request.teamname=tname;
    infoClient.call(info);
    infoClient.shutdown();
    return info.response.team;
}

cv::Mat GetImage()
{
    std::lock_guard<mutex> lk(image_mutex);
    return image_data.clone();
}

geometry_msgs::Point GetPosition()
{
    std::lock_guard<mutex> lk(pos_mutex);
    return my_position;
}

simulation::GameData GetGdata()
{
    std::lock_guard<mutex> lk(gdata_mutex);
    return mGdata;
}

//调试步伐函数
int gytStepDebugger(int loopTime, double * gytCtrl)
{
    int key = 0;
    double dTurn = M_PI/180;
    double dHead = M_PI/32;
    double dLateral = 0.1;
    double dStep = 0.01;
    if (loopTime % 1 == 0)
    {
        key = getchar();
        switch (key)
        {
            case 'i': gytCtrl[0] += dStep; break; //加速             gytStepCtrl
            case 'k': gytCtrl[0] -= dStep; break; //减速             gytStepCtrl
            case 'j': gytCtrl[1] += dTurn; break; //左转            gytTurnCtrl 
            case 'l': gytCtrl[1] -= dTurn; break; //右转            gytTurnCtrl
            case 'w': gytCtrl[3] += dHead; break; //抬头            gytHeadPitch
            case 's': gytCtrl[3] -= dHead; break; //低头            gytHeadPitch
            case 'a': gytCtrl[2] += dHead; break; //左转头          gytHeadYaw 
            case 'd': gytCtrl[2] -= dHead; break; //右转头          gytHeadYaw
            case 'b': gytCtrl[4] = 0; break;       //站住           gytTaskCtrl
            case 'n': gytCtrl[4] = 1; break;       //走路           gytTaskCtrl
            case 'm': gytCtrl[4] = 2; break;       //踢球           gytTaskCtrl
            case 'o': gytCtrl[5] += dLateral; break;//左划步        gytLateralCtrl
            case 'p': gytCtrl[5] -= dLateral; break;//右划步        gytLateralCtrl
            case 't':
            {
                cout << "automatic !" << endl; 
                gytCtrl[0] = 0.05;
                gytCtrl[1] = 0.0;
                gytCtrl[2] = 0.0;
                gytCtrl[3] = -9*M_PI/32;
                gytCtrl[4] = 1;
                gytCtrl[5] = 0.0;
                gytCtrl[6] = 1;
                break; // automatic mode switched on

            }
            default: break;
        }
    }
    cout << "Task type(0null, 1walk, 2kick) = " << int(gytCtrl[4]) << endl;
    cout << "step(步幅 i - k) = "<< int(gytCtrl[0]/dStep) << ", turn(转向角 j - l ) = " << int(gytCtrl[1]/dTurn) << endl;
    cout << "head_yaw(头左右 a - d) = " << int(gytCtrl[2]/dHead) << ", head_pitch(头上下 w - s) = " << int(gytCtrl[3]/dHead) << endl;
    cout << "lateral(划步量 o - p) = " << int(gytCtrl[5]/dLateral) << endl;
    cout << endl;
    return ++loopTime;
}



// 根据传入的球坐标判断下一个时刻的动作，以完成控球
simulation::Task tripleKidsCtrlBall(cv::Size ImageSize, cv::Point ballLocaltionInView, cv::Point ballLocaltionInLastView, simulation::Task taskAtThisTime)
{
    simulation::Task taskNextTime = taskAtThisTime; // 下一个时刻应该做的事情
    taskNextTime.type = 1;
    double adjustRate[3] = {0.0, 0.0, 0.0};   // 根据球的距离改变调整速率(x, y)方向; 速度, 左右转向, 左右侧划
    // double pictureWidth = ImageSize.width; // 图像宽度
    // double pictureHeight = ImageSize.height;// 图像高度
    double Xtolerate = 1/7; // 球属于屏幕中间区域的范围
    double Ytolerate = 1/7;
    double RightRotateX = 1.0/5, RightRotateY = 4.0/5;
    double LeftRotateX = 4.0/5, LeftRotateY = 4.0/5;
    if((ballLocaltionInView.x <= RightRotateX * ImageSize.width) && (ballLocaltionInView.y >= RightRotateY * ImageSize.height))
    {
        // RightRotate(taskNextTime);
        taskNextTime.turn = 8 * M_PI/180;
        taskNextTime.step = 0.00;
        taskNextTime.lateral = -0.02;
        cout<<"球在左下死角, 右旋漂!"<<endl;
        cout<< "RightRotateX * ImageSize.width = " << RightRotateX * ImageSize.width <<endl;
    }
    else if((ballLocaltionInView.x >= LeftRotateX * ImageSize.width) && (ballLocaltionInView.y >= LeftRotateY * ImageSize.height))
    {
        // LeftRotate(taskNextTime);
        taskNextTime.turn = -8 * M_PI/180;
        taskNextTime.step = 0.00;
        taskNextTime.lateral = 0.02;
        cout<<"球在右下死角, 左旋漂!"<<endl;
        cout<< "RightRotateX = " << RightRotateX <<endl;
    }
    else
    {
        taskNextTime.turn = 0;
        getAdjustRate(adjustRate, ImageSize, ballLocaltionInView, ballLocaltionInLastView);
        lateralCtrl(taskNextTime, adjustRate, taskAtThisTime);
        turnCtrl(taskNextTime, adjustRate, taskAtThisTime);
        speedCtrl(taskNextTime, adjustRate, taskAtThisTime);
    }
    
    // if (ballLocaltionInView.x <= ImageSize.width / 2 - Xtolerate / 2)
    // {
    //     lateralLeft(taskNextTime, adjustRate, taskAtThisTime);
    //     cout << "turn Left!" << endl;
    // }
    // if (ballLocaltionInView.x >= ImageSize.width / 2 + Xtolerate / 2)
    // {
    //     lateralRight(taskNextTime, adjustRate, taskAtThisTime);
    //     cout << "turn Right!" << endl;
    // }
    // if (ballLocaltionInView.y >= ImageSize.height / 2 + Ytolerate / 2)
    // {
    //     // speedDown(taskNextTime, adjustRate, taskAtThisTime);
    //     cout << "speed down!" << endl;
    // }
    // if (ballLocaltionInView.y <= ImageSize.height / 2 - Ytolerate / 2)
    // {
    //     // speedUp(taskNextTime, adjustRate, taskAtThisTime);
    //     cout << "speed up!" << endl;
    // }
    

    taskNextTime.type = 1;

    cout<<"tripleKidsCtrlBall:"<<"step:"<<taskNextTime.step<<";lateral:"<<taskNextTime.lateral<<";turn:"<<taskNextTime.turn<<endl;
    return taskNextTime;
}

// 通过目标值和实际值获取调整速率
void getAdjustRate(double * adjustRate, cv::Size ImageSize, cv::Point ballLocaltionInView, cv::Point ballLocaltionInLastView)
{
    double pictureWidth = ImageSize.width; // 图像宽度
    double pictureHeight = ImageSize.height;// 图像高度
    // // adjustRate[0] = ballLocaltionInView.x - ballLocaltionInLastView.x;
    // // adjustRate[1] = ballLocaltionInView.y - ballLocaltionInLastView.y;
    double dStep = 0.01;
    double dTurn = M_PI/180;
    double dHead = M_PI/32;
    double dLateral = 0.01;
    int N = 5;
    double dwidth = pictureWidth / N;
    double dHeight = pictureHeight / N;
    if (ballLocaltionInView.x <= 1*dwidth)
    {
        adjustRate[2] = 8 * dLateral;
        cout<<"左舵2!"<<endl;
    }
    if((ballLocaltionInView.x >= 1*dwidth) && (ballLocaltionInView.x <= 2*dwidth))
    {
        adjustRate[2] = 2 * dLateral;
        cout<<"左舵1!"<<endl;
    }
    if((ballLocaltionInView.x >= 2*dwidth) && (ballLocaltionInView.x <= 3*dwidth))
    {
        adjustRate[2] = 0 * dLateral;
        cout<<"回正!"<<endl;
    }
    if((ballLocaltionInView.x >= 3*dwidth) && (ballLocaltionInView.x <= 4*dwidth))
    {
        adjustRate[2] = -2 * dLateral;
        cout<<"右舵1!"<<endl;
    }
    if((ballLocaltionInView.x >= 4*dwidth) && (ballLocaltionInView.x <= 5*dwidth))
    {
        adjustRate[2] = -8 * dLateral;
        cout<<"右舵2!"<<endl;
    }
    // if (ballLocaltionInView.x <= pictureWidth / 2)
    // {
    //     taskNextTime = turnLeft(adjustRate, taskAtThisTime);
    // }
    // if (ballLocaltionInView.x >= pictureWidth / 2)
    // {
    //     taskNextTime = turnRight(adjustRate, taskAtThisTime);
    // }
    // if (ballLocaltionInView.y >= pictureHeight / 2)
    // {
    //     taskNextTime = speedUp(adjustRate, taskAtThisTime);
    // }
    // if (ballLocaltionInView.y <= pictureHeight / 2)
    // {
    //     taskNextTime = speedDown(adjustRate, taskAtThisTime);
    // }

    if (ballLocaltionInView.y <= 1*dHeight)
    {
        adjustRate[0] = 8 * dStep;
        cout<<"加速2!"<<endl;
    }
    if((ballLocaltionInView.y >= 1*dHeight) && (ballLocaltionInView.y <= 2*dHeight))
    {
        adjustRate[0] = 6 * dStep;
        cout<<"加速1!"<<endl;
    }
    if((ballLocaltionInView.y >= 2*dHeight) && (ballLocaltionInView.y <= 3*dHeight))
    {
        adjustRate[0] = 5 * dStep;
        cout<<"常速!"<<endl;
    }
    if((ballLocaltionInView.y >= 3*dHeight) && (ballLocaltionInView.y <= 4*dHeight))
    {
        adjustRate[0] = 4 * dStep;
        cout<<"减速1!"<<endl;
    }
    if((ballLocaltionInView.y >= 4*dHeight) && (ballLocaltionInView.y <= 5*dHeight))
    {
        adjustRate[0] = 3 * dStep;
        cout<<"减速2!"<<endl;
    }

    if((abs(adjustRate[2]) >= 0.06) && (abs(adjustRate[0]) >= 0.03))
    {
        adjustRate[0] = 2 * dStep;
        cout << "侧滑步过大，已减速!" << endl;
    }

    adjustRate[1] = 0 * dTurn; 
    // adjustRate[1] = 1 * dStep;
    // adjustRate[2] = 3 * dLateral;
}


// 向左转动
void turnCtrl(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
{
    taskNextTime.turn = adjustRate[1];
}

// //向右转动
// void turnRight(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
// {
//     taskNextTime.turn = -1 * adjustRate[0];
// }

// 加速
void speedCtrl(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
{
    // taskNextTime.step = taskAtThisTime.step + adjustRate[1];
    taskNextTime.step = adjustRate[0];
}

// // 减速
// void speedDown(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
// {
//     taskNextTime.step = taskAtThisTime.step - adjustRate[1];
// }

//左划步
void lateralCtrl(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
{
    taskNextTime.lateral = adjustRate[2];
}

// //右划步
// void lateralRight(simulation::Task & taskNextTime, double * adjustRate, simulation::Task & taskAtThisTime)
// {
//     taskNextTime.lateral = -1 * adjustRate[2];
// }


// 右旋漂
void RightRotate(simulation::Task & taskNextTime) //, double * adjustRate, simulation::Task & taskAtThisTime)
{
    taskNextTime.turn = 5 * M_PI/180;
    taskNextTime.step = 0.00;
    taskNextTime.lateral = -0.03;
}

// 左旋漂
void LeftRotate(simulation::Task & taskNextTime) //, double * adjustRate, simulation::Task & taskAtThisTime)
{
    taskNextTime.turn = -5 * M_PI/180;
    taskNextTime.step = 0.00;
    taskNextTime.lateral = 0.03;
}


simulation::Task adjustPosstion(cv::Size ImageSize, cv::Point gateLocaltionInView, simulation::Task taskAtThisTime, bool & possitionNotRight)
{
    double thresright = 0.6428;
    double thresleft = 0.35714;
    simulation::Task taskNextTime = taskAtThisTime; // 下一个时刻应该做的事情
    taskNextTime.type = 1;
    double pictureWidth = ImageSize.width; // 图像宽度
    double pictureHeight = ImageSize.height;// 图像高度
    if((gateLocaltionInView.x <= pictureWidth *thresleft) || (gateLocaltionInView.x >= pictureWidth * thresright))
    {
        possitionNotRight = true;
        cout<<"方向还需调整!"<<endl;
    }
    else
    {
        possitionNotRight = false;
        cout<<"方向调整完毕!"<<endl;
    }
 
    if(((gateLocaltionInView.x / pictureWidth) > thresright))
    {
        cout<<"横坐标比值:"<<(gateLocaltionInView.x / pictureWidth)<<endl;
        cout<<"thresright="<<thresright<<endl;
        LeftRotate(taskNextTime);
        cout<<"左旋漂!"<<endl;
    }
    if(((gateLocaltionInView.x / pictureWidth) < thresleft))
    {
        cout<<"横坐标比值:"<<(gateLocaltionInView.x / pictureWidth)<<endl;
        cout<<"thresleft="<<thresleft<<endl;
        RightRotate(taskNextTime);
        cout<<"右旋漂!"<<endl;
    }
    return taskNextTime;
}





/* 默认toWhite = 0, 将不需要考虑的颜色过滤，在bgrthres阈值范围内的需要过滤
   toWhite = 1时， 将在阈值范围内的颜色变为白色*/ 
cv::Mat colorMask(const cv::Mat src, Scalar * bgrthres, bool toWhite = false)
{
    int blackOrWhite = 0;
    if (toWhite) blackOrWhite = 255; // 将需要的颜色变为白色，
    cv::Mat dst = src;
    Scalar thresLow = bgrthres[0], thresHigh = bgrthres[1]; // 在阈值范围内的需要过滤
    for (int i = 0; i < dst.rows; i++)
	{
		for (int j = 0; j < dst.cols; j++)
		{
			//取出图片第i行第j列的像素
			uchar *p = dst.ptr<uchar>(i,j);
            bool flag = true;
            if (p[0] < thresLow[0] || p[0] > thresHigh[0])
                flag = false;
            if (p[1] < thresLow[1] || p[1] > thresHigh[1])
                flag = false;
            if (p[2] < thresLow[2] || p[2] > thresHigh[2])
                flag = false;
			if (flag)  //
			{
				p[0] = blackOrWhite;      //b
				p[1] = blackOrWhite;      //g
				p[2] = blackOrWhite;      //r
			}
		}
	}
    return dst;
}


// 二值化
cv::Mat gytThreshold(cv::Mat src, Scalar * bgrthres)
{
    cv::Mat dst = Mat(Size(src.cols, src.rows), CV_8UC1);
    Scalar thresLow = bgrthres[0], thresHigh = bgrthres[1];
    for (int i = 0; i < src.rows; i++)
	{
		for (int j = 0; j < src.cols; j++)
		{
			//取出图片第i行第j列的像素
			uchar *p = src.ptr<uchar>(i,j);
            uchar *p2 = dst.ptr<uchar>(i, j);
            bool flag = true;
            if (p[0] < thresLow[0] || p[0] > thresHigh[0])
                flag = false;
            if (p[1] < thresLow[1] || p[1] > thresHigh[1])
                flag = false;
            if (p[2] < thresLow[2] || p[2] > thresHigh[2])
                flag = false;
			if (flag)  //
			{
				*p2 = 255;
			}
            else
            {
                *p2 = 0;
            }         
		}
	}
    return dst;
}

// 在图像中找到指定颜色的区域, mask可以获取选中的区域
cv::Mat findColorArea(cv::Mat & src, cv::Mat & mask, cv::Scalar * hsvthres)
{
	cv::Mat hsv = src.clone();
	cv::cvtColor(hsv, hsv, cv::COLOR_BGR2HSV);
	//cv::inRange(hsv, cv::Scalar(36, 0, 0), cv::Scalar(70, 255, 255), dst);
    cv::Mat masktp;
	cv::inRange(hsv, hsvthres[0], hsvthres[1], masktp);
	mask = masktp > 0;
	cv::Mat dst;
	dst = cv::Mat::zeros(src.size(), CV_8UC3);

	// dst = src;
	
	for (int r = 0; r < src.rows; r++)
	{
		for (int c = 0; c < src.cols; c++)
        {
			uchar *p0 = src.ptr<uchar>(r, c);
			uchar *p = dst.ptr<uchar>(r, c);
			uchar *p1 = mask.ptr<uchar>(r, c);
			if (p1[0])
			{
				p[0] = p0[0];
				p[1] = p0[1];
				p[2] = p0[2];
			}
		}
    }
    return dst;
}


// 过滤广告牌上的东西
cv::Mat billboardMask(cv::Mat & src)
{
    cv::Mat dst = src.clone();
    Scalar hsvgreen[2] = {Scalar(36, 0, 0), Scalar(70, 255, 255)}; // 绿色
    Scalar hsvwhite[2] = {Scalar(0, 0, 210), Scalar(180, 30, 255)}; // 白色
    cv::Mat mask;
    cv::Mat whiteArea = findColorArea(src, mask, hsvwhite);
    cv::Mat edge;
    cv::Canny(whiteArea, edge, 125, 250);   // 参数待调整
    vector<cv::Vec4f> plines;

    cv::HoughLinesP(edge, plines, 1, CV_PI / 180.0, 70, 10, 70);

    for(size_t i = 0; i < plines.size(); i++)
    {
        cv::Vec4f hlines = plines[i];
        cv::line(dst, Point(hlines[0], hlines[1]), Point(hlines[2], hlines[3]), cv::Scalar(255, 255, 255), 3, 8);
    }

    // int temp = 0, tempb = 0, tempg = 0, tempr = 0;
    // for (int i = 0; i < dst.rows; i++)
	// {
	// 	for (int j = 0; j < dst.cols; j++)
	// 	{
	// 		//取出图片第i行第j列的像素
	// 		uchar *p = src.ptr<uchar>(i,j);
    //         uchar *p2 = dst.ptr<uchar>(i, j);
    //         // p[0] = blackOrWhite;      //b
    //         // p[1] = blackOrWhite;      //g
    //         // p[2] = blackOrWhite;      //r
    //         tempb = int(p[0]);
    //         tempg = int(p[1]);
    //         tempr = int(p[2]);
    //         temp = 2*tempg - tempb - tempr;
    //         if(temp <= 0)
    //         {
    //             *p2 = 0;
    //         }
    //         if(temp >= 255)
    //         {
    //             *p2 = 255;
    //         }
    //         else
    //         {
    //             *p2 = uchar(temp);
    //         }
    //         // *p2 = p[2];
	// 	}
	// }
    return dst;
    // return edge;

}


cv::Point tripleKidBallDetection(cv::Mat & src, cv::Mat & dst, Scalar * bgrthres, Scalar * bgrthres2, Scalar * bgrthres3, bool & findBallLocation)
{
    dst = src.clone();
    //dst = billboardMask(dst); // 广告部分为黑色
    cv::Point ballLocaltionInView;
    cv::Mat image_masked, image_masked2, binaryImage, imgNoBillBoard;
    image_masked = colorMask(dst, bgrthres, false);
    image_masked2 = colorMask(image_masked, bgrthres2, false); // r:160-180, g160-183, b170-200
    binaryImage = gytThreshold(image_masked2, bgrthres3);
    cv::Mat cannyImage;
    cv::Mat thresImage;
    vector<vector<Point> > contours0;
    vector<Vec4i> hierarchy;


    cv::Mat img_dilate;
    Mat element = getStructuringElement(MORPH_RECT, Size(10, 10), Point(-1, -1));
	/// 膨胀操作
	dilate(binaryImage, img_dilate, element);
    // src = img_dilate;


    findContours( img_dilate, contours0, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE);
    vector<RotatedRect> detectedEll;
    RotatedRect ell;

    for (size_t i = 0; i < contours0.size(); i++) 
    {
        if ((contours0[i].size() >= 10) && (contours0[i].size() <= 300))
        {
            ell = fitEllipse(contours0[i]);
            // detectedEll.push_back(ell);
            ellipse(dst, ell, Scalar(0, 0, 255), 2);
            // double S1 = contourArea(contours0[i]);
            double gytRate = ell.size.width / ell.size.height; // 椭圆的长短轴比率
            if ((0.7 <= gytRate) && (1 >= gytRate)) // (1600, 3500)  
            {
                // ell = fitEllipse(contours0[i]);
                // detectedEll.push_back(ell);
                ellipse(dst, ell, Scalar(255, 0, 0), 2);
                double S1 = (ell.size.width/2) * (ell.size.height/2) * M_PI;
                // double gytRate = ell.size.width / ell.size.height; // 椭圆的长短轴比率
                if (S1 >= 600 && S1 <= 14000)
                {
                    cout << "found soccer! S1 = " << S1 << ", gytRate = " << gytRate << ", contours0.size() = " << contours0[i].size() << endl;
                    ellipse(dst, ell, Scalar(0, 255, 0), 2);
                    detectedEll.push_back(ell);
                }
                else
                {
                    cout << "the blue ellipse: S1 = " << S1 << endl;
                }
            }
        }
        // Scalar color = Scalar(0, 0, 0);
        // circle(image_masked, Point(cir[i][0], cir[i][1]), cir[i][2], color, 3, 8);
    }
    // cout << "检测到" << cir.size() << "个似球状物！" << endl; 

    // vector<vector<Point>> contours1;
	// vector<Vec4i> hierarchy1;
	// vector<Rect> boundRect(contours1.size());

    // findContours(img_dilate, contours1, hierarchy1, RETR_TREE, CHAIN_APPROX_SIMPLE);
	// Rect Max;
	// int MinSize=0, Size = 0;
	// for (size_t i = 0; i < contours1.size(); i++)
	// {
	// 	if (contours1[i].size() >= 0)
	// 	{
	// 		//Mat temp = Mat(contours1[i]);
	// 		//cv::imshow("temp", temp);
	// 		Rect rTemp = boundingRect(Mat(contours1[i]));
	// 		//boundRect[i] = boundingRect(Mat(contours1[i]));
	// 		Size = rTemp.area();

	// 		// if (Size >= MaxSize)
	// 		// {
	// 		// 	MaxSize = Size;
	// 		// 	Max = rTemp;
	// 		// }

	// 		//cout << "左上角坐标 = " << boundRect[i].tl() << endl;
	// 		//cout << "右下角坐标 = " << boundRect[i].br() << endl;
	// 		//.tl(), boundRect[i].br()
    //         rectangle(dst, Max, Scalar(0, 255, 0), 2, 8, 0);

	// 	}
	// }

	// // rectangle(imageProc, Max, Scalar(0, 255, 0), 2, 8, 0);
	// double minx = 0, miny = 0;
	// minx = Max.x + cvRound(Max.width /2.0);
	// miny = Max.y + cvRound(Max.height );
	// circle(dst, Point(minx, miny), 8, Scalar(0, 0, 255),8);



    if (detectedEll.size() != 1)
    {
        cout << "error: 检测到" << detectedEll.size() << "个似球状物！" << endl;
        findBallLocation = false;
    }
    else 
    {
        Scalar color = Scalar(0, 0, 255);
        ballLocaltionInView.x = detectedEll[0].center.x;
        ballLocaltionInView.y = detectedEll[0].center.y;
        circle(dst, ballLocaltionInView, 1, Scalar(0, 250, 0), 2); // 圆心
        cout << "球心坐标为：(" << ballLocaltionInView.x << ", " << ballLocaltionInView.y << ")" << endl;
        findBallLocation = true;
    }
    // return Point(minx, miny);
    return ballLocaltionInView;
}


// 找球门的代码
cv::Point findgate(cv::Mat & src, cv::Mat & imageProc, bool & findGateLocation, std::string & robot)
{
    imageProc = src.clone();
    int minh = 0, mins = 0, minv = 0;
    int maxh = 0, maxs = 0, maxv = 0;
    if(robot == "redrobot")
	{
        minh = 100; maxh = 124;
        mins = 190; maxs = 255;
        minv = 46; maxv = 255;
    }
    else if(robot == "bluerobot")
    {
        minh = -10; maxh = 10;
        mins = 15; maxs = 255;
        minv = 45; maxv = 255;
    }
    else
    {
        cout<<"error: no such robot!"<<endl;
    }
	Mat special;
	Mat img_binary;
	Mat hsv;
	Mat img_dilate;
	vector<vector<Point>> contours1;
	vector<Vec4i> hierarchy1;
	vector<Rect> boundRect(contours1.size());


	cvtColor(imageProc, hsv, COLOR_BGR2HSV);

	inRange(hsv, Scalar(minh, mins, minv), Scalar(maxh, maxs, maxv), special);
	
	threshold(special, img_binary, 0, 255, THRESH_BINARY);

	//Mat element = getStructuringElement(MORPH_RECT,Size(5,5));
	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5), Point(-1, -1));
	/// 膨胀操作
	dilate(img_binary, img_dilate, element);//iterations=1
	//findContours(dilation, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
	
	findContours(img_dilate, contours1, hierarchy1, RETR_TREE, CHAIN_APPROX_SIMPLE);
	Rect Max;
	int MaxSize=0, Size = 0;
	for (size_t i = 0; i < contours1.size(); i++)
	{
		if (contours1[i].size() >= 0)
		{
			//Mat temp = Mat(contours1[i]);
			//cv::imshow("temp", temp);
			Rect rTemp = boundingRect(Mat(contours1[i]));
			//boundRect[i] = boundingRect(Mat(contours1[i]));
			Size = rTemp.area();
			if (Size >= MaxSize)
			{
				MaxSize = Size;
				Max = rTemp;
			}
			//cout << "左上角坐标 = " << boundRect[i].tl() << endl;
			//cout << "右下角坐标 = " << boundRect[i].br() << endl;
			//.tl(), boundRect[i].br()

		}
	}


	rectangle(imageProc, Max, Scalar(0, 255, 0), 2, 8, 0);
	double minx = 0, miny = 0;
	minx = Max.x + cvRound(Max.width /2.0);
	miny = Max.y + cvRound(Max.height );
    
    double pictureWidth = (src.size()).width; // 图像宽度
    double pictureHeight = (src.size()).height;// 图像高度

    cout<<"蓝色区域最大面积:"<<MaxSize<<endl;

    // if((minx >= pictureWidth * 4/5) || (minx <= pictureWidth * 1/5) || (MaxSize <= 1000))
    if(MaxSize <= 1000)
    {
        findGateLocation = false;
        cout<<"子函数未找到球门!"<<endl;
    }
    else
    {
        findGateLocation = true;
        cout<<"子函数找到球门!"<<endl;
    }
	circle(imageProc, Point(minx, miny), 8, Scalar(0, 0, 255),8);
	//cout << "中间点：( " << minx << "," << miny << ")" << endl;
	return Point(minx, miny);
}
