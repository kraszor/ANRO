#include <ros/ros.h>
#include "sensor_msgs/JointState.h"
#include <stdio.h>
#include <geometry_msgs/PointStamped.h>
#include <cmath>
#include <iostream>
#include <math.h>



double coordinates [3];
void callback(const geometry_msgs::PointStamped::ConstPtr& msg) {
	double x = msg->point.x;
    	double y = msg->point.y;
    	double z = msg->point.z;
	coordinates[0] = x;
	coordinates[1] = y;
	coordinates[2] = z;
}

int main( int argc, char** argv )
{
    ros::init(argc, argv, "KDL_InverseKin");
    ros::NodeHandle n("~");
    ros::Publisher publisher = n.advertise<sensor_msgs::JointState>("/joint_states", 1000);
    ros::Subscriber subscriber = n.subscribe("/clicked_point", 1000, callback);
    sensor_msgs::JointState msg;
    msg.position.resize(5);
    msg.name.resize(5);
    	coordinates[0] = -0.17;
	coordinates[1] = 0.04;
	coordinates[2] = 0.16;
    while(ros::ok())
{
    double joint_1 = atan2(coordinates[1],coordinates[0]);
    double alfa = acos((pow(coordinates[0],2.0)+pow(coordinates[1],2.0)+pow(coordinates[2],2.0)+pow(0.135,2.0)-pow(0.147,2.0))/
                     (2*0.135*sqrt(pow(coordinates[0],2.0)+pow(coordinates[1],2.0)+pow(coordinates[2]-0.138+0.135,2.0))));
    double beta = atan2(coordinates[2]-0.138+0.135,sqrt(pow(coordinates[0],2.0)+pow(coordinates[1],2.0)));
    double joint_2 = 1.484 - alfa - beta;
    double joint_3 = acos((pow(coordinates[0],2.0)+pow(coordinates[1],2.0)+pow(coordinates[2]-0.138+0.135,2.0)-pow(0.135,2.0)-pow(0.147,2.0))/
		     (2*0.135*0.147));
    double joint_4 = -joint_3 - joint_2 +1.571;
    double joint_5 = 0;
    msg.header.frame_id = "base_link";
    msg.header.stamp.sec = ros::Time::now().toSec();
    msg.name[0] = "joint1";
    msg.name[1] = "joint2";
    msg.name[2] = "joint3";
    msg.name[3] = "joint5";
    msg.name[4] = "joint4";
    msg.position[0] = joint_1;
    msg.position[1] = joint_2;
    msg.position[2] = joint_3;
    msg.position[3] = joint_4;
    msg.position[4] = joint_5;
    std::cout << joint_1 << " " << joint_2 << " " << joint_3 << " " << joint_4 << " " << joint_5 << std::endl;
    publisher.publish(msg);
    ros::spinOnce();   
}
    return 0;
}
