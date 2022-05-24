#include <ros/ros.h>
#include "sensor_msgs/JointState.h"
#include <geometry_msgs/PointStamped.h>
#include <math.h>
#include <cmath>
#include "visualization_msgs/Marker.h"
#include <iostream>
#include <iomanip>
#include "dobot/SetEndEffectorParams.h"
#include "dobot/SetPTPJointParams.h"
#include "dobot/SetPTPCoordinateParams.h"
#include "dobot/SetPTPJumpParams.h"
#include "dobot/SetPTPCommonParams.h"
#include "dobot/SetPTPCmd.h"

#include "dobot/SetEndEffectorGripper.h"
#include "dobot/GetEndEffectorGripper.h"
#include "dobot/SetWAITCmd.h"
#include <ar_track_alvar_msgs/AlvarMarkers.h>
#include "dobot/GetPose.h"



    double cube_pos[6];
    double paper_pos[6];
    bool cube_found = false;
    bool paper_found = false;
    bool cube_end_pos_found = false;
    bool paper_end_pos_found = false;

void callback(const ar_track_alvar_msgs::AlvarMarkers::ConstPtr& msg) {
if(!((msg->markers).empty()))
{
	double x = msg->markers[0].pose.pose.position.x;
    	double y = msg->markers[0].pose.pose.position.y;
    	double z = msg->markers[0].pose.pose.position.z;
	if(msg->markers[0].id == 5 && !cube_found)
{
	cube_pos[0] = z*100;
	cube_pos[1] = y*100;
	cube_pos[2] = x*100;
	cube_found = true;
}
}
}


void callback_paper(const ar_track_alvar_msgs::AlvarMarkers::ConstPtr& msg) {
if(!((msg->markers).empty()))
{
	double x = msg->markers[0].pose.pose.position.x;
    	double y = msg->markers[0].pose.pose.position.y;
    	double z = msg->markers[0].pose.pose.position.z;
	if(msg->markers[0].id == 3 && !paper_found)
{
	paper_pos[0] = z*100;
	paper_pos[1] = y*100;
	paper_pos[2] = x*100;
	paper_found = true;
}

}
}




int main( int argc, char** argv )
{

    ros::init(argc, argv, "pick_place_cam");
    ros::NodeHandle n("~");
    ros::ServiceClient client;
    ros::ServiceClient gripperClient;
    ros::ServiceClient waiter;


// ETAP 1 SKAN TERENU 

    gripperClient = n.serviceClient<dobot::SetEndEffectorGripper>("/DobotServer/SetEndEffectorGripper");
    waiter = n.serviceClient<dobot::SetWAITCmd>("/DobotServer/SetWAITCmd");
    dobot::SetEndEffectorGripper gripper;
    dobot::SetWAITCmd waiterSrv;	
    ros::Subscriber subscriber = n.subscribe("/ar_pose_marker", 1000, callback);
    ros::Subscriber subscriber_paper = n.subscribe("/ar_pose_marker", 1000, callback_paper);
    // Set PTP common parameters
    do {
        client = n.serviceClient<dobot::SetPTPCommonParams>("/DobotServer/SetPTPCommonParams");
        dobot::SetPTPCommonParams srvc;

        srvc.request.velocityRatio = 15;
        srvc.request.accelerationRatio = 15;
        client.call(srvc);
    } while (0);

    do {
        client = n.serviceClient<dobot::SetPTPCoordinateParams>("/DobotServer/SetPTPCoordinateParams");
        dobot::SetPTPCoordinateParams srv;

        srv.request.xyzVelocity = 15;
        srv.request.xyzAcceleration = 15;
        srv.request.rVelocity = 50;
        srv.request.rAcceleration = 50;
        client.call(srv);
    } while (0);

	// Set PTP joint parameters
    do {
        client = n.serviceClient<dobot::SetPTPJointParams>("/DobotServer/SetPTPJointParams");
        dobot::SetPTPJointParams srv;

        for (int i = 0; i < 4; i++) {
            srv.request.velocity.push_back(70);
        }
        for (int i = 0; i < 4; i++) {
            srv.request.acceleration.push_back(70);
        }
        client.call(srv);
    } while (0);


    client = n.serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv;
    while(ros::ok())
   {
// P1
do {
	    gripper.request.enableCtrl = 1;
    	    gripper.request.grip = 0;
    	    gripper.request.isQueued = 1;
	    gripperClient.call(gripper);
            srv.request.ptpMode = 1;
            srv.request.x = 158;
            srv.request.y = 5;
            srv.request.z = 24;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
} while (1);
            
//P2
do {
            srv.request.ptpMode = 1;
            srv.request.x = 316;
            srv.request.y = 15;
            srv.request.z = 93;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
} while (1); 
//P3
do {
            srv.request.ptpMode = 1;
            srv.request.x = 224;
            srv.request.y = -190;
            srv.request.z = 69;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
} while (1);
//P4
do {
            srv.request.ptpMode = 1;
            srv.request.x = 158;
            srv.request.y = 5;
            srv.request.z = 24;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
} while (1);
//P5
do {
            srv.request.ptpMode = 1;
            srv.request.x = 245;
            srv.request.y = 120;
            srv.request.z = 51;
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	     
} while (1);
      break;
  }
        client = n.serviceClient<dobot::GetPose>("/DobotServer/GetPose");
        dobot::GetPose positionsrv;
// CZEKANIE NA WYKRYCIE ETAP 2
   while(cube_pos[3] == 0 || paper_pos[3] == 0)
{

     if(!cube_end_pos_found && cube_found )
{
        client.call(positionsrv);
	cube_pos[3] = positionsrv.response.x;
	cube_pos[4] = positionsrv.response.y;
	cube_pos[5] = positionsrv.response.z;
        cube_end_pos_found = true;
}

     if(!paper_end_pos_found && paper_found)
{
        client.call(positionsrv);
	paper_pos[3] = positionsrv.response.x;
	paper_pos[4] = positionsrv.response.y;
	paper_pos[5] = positionsrv.response.z;
        paper_end_pos_found = true;
            
}
	ros::spinOnce();

} 
        
	std::cout <<" papier"<< paper_pos[0] << " " << paper_pos[1] << " "  << paper_pos[2] << " " <<
paper_pos[3] << " " << paper_pos[4] << " "  << paper_pos[5] << std::endl;

client = n.serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");

do {
     if(cube_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] + 55 + cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = 51;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] - 55 - cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = 51;
     }
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	     
} while (1);

do {
     if(cube_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] + 55 + cube_pos[0];
     if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = -20;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] - 55 - cube_pos[0];
     if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = -20;
     }
            client.call(srv);
	    //waiterSrv.request.timeout = 400;
	    //waiterSrv.request.isQueued = 1;
	    //gripper.request.grip = 0.5;
	    //gripper.request.isQueued = 1;
	    //waiter.call(waiterSrv);
	    //gripperClient.call(gripper);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
     
} while (1);


do {
     if(cube_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] + 55 + cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = 51;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] - 55 - cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 27;
}
            srv.request.z = 51;
     }
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	     
} while (1);


do {
     if(paper_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = paper_pos[3] + 55 + paper_pos[0];
if(paper_pos[1] > 0)
     {
            srv.request.y = -paper_pos[4] + paper_pos[1] + 27;
     }
     else
{
	srv.request.y = -paper_pos[4] + paper_pos[1] - 97;
}
            srv.request.z = 51;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = paper_pos[3] - 55 - paper_pos[0];
if(paper_pos[1] > 0)
     {
            srv.request.y = -paper_pos[4] + paper_pos[1] + 27;
     }
     else
{
	srv.request.y = -paper_pos[4] + paper_pos[1] - 97;
}
            srv.request.z = 51;
     }
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	     
} while (1);

do {
     if(paper_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = paper_pos[3] + 55 + paper_pos[0];
     if(paper_pos[1] > 0)
     {
            srv.request.y = -paper_pos[4] + paper_pos[1] + 27;
     }
     else
{
	srv.request.y = -paper_pos[4] + paper_pos[1] - 97;
}
            srv.request.z = -20;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = paper_pos[3] - 55 - paper_pos[0];
     if(paper_pos[1] > 0)
     {
            srv.request.y = -paper_pos[4] + paper_pos[1] + 27;
     }
     else
{
	srv.request.y = -paper_pos[4] + paper_pos[1] - 97;
}
            srv.request.z = -20;
     }
            client.call(srv);
	    //waiterSrv.request.timeout = 400;
	    //waiterSrv.request.isQueued = 1;
	    //gripper.request.grip = 0;
	    //gripper.request.isQueued = 1;
	    //waiter.call(waiterSrv);
	    //gripperClient.call(gripper);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }

	     
} while (1);

do {
     if(cube_pos[0] < 0)
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] + 55 + cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 97;
}
            srv.request.z = 51;
     }
     else
     {
            srv.request.ptpMode = 1;
            srv.request.x = cube_pos[3] - 55 - cube_pos[0];
if(cube_pos[1] > 0)
     {
            srv.request.y = -cube_pos[4] + cube_pos[1] + 27;
     }
     else
{
	srv.request.y = -cube_pos[4] + cube_pos[1] - 97;
}
            srv.request.z = 51;
     }
            client.call(srv);
            if (srv.response.result == 0) {
                break;
            }     
            ros::spinOnce();
            if (ros::ok() == false) {
                break;
            }
	     
} while (1);


return 0;
}