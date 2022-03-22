#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetCmdTimeout.h"
#include "dobot/SetQueuedCmdClear.h"
#include "dobot/SetQueuedCmdStartExec.h"
#include "dobot/SetQueuedCmdForceStopExec.h"
#include "dobot/GetDeviceVersion.h"

#include "dobot/SetEndEffectorParams.h"
#include "dobot/SetPTPJointParams.h"
#include "dobot/SetPTPCoordinateParams.h"
#include "dobot/SetPTPJumpParams.h"
#include "dobot/SetPTPCommonParams.h"
#include "dobot/SetPTPCmd.h"

#include "dobot/SetEndEffectorGripper.h"
#include "dobot/GetEndEffectorGripper.h"
#include "dobot/SetWAITCmd.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "DobotClient");
    ros::NodeHandle n;

    ros::ServiceClient client;
    ros::ServiceClient gripperClient;
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

	// Set end effector parameters
    client = n.serviceClient<dobot::SetEndEffectorParams>("/DobotServer/SetEndEffectorParams");
    dobot::SetEndEffectorParams srv5;
    srv5.request.xBias = 70;
    srv5.request.yBias = 0;
    srv5.request.zBias = 0;
    client.call(srv5);

	// Set PTP joint parameters
    do {
        client = n.serviceClient<dobot::SetPTPJointParams>("/DobotServer/SetPTPJointParams");
        dobot::SetPTPJointParams srv;

        for (int i = 0; i < 4; i++) {
            srv.request.velocity.push_back(200);
        }
        for (int i = 0; i < 4; i++) {
            srv.request.acceleration.push_back(200);
        }
        client.call(srv);
    } while (0);

	// Set PTP coordinate parameters
    do {
        client = n.serviceClient<dobot::SetPTPCoordinateParams>("/DobotServer/SetPTPCoordinateParams");
        dobot::SetPTPCoordinateParams srv;

        srv.request.xyzVelocity = 200;
        srv.request.xyzAcceleration = 200;
        srv.request.rVelocity = 100;
        srv.request.rAcceleration = 100;
        client.call(srv);
    } while (0);

    	// Set PTP jump parameters
    do {
        client = n.serviceClient<dobot::SetPTPJumpParams>("/DobotServer/SetPTPJumpParams");
        dobot::SetPTPJumpParams srv;

        srv.request.jumpHeight = 50;
        srv.request.zLimit = 200;
        client.call(srv);
    } while (0);

    	// Set PTP common parameters
    do {
        client = n.serviceClient<dobot::SetPTPCommonParams>("/DobotServer/SetPTPCommonParams");
        dobot::SetPTPCommonParams srv;

        srv.request.velocityRatio = 75;
        srv.request.accelerationRatio = 75;
        client.call(srv);
    } while (0);

    client = n.serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    gripperClient = n.serviceClient<dobot::SetEndEffectorGripper>("/DobotServer/SetEndEffectorGripper");
    waiter = n.serviceClient<dobot::SetWAITCmd>("/DobotServer/SetWAITCmd");
    dobot::SetPTPCmd srv;
    dobot::SetEndEffectorGripper gripper;
    dobot::SetWAITCmd waiterSrv;	
    bool finished = false;
    while (ros::ok() && !finished){
	do {
	   gripper.request.enableCtrl = 1;
    	   gripper.request.grip = 0;
    	   gripper.request.isQueued = 1;
	   gripperClient.call(gripper);
	} while(0);
	        do {
            srv.request.ptpMode = 0;
            srv.request.x = 297.990112305;
            srv.request.y = 94.2416610718;
            srv.request.z = -26.3947677612;
            srv.request.r = -10;
	    waiterSrv.request.timeout = 400;
	    waiterSrv.request.isQueued = 1;
	    gripper.request.grip = 1;
	    gripper.request.isQueued = 1;
            client.call(srv);
	    waiter.call(waiterSrv);
	    gripperClient.call(gripper);
	    waiter.call(waiterSrv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
        } while (1);
	do {
            srv.request.ptpMode = 0;
            srv.request.x = 239.982971191;
            srv.request.y = -112.251243591;
            srv.request.z = -25.7663116455;
            srv.request.r = -10.7471008301;
	    waiterSrv.request.timeout = 200;
	    waiterSrv.request.isQueued = 1;
	    gripper.request.grip = 0;
	    gripper.request.isQueued = 1;
            client.call(srv);
	    waiter.call(waiterSrv);
	    gripperClient.call(gripper);
	    waiterSrv.request.timeout = 400;
	    waiter.call(waiterSrv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
        } while (1);
	gripper.request.enableCtrl = 0;
	gripperClient.call(gripper);
	do {
            srv.request.ptpMode = 0;
            srv.request.x = 279.209503174;
            srv.request.y = -13.4259614944;
            srv.request.z = 5.4412689209;
            srv.request.r = -70.7471008301;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
        } while (1);
	ros::spinOnce();
	finished = true;
	}
return 0;
}
	