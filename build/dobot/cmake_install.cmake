# Install script for directory: /home/kgrela/dobot_ws/src/dobot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/kgrela/dobot_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/srv" TYPE FILE FILES
    "/home/kgrela/dobot_ws/src/dobot/srv/SetCmdTimeout.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetDeviceSN.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetDeviceName.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetDeviceName.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetDeviceVersion.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetPose.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetAlarmsState.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/ClearAllAlarmsState.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetHOMEParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetHOMEParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetHOMECmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetEndEffectorParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetEndEffectorParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetEndEffectorLaser.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetEndEffectorLaser.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetEndEffectorSuctionCup.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetEndEffectorSuctionCup.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetEndEffectorGripper.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetEndEffectorGripper.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetJOGJointParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetJOGJointParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetJOGCoordinateParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetJOGCoordinateParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetJOGCommonParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetJOGCommonParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetJOGCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetPTPJointParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetPTPJointParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetPTPCoordinateParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetPTPCoordinateParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetPTPJumpParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetPTPJumpParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetPTPCommonParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetPTPCommonParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetPTPCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetCPParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetCPParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetCPCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetARCParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetARCParams.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetARCCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetWAITCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetTRIGCmd.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetIOMultiplexing.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetIOMultiplexing.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetIODO.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetIODO.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetIOPWM.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetIOPWM.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetIODI.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetIOADC.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetEMotor.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetInfraredSensor.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetInfraredSensor.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetColorSensor.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/GetColorSensor.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetQueuedCmdStartExec.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetQueuedCmdStopExec.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetQueuedCmdForceStopExec.srv"
    "/home/kgrela/dobot_ws/src/dobot/srv/SetQueuedCmdClear.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/kgrela/dobot_ws/build/dobot/catkin_generated/installspace/dobot-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/kgrela/dobot_ws/devel/include/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/kgrela/dobot_ws/devel/share/roseus/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/kgrela/dobot_ws/devel/share/common-lisp/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/kgrela/dobot_ws/devel/share/gennodejs/ros/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/kgrela/dobot_ws/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/kgrela/dobot_ws/devel/lib/python2.7/dist-packages/dobot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/kgrela/dobot_ws/build/dobot/catkin_generated/installspace/dobot.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/kgrela/dobot_ws/build/dobot/catkin_generated/installspace/dobot-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES
    "/home/kgrela/dobot_ws/build/dobot/catkin_generated/installspace/dobotConfig.cmake"
    "/home/kgrela/dobot_ws/build/dobot/catkin_generated/installspace/dobotConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot" TYPE FILE FILES "/home/kgrela/dobot_ws/src/dobot/package.xml")
endif()

