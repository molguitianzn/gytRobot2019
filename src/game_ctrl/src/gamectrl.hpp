#ifndef __GAMECTRL_HPP
#define __GAMECTRL_CPP

#include <QtWidgets>
#include <simulation/GameData.h>
#include <ros/ros.h>
#include <memory>
#include <game_ctrl/Score.h>
#include <game_ctrl/TeamInfo.h>
#include <std_srvs/Empty.h>

enum TeamColor
{
    TEAM_RED,
    TEAM_BLUE
};

class TeamLabel: public QWidget
{
Q_OBJECT
public:
    TeamLabel(QString name, TeamColor color);
    QString Name()
    {
        return nameLabel->text();
    }
    void SetScore(int s)
    {
        scoreLabel->setText(QString::number(s));
    }
    void SetName(QString name)
    {
        nameLabel->setText(name);
    }
private:
    QLabel *colorLabel;
    QLabel *nameLabel;
    QLabel *scoreLabel;
};

class StartDlg: public QDialog
{
Q_OBJECT
public:
    StartDlg(std::string cfg, std::string m);
    QString redName, blueName;
    std::string mode;
public slots:
    void OnStart();

private:
    QComboBox *redTeamBox, *blueTeamBox;
    QPushButton *startBtn;
};

class GameCtrl: public QMainWindow
{
Q_OBJECT
public:
    GameCtrl(QString red, QString blue, std::string m);

public slots:
    void OnFTimer();
    void OnBtnInitClicked();
    void OnBtnReadyClicked();
    void OnBtnPlayClicked();
    void OnBtnPauseClicked();
    void OnBtnFinishClicked();
    void OnBtnRedStandClicked();
    void OnBtnBlueStandClicked();
    void OnBtnRedResetClicked();
    void OnBtnBlueResetClicked();
    void OnBtnRedOKClicked();
    void OnBtnBlueOKClicked();

private:
    void ScoreUpdate(const game_ctrl::Score::ConstPtr &p);
    bool TeamInfoService(game_ctrl::TeamInfo::Request &req, game_ctrl::TeamInfo::Response &res);
    bool OutService(std_srvs::Empty::Request &req, std_srvs::Empty::Response &res);

private:
    QLabel *timeLabel, *stateLabel;
    TeamLabel *redTeam, *blueTeam;
    QTimer *fTimer;

    QPushButton *stateInitBtn, *stateReadyBtn, *statePlayBtn, *statePauseBtn, *stateFinishBtn;
    QPushButton *btnRedStand, *btnBlueStand;
    QPushButton *btnRedReset, *btnBlueReset;
    QPushButton *btnBlueOK, *btnRedOK;
    simulation::GameData mGdata;
    game_ctrl::Score mScore;

    std::shared_ptr<ros::NodeHandle> mNode;
    ros::Publisher mGdataPublisher;
    ros::Publisher mStandPublisher;
    ros::Subscriber mScoreSubscriber;
    ros::ServiceServer mTinfoServer;
    ros::ServiceServer mOutServer;

    std::string mMode;
    QString startTime, goalTime;
    QString redName, blueName;
    bool paused;
    bool ballOut;
    int mMs;
    int remainTime;
    int totalTime;
    const int mBasicTIme = 20;
};


#endif
