
#include <QApplication>
#include "configuration.hpp"
#include <GL/glut.h>
#include "action_debuger.hpp"
#include <ros/ros.h>

using namespace std;
using namespace robot;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "debuger");
    QApplication app(argc, argv);
    glutInit(&argc, argv);
    CONF->init(0);
    ROBOT->init(CONF->robot_file(), CONF->action_file(), CONF->offset_file());
    ActionDebuger foo;
    foo.show();
    return app.exec();
}
