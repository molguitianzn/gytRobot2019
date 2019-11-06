#include <ros/ros.h>
#include <QApplication>
#include "gamectrl.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "gamectrl");
    QApplication app(argc, argv);
    std::string cfg="";
    std::string mode="";
    if(argc>1)
        cfg=std::string(argv[1]);
    if(argc>2)
        mode = std::string(argv[2]);
    StartDlg sdlg(cfg, mode);
    sdlg.exec();
    if(sdlg.redName.size()>0){
        GameCtrl foo(sdlg.redName, sdlg.blueName, mode);
        foo.show();
        return app.exec();
    }
    return 0;
}