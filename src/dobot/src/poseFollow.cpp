#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetCmdTimeout.h"
#include "dobot/SetQueuedCmdClear.h"
#include "dobot/SetQueuedCmdStartExec.h"
#include "dobot/SetQueuedCmdForceStopExec.h"
#include "dobot/GetDeviceVersion.h"
#include "dobot/GetPose.h"
#include "dobot/SetWAITCmd.h"
#include "sensor_msgs/JointState.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "DobotClient");
    ros::NodeHandle n;
    ros::Publisher publisher = n.advertise<sensor_msgs::JointState>("/joint_states", 1000);
    ros::ServiceClient client;
    ros::ServiceClient waiter;

	

	// SetCmdTimeout
    client = n.serviceClient<dobot::SetCmdTimeout>("/DobotServer/SetCmdTimeout");
    dobot::SetCmdTimeout srv1;
    srv1.request.timeout = 3000;
    if (client.call(srv1) == false) {
        ROS_ERROR("Failed to call SetCmdTimeout. Maybe DobotServer isn't started yet!");
        return -1;

	// Clear the command queue
    client = n.serviceClient<dobot::SetQueuedCmdClear>("/DobotServer/SetQueuedCmdClear");
    dobot::SetQueuedCmdClear srv2;
    client.call(srv2);

    	// Start running the command queue
    client = n.serviceClient<dobot::SetQueuedCmdStartExec>("/DobotServer/SetQueuedCmdStartExec");
    dobot::SetQueuedCmdStartExec srv3;
    client.call(srv3);
    }

    client = n.serviceClient<dobot::GetPose>("/DobotServer/GetPose");
    waiter = n.serviceClient<dobot::SetWAITCmd>("/DobotServer/SetWAITCmd");
    dobot::SetWAITCmd waiterSrv;
    dobot::GetPose positionsrv;
    sensor_msgs::JointState msg;
	msg.position.resize(5);
	msg.name.resize(5);
    while (ros::ok()){
	client.call(positionsrv);
	msg.header.stamp.sec = ros::Time::now().toSec();
	msg.name[0] = "joint1";
	msg.name[1] = "joint2";
	msg.name[2] = "joint3";
	msg.name[3] = "joint5";
	msg.name[4] = "joint4";
	msg.position[0] = (3.14/180)*positionsrv.response.jointAngle[0];
	msg.position[1] = (3.14/180)*positionsrv.response.jointAngle[1];
	msg.position[2] = (3.14/180)*positionsrv.response.jointAngle[2] +1.571;
	msg.position[3] = -(3.14/180)*positionsrv.response.jointAngle[1]-(3.14/180)*positionsrv.response.jointAngle[2];
	msg.position[4] = (3.14/180)*positionsrv.response.jointAngle[3];
	publisher.publish(msg);
	std::cout << (3.14/180)*positionsrv.response.jointAngle[0] << " " << (3.14/180)*positionsrv.response.jointAngle[1] << " "<< (3.14/180)*positionsrv.response.jointAngle[2] << " " << "0.0" << " " <<(3.14/180)*positionsrv.response.jointAngle[3]<< std::endl;
	
	    
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	ros::spinOnce();
	}
return 0;
}
	