#include "gamectrl.hpp"
#include <map>
#include <fstream>
#include <simulation/Stand.h>
#include <std_srvs/Empty.h>
#include <std_srvs/SetBool.h>

using namespace std;

map<int, string> states = {
    {simulation::GameData::STATE_INIT, "Init"},
    {simulation::GameData::STATE_READY, "Ready"},
    {simulation::GameData::STATE_PLAY, "Play"},
    {simulation::GameData::STATE_PAUSE, "Pause"},
    {simulation::GameData::STATE_END, "End"},
};


TeamLabel::TeamLabel(QString name, TeamColor color)
{
    colorLabel = new QLabel();
    colorLabel->setFixedWidth(16);
    QString cstr = color==TEAM_RED?"background-color:red;":"background-color:blue";
    colorLabel->setStyleSheet(cstr);
    nameLabel = new QLabel(name);
    nameLabel->setStyleSheet("font-size:20px;");
    scoreLabel = new QLabel("0");
    scoreLabel->setFixedWidth(30);
    scoreLabel->setAlignment(Qt::AlignCenter);
    scoreLabel->setStyleSheet("font-size:20px;");

    QHBoxLayout *lay = new QHBoxLayout();
    lay->addWidget(colorLabel);
    lay->addWidget(nameLabel);
    lay->addWidget(scoreLabel);
    this->setLayout(lay);
}

StartDlg::StartDlg(std::string cfg, std::string m)
{
    mode = m;
    string line;
    QStringList teams;
    ifstream ifs(cfg);
    if(ifs){
        while(getline(ifs, line)){
            if(!line.empty() && line.back()=='\n') 
                line.pop_back();
            if(!line.empty())
                teams<<QString::fromStdString(line);
            line.clear();
        }
        ifs.close();
    }
    QVBoxLayout *leftLayout, *rightLayout;
    leftLayout = new QVBoxLayout;
    rightLayout = new QVBoxLayout;
    QLabel *redLabel = new QLabel();
    redLabel->setStyleSheet("background-color: red;");
    QLabel *blueLabel = new QLabel();
    blueLabel->setStyleSheet("background-color: blue;");
    redTeamBox = new QComboBox();
    blueTeamBox = new QComboBox();
    redTeamBox->addItems(teams);
    blueTeamBox->addItems(teams);
    leftLayout->addWidget(redLabel);
    leftLayout->addWidget(redTeamBox);
    rightLayout->addWidget(blueLabel);
    rightLayout->addWidget(blueTeamBox);

    startBtn = new QPushButton("Start");
    connect(startBtn, &QPushButton::clicked, this, &StartDlg::OnStart);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *upLayout = new QHBoxLayout;
    upLayout->addLayout(leftLayout);
    upLayout->addLayout(rightLayout);
    mainLayout->addLayout(upLayout);
    mainLayout->addWidget(startBtn);
    setLayout(mainLayout);
    if(mode != "norm")
        blueTeamBox->setEnabled(false);
}

void StartDlg::OnStart()
{
    redName = redTeamBox->currentText();
    blueName = blueTeamBox->currentText();
    if(mode != "norm")
        blueName = "invalid";
    if(redName.size()==0 || blueName.size()==0)
        return;
    if(redName == blueName){
        QMessageBox::warning(this, "Error", "Two teams is the same!");
        return;
    }
    this->close();
}

GameCtrl::GameCtrl(QString red, QString blue, std::string m)
{
    mMode = m;
    redName = red;
    blueName = blue;
    if(mMode == "pre")
        totalTime = 60*5;
    else if(mMode == "norm")
        totalTime = 60*10;
    else 
        totalTime = 60;
    
    QHBoxLayout *mainLayout = new QHBoxLayout();
    QVBoxLayout *leftLayout, *rightLayout;
    leftLayout = new QVBoxLayout();
    rightLayout = new QVBoxLayout();

    timeLabel = new QLabel(QString::number(totalTime));
    timeLabel->setAlignment(Qt::AlignCenter);
    timeLabel->setStyleSheet("font-size:36px;");
    stateLabel = new QLabel("Init");
    stateLabel->setAlignment(Qt::AlignCenter);
    stateLabel->setStyleSheet("font-size:36px;");
    redTeam = new TeamLabel(red, TEAM_RED);
    blueTeam = new TeamLabel(blue, TEAM_BLUE);
    btnRedReset = new QPushButton("Reset");
    btnRedStand = new QPushButton("Stand");
    btnRedOK = new QPushButton("OK");
    btnRedReset->setStyleSheet("font-size:20px;");
    btnRedStand->setStyleSheet("font-size:20px;");
    btnRedOK->setStyleSheet("font-size:20px;");
    btnBlueStand = new QPushButton("Stand");
    btnBlueReset = new QPushButton("Reset");
    btnBlueOK = new QPushButton("OK");
    btnBlueStand->setStyleSheet("font-size:20px;");
    btnBlueReset->setStyleSheet("font-size:20px;");
    btnBlueOK->setStyleSheet("font-size:20px;");

    QHBoxLayout *redBtnLayout = new QHBoxLayout();
    redBtnLayout->addWidget(btnRedReset);
    redBtnLayout->addWidget(btnRedStand);
    redBtnLayout->addWidget(btnRedOK);
    QHBoxLayout *blueBtnLayout = new QHBoxLayout();
    blueBtnLayout->addWidget(btnBlueReset);
    blueBtnLayout->addWidget(btnBlueStand);
    blueBtnLayout->addWidget(btnBlueOK);

    leftLayout->addWidget(timeLabel);
    leftLayout->addWidget(stateLabel);
    leftLayout->addWidget(redTeam);
    leftLayout->addLayout(redBtnLayout);
    if(mMode == "norm")
    {
        leftLayout->addWidget(blueTeam);
        leftLayout->addLayout(blueBtnLayout);
    }

    stateInitBtn = new QPushButton("Init");
    stateInitBtn->setMinimumHeight(40);
    stateInitBtn->setStyleSheet("font-size:20px;");
    rightLayout->addWidget(stateInitBtn);
    stateReadyBtn = new QPushButton("Ready");
    stateReadyBtn->setMinimumHeight(40);
    stateReadyBtn->setStyleSheet("font-size:20px;");
    rightLayout->addWidget(stateReadyBtn);
    statePlayBtn = new QPushButton("Play");
    statePlayBtn->setMinimumHeight(40);
    statePlayBtn->setStyleSheet("font-size:20px;");
    rightLayout->addWidget(statePlayBtn);
    statePauseBtn = new QPushButton("Pause");
    statePauseBtn->setMinimumHeight(40);
    statePauseBtn->setStyleSheet("font-size:20px;");
    rightLayout->addWidget(statePauseBtn);
    stateFinishBtn = new QPushButton("Finish");
    stateFinishBtn->setMinimumHeight(40);
    stateFinishBtn->setStyleSheet("font-size:20px;");
    rightLayout->addWidget(stateFinishBtn);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    QWidget *mainWidget = new QWidget();
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);

    fTimer = new QTimer();
    connect(fTimer, &QTimer::timeout, this, &GameCtrl::OnFTimer);
    connect(stateInitBtn, &QPushButton::clicked, this, &GameCtrl::OnBtnInitClicked);
    connect(stateReadyBtn, &QPushButton::clicked, this, &GameCtrl::OnBtnReadyClicked);
    connect(statePlayBtn, &QPushButton::clicked, this, &GameCtrl::OnBtnPlayClicked);
    connect(statePauseBtn, &QPushButton::clicked, this, &GameCtrl::OnBtnPauseClicked);
    connect(stateFinishBtn, &QPushButton::clicked, this, &GameCtrl::OnBtnFinishClicked);
    connect(btnRedStand, &QPushButton::clicked, this, &GameCtrl::OnBtnRedStandClicked);
    connect(btnBlueStand, &QPushButton::clicked, this, &GameCtrl::OnBtnBlueStandClicked);
    connect(btnRedReset, &QPushButton::clicked, this, &GameCtrl::OnBtnRedResetClicked);
    connect(btnBlueReset, &QPushButton::clicked, this, &GameCtrl::OnBtnBlueResetClicked);
    connect(btnRedOK, &QPushButton::clicked, this, &GameCtrl::OnBtnRedOKClicked);
    connect(btnBlueOK, &QPushButton::clicked, this, &GameCtrl::OnBtnBlueOKClicked);

    fTimer->start(mBasicTIme);
    remainTime = totalTime;
    paused = true;
    ballOut=false;
    mMs=0;
    if(mMode == "kick") mGdata.mode = mGdata.MODE_KICK;
    else mGdata.mode = mGdata.MODE_NORM;
    mGdata.state = simulation::GameData::STATE_INIT;
    mGdata.remainTime = totalTime;
    mNode = std::make_shared<ros::NodeHandle>();
    mGdataPublisher = mNode->advertise<simulation::GameData>("/gamedata", 1);
    mStandPublisher = mNode->advertise<simulation::Stand>("/stand", 1);
    mScoreSubscriber = mNode->subscribe("/judge/score", 1, &GameCtrl::ScoreUpdate, this);
    mTinfoServer = mNode->advertiseService("/teaminfo", &GameCtrl::TeamInfoService, this);
    mOutServer = mNode->advertiseService("/out", &GameCtrl::OutService, this);
}

void GameCtrl::OnFTimer()
{
    ros::spinOnce();
    blueTeam->SetScore(mScore.blue);
    redTeam->SetScore(mScore.red);
    mGdata.blueScore = mScore.blue;
    mGdata.redScore = mScore.red;
    mGdata.remainTime = remainTime;
    mGdataPublisher.publish(mGdata);
    if(ballOut)
    {
        ballOut = false;
        if(mMode == "kick")
            OnBtnInitClicked();
        else
            OnBtnReadyClicked();
    }
    if(paused) return;
    mMs += mBasicTIme;
    if(mMs%1000==0){
        remainTime--;
        timeLabel->setText(QString::number(remainTime));
        if(remainTime<=0)
            OnBtnFinishClicked();
    }
}

void GameCtrl::OnBtnInitClicked()
{
    paused = true;
    mMs = 0;
    remainTime = totalTime;
    mGdata.state = simulation::GameData::STATE_INIT;
    stateLabel->setText(QString::fromStdString(states[mGdata.state]));
    timeLabel->setText(QString::number(remainTime));
    startTime = QTime::currentTime().toString("HH:mm:ss");
}

void GameCtrl::OnBtnReadyClicked()
{
    paused = true;
    mGdata.state = simulation::GameData::STATE_READY;
    stateLabel->setText(QString::fromStdString(states[mGdata.state]));
}

void GameCtrl::OnBtnPlayClicked()
{
    paused = false;
    mGdata.state = simulation::GameData::STATE_PLAY;
    stateLabel->setText(QString::fromStdString(states[mGdata.state]));
}

void GameCtrl::OnBtnPauseClicked()
{
    paused = true;
    mGdata.state = simulation::GameData::STATE_PAUSE;
    stateLabel->setText(QString::fromStdString(states[mGdata.state]));
}

void GameCtrl::OnBtnFinishClicked()
{
    paused = true;
    mGdata.state = simulation::GameData::STATE_END;
    stateLabel->setText(QString::fromStdString(states[mGdata.state]));
    if(mMode == "norm")
    {
        QString endTime = QTime::currentTime().toString("HH:mm:ss");
        ofstream ofs("results-norm.txt", ios::out|ios::app);
        if(!ofs){
            ROS_ERROR("open results-norm.txt failed");
            return;
        }
        ofs<<startTime.toStdString()<<" --- "<<endTime.toStdString()<<endl;
        ofs<<redName.toStdString()<<" : "<<blueName.toStdString()<<"\t"<<mScore.red<<" : "<<mScore.blue<<endl;
        ofs<<endl;
        ofs.close();
    }
    else if(mMode == "pre")
    {
        ofstream ofs("results-pre.txt", ios::out|ios::app);
        if(!ofs){
            ROS_ERROR("open results-pre.txt failed");
            return;
        }
        ofs<<redName.toStdString()<<"\t"<<mScore.red<<"\t"<<goalTime.toStdString()<<endl;
        ofs<<endl;
        ofs.close();
    }
    else
    {
        ofstream ofs("results.txt", ios::out|ios::app);
        if(!ofs){
            ROS_ERROR("open results.txt failed");
            return;
        }
        ofs<<redName.toStdString()<<"\t"<<mScore.red<<"\t"<<endl;
        ofs<<endl;
        ofs.close();
    }
    
}

void GameCtrl::OnBtnRedStandClicked()
{
    simulation::Stand s;
    s.red=true;
    s.blue=false;
    mStandPublisher.publish(s);
}

void GameCtrl::OnBtnBlueStandClicked()
{
    simulation::Stand s;
    s.red=false;
    s.blue=true;
    mStandPublisher.publish(s);
}

void GameCtrl::OnBtnRedResetClicked()
{
    std_srvs::SetBool srv;
    srv.request.data = static_cast<uint8_t>(true);
    ros::service::call("redrobot/reset", srv);
}

void GameCtrl::OnBtnBlueResetClicked()
{
    std_srvs::SetBool srv;
    srv.request.data = static_cast<uint8_t>(true);
    ros::service::call("bluerobot/reset", srv);
}

void GameCtrl::OnBtnRedOKClicked()
{
    std_srvs::SetBool srv;
    srv.request.data = static_cast<uint8_t>(false);
    ros::service::call("redrobot/reset", srv);
}

void GameCtrl::OnBtnBlueOKClicked()
{
    std_srvs::SetBool srv;
    srv.request.data = static_cast<uint8_t>(false);
    ros::service::call("bluerobot/reset", srv);
}

void GameCtrl::ScoreUpdate(const game_ctrl::Score::ConstPtr &p)
{
    mScore = *(p.get());
    goalTime = QString::number(totalTime-remainTime);
    OnBtnReadyClicked();
}

bool GameCtrl::TeamInfoService(game_ctrl::TeamInfo::Request &req,
        game_ctrl::TeamInfo::Response &res)
{
    string tname = req.teamname;
    if(tname == redName.toStdString())
        res.team = "redrobot";
    else if(tname == blueName.toStdString())
        res.team = "bluerobot";
}

bool GameCtrl::OutService(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res)
{
    ballOut = true;
}