# 东南大学RoboCup2019校赛资料包说明  

## 2019-10-17 更新说明  
- 添加了获取得分情况的代码，具体函数为GetScore()，详情请参照代码
- 添加了STATE_READY的处理代码，每一次开球，都会先是STATE_READY状态，在这里，可以重置自己定义的一些变量。

## 最新更新
- 添加了预赛专用比赛控制器，命令如下
```
roslaunch game_ctrl game_pre.launch
```

## 运行环境  
- ubuntu 16.04  
- ros-kinetic-desktop-full  
- webots  
- ubuntu安装可参照网上教程  
- ros安装可参照[官方网站](http://wiki.ros.org/kinetic/Installation/Ubuntu)
- ros入门可参照[bilibili古月居](https://www.bilibili.com/video/av59458869?from=search&seid=5767370996297806957)

## 使用步骤  
- 下载代码 
    ```
    cd ~
    git clone https://gitee.com/robocup/SEURoboCup2019.git
    ```

- 初始化 
    ```
    cd ~/SEURoboCup2019
    ./init.sh
    catkin_make
    ```
    如果中间报错，忽略即可

- 创建自己的包  
    ```
    cd ~/SEURoboCup2019/src
    ./createPkg.sh teamname      
    # teamname为自己的队名
    ```

- 修改自己的代码
    只需要修改自己创建的包内的代码，src下的main.cpp或者scripts下的main.py  

- 启动 
    + 打开一个新终端，执行下面命令
    ```
    roslaunch simulation webots.launch
    ```
    + 打开一个新终端，执行下面命令
    ```
    roslaunch simulation controller.launch
    ```
    + 打开一个新终端，执行下面命令,该部分的作用是启动比赛控制器及裁判器，启动后，会弹出一个界面，会选择红蓝两队的队名，若想控制红色机器人，则红色框下选择自己的队名，蓝色亦然。
    ```
    roslaunch game_ctrl game_ctrl.launch
    ```
    + 打开一个新终端，执行下面命令
    ```
    roslaunch teamname robot_cpp.launch # run cxx 
    roslaunch teamname robot_py.alunch  # run py
    # teamname为上面创建包时输入的名称
    # 第一条为运行c++控制程序，第二条为运行python控制程序，选择其中一个
    ```

## 推荐IDE  
- Visual Studio Code
- VS Code插件
    + C/C++
    + Python
    + ROS
    + CMake
- 使用说明  
    上述插件安装完毕后，使用VS Code打开工程文件夹，即可对工程进行修改，同时具备自动补全功能。
