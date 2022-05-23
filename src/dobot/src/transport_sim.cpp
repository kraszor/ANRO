#include <ros/ros.h>
#include "sensor_msgs/JointState.h"
#include <geometry_msgs/PointStamped.h>
#include <math.h>
#include <cmath>
#include "visualization_msgs/Marker.h"
#include <iostream>
#include <iomanip>


void move_joints(double coordinates[], ros::Publisher publisher, sensor_msgs::JointState msg)
{
    double x = coordinates[0] + 0.03;
    double y = coordinates[1] + 0.015;
    double z = coordinates[2] - 0.118 + 0.09;
    double joint_1 = atan2(y,x);
    double alfa = acos((pow(x,2.0)+pow(y,2.0)+pow(z,2.0)+pow(0.135,2.0)-pow(0.162,2.0))/
                     (2*0.135*sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0))));
    double beta = atan2(z,sqrt(pow(x,2.0)+pow(y,2.0)));
    double joint_2 = 1.48 - alfa - beta;
    double joint_3 = acos((pow(x,2.0)+pow(y,2.0)+pow(z,2.0)-pow(0.135,2.0)-pow(0.162,2.0))/
		     (2*0.135*0.162));
    double joint_4 = -joint_3 - joint_2 +1.571;
    double joint_5 = joint_1 - coordinates[3];
    msg.position[0] = joint_1;
    msg.position[1] = joint_2;
    msg.position[2] = joint_3;
    msg.position[3] = joint_4;
    msg.position[4] = joint_5;
    msg.header.frame_id = "base_link";
    msg.header.stamp = ros::Time::now();
    publisher.publish(msg);
    ros::spinOnce();
    ros::Duration(0.04).sleep();
}

void markers_handler(visualization_msgs::Marker object_marker, double cube_coordinates[],ros::Publisher marker_publisher, 
			visualization_msgs::Marker marker, double paper_coordinates[],ros::Publisher paper_publisher,
			double object_orientation, double paper_orientation)
{


	object_marker.header.frame_id = "base_link";
	object_marker.header.stamp = ros::Time();
	object_marker.ns = "my_second_marker";
	object_marker.id = 1;
	object_marker.type = visualization_msgs::Marker::CUBE;
	object_marker.action = visualization_msgs::Marker::ADD;
	object_marker.pose.position.x = cube_coordinates[0];
	object_marker.pose.position.y = cube_coordinates[1];
	object_marker.pose.position.z = cube_coordinates[2];
	object_marker.scale.x = 0.02;
	object_marker.scale.y = 0.02;
	object_marker.scale.z = 0.02;
	object_marker.color.a = 1.0;
	object_marker.color.r = 1.0;
	object_marker.color.g = 0.37;
	object_marker.color.b = 0.12;
        object_marker.pose.orientation.x = 0;	
	object_marker.pose.orientation.y = 0;
	object_marker.pose.orientation.w = cos(object_orientation/2);
	object_marker.pose.orientation.z = sin(object_orientation/2);
	marker.header.frame_id = "base_link";
	marker.header.stamp = ros::Time();
	marker.ns = "my_marker";
	marker.id = 0;
	marker.type = visualization_msgs::Marker::CUBE;
	marker.action = visualization_msgs::Marker::ADD;
	marker.pose.position.x = paper_coordinates[0];
	marker.pose.position.y = paper_coordinates[1];
	marker.pose.position.z = paper_coordinates[2];
	marker.scale.x = 0.1;
	marker.scale.y = 0.05;
	marker.scale.z = 0.001;
	marker.color.a = 1.0;
	marker.color.r = 1.0;
	marker.color.g = 0.0;
	marker.color.b = 0.8;
	marker.pose.orientation.x = 0;	
	marker.pose.orientation.y = 0;
	marker.pose.orientation.w = cos(paper_orientation/2);
	marker.pose.orientation.z = sin(paper_orientation/2);
	paper_publisher.publish( marker );

	marker_publisher.publish( object_marker );
	ros::Duration(0.01).sleep();
        ros::spinOnce();  
}


int main( int argc, char** argv )
{
    double coordinates [4]; // Current coordinates
    double cube_coordinates [3];
    double paper_coordinates [3];
    double object_orientation; 
    double paper_orientation;
    ros::init(argc, argv, "transport_sim");
    ros::NodeHandle n;
    ros::Publisher publisher = n.advertise<sensor_msgs::JointState>("/joint_states", 1000);
    ros::Publisher marker_publisher = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
    ros::Publisher paper_publisher = n.advertise<visualization_msgs::Marker>( "visualization_marker", 1);
    visualization_msgs::Marker marker;
    visualization_msgs::Marker object_marker;
    sensor_msgs::JointState msg;
    msg.position.resize(5);
    msg.name.resize(5);
    coordinates[0] = -0.17;
    coordinates[1] = 0.04;
    coordinates[2] = 0.16;
    coordinates[3] = 0;

    msg.name[0] = "joint1";
    msg.name[1] = "joint2";
    msg.name[2] = "joint3";
    msg.name[3] = "joint5";
    msg.name[4] = "joint4";
    n.getParam("/cube_x", cube_coordinates [0]);
    n.getParam("/cube_y", cube_coordinates [1]);
    n.getParam("/cube_orientation", object_orientation);
    n.getParam("/paper_x", paper_coordinates [0]);
    n.getParam("/paper_y", paper_coordinates [1]);
    n.getParam("/paper_orientation", paper_orientation);

    cube_coordinates [2] = 0.0051;


    paper_coordinates [2] = 0.0051;

    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
    ros::Duration(1).sleep();
// FAZA 1 RUCH DO KLOCKA
    while(ros::ok() && (abs(coordinates[0] - cube_coordinates [0]) >= 0.005 || 
	abs(coordinates[1] - cube_coordinates [1]) >= 0.005 || 
        abs(coordinates[3] - object_orientation) > 0.03))
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    if(abs(coordinates[0] - cube_coordinates [0]) > 0.002)
    {
	if(coordinates[0] < cube_coordinates[0])
	{
		coordinates[0] += 0.002;		
	}
	else
	{
		coordinates[0] -= 0.002;
	}	
	
    } 
    if(abs(coordinates[1] - cube_coordinates [1]) > 0.002)
    {
	if(coordinates[1] < cube_coordinates[1])
	{
		coordinates[1] += 0.002;		
	}
	else
	{
		coordinates[1] -= 0.002;
	}	
    } 	

    if(abs(coordinates[3] - object_orientation) > 0.03)
    {
	if(coordinates[3] < object_orientation)
	{
		coordinates[3] += 0.02;		
	}
	else
	{
		coordinates[3] -= 0.02;
	}	
    }  
    move_joints(coordinates, publisher, msg);
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
}

ros::Duration(0.3).sleep();


// FAZA 1.5 OPUSZCZANIE


while(ros::ok() && coordinates[2] > 0.01)
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    coordinates[2] -= 0.002;
    move_joints(coordinates, publisher, msg);
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
}

ros::Duration(2).sleep();

// FAZA 2 PODNOSZENIE
while(ros::ok() && coordinates[2] < 0.1)
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    coordinates[2] += 0.002;
    move_joints(coordinates, publisher, msg);
    cube_coordinates [2] = coordinates [2];
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
}

ros::Duration(0.5).sleep();

//FAZA 3 przeniesienie klocka
while(ros::ok() && (abs(coordinates[0] - paper_coordinates [0]) > 0.005 || 
	abs(coordinates[1] - paper_coordinates [1]) > 0.005) || abs(coordinates[3] - paper_orientation) > 0.03)
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    if(abs(coordinates[0] - paper_coordinates [0]) > 0.002)
    {
	if(coordinates[0] < paper_coordinates[0])
	{
		coordinates[0] += 0.002;		
	}
	else
	{
		coordinates[0] -= 0.002;
	}	
	
    } 
    if(abs(coordinates[1] - paper_coordinates [1]) > 0.002)
    {
	if(coordinates[1] < paper_coordinates[1])
	{
		coordinates[1] += 0.002;		
	}
	else
	{
		coordinates[1] -= 0.002;
	}	
    }
	cube_coordinates [0] = coordinates [0];
	cube_coordinates [1] = coordinates [1];
	cube_coordinates [2] = coordinates [2];

    if(abs(coordinates[3] - paper_orientation) > 0.03)
    {
	if(coordinates[3] - paper_orientation < 0)
	{
          coordinates[3] += 0.02;
	}
	else
        {
          coordinates[3] -= 0.02;
	}
	object_orientation = coordinates[3];
    }
    move_joints(coordinates, publisher, msg);
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation); 	
}
ros::Duration(0.5).sleep();
// FAZA 4 opuszczenie
while(ros::ok() && coordinates[2] > 0.01)
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    coordinates[2] -= 0.002;

    	cube_coordinates [0] = coordinates [0];
	cube_coordinates [1] = coordinates [1];
	cube_coordinates [2] = coordinates [2];
    move_joints(coordinates, publisher, msg);
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
}

// FAZA 5 podniesienie bez klocka
while(ros::ok() && coordinates[2] < 0.1)
{
    msg.header.stamp.sec = ros::Time::now().toSec();
    coordinates[2] += 0.002;
    move_joints(coordinates, publisher, msg);
    markers_handler(object_marker, cube_coordinates, marker_publisher, marker, paper_coordinates, paper_publisher, object_orientation, paper_orientation);
}
    return 0;
}
