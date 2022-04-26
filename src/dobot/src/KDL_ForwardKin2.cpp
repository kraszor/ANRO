#include <ros/ros.h>
#include "sensor_msgs/JointState.h"
#include <stdio.h>
#include <geometry_msgs/PoseStamped.h>
#include <cmath>
#include <iostream>
#include <kdl/chain.hpp>
#include <kdl/chainfksolver.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/frames_io.hpp>

using namespace KDL;



KDL::JntArray jointpositions = JntArray(5);


void callback(const sensor_msgs::JointState::ConstPtr& msg) {
	jointpositions(0) = msg->position[0];
    	jointpositions(1) = msg->position[1];
    	jointpositions(2) = msg->position[2];
    	jointpositions(3) = msg->position[3];
	jointpositions(4) = msg->position[4];
}

int main( int argc, char** argv )
{
    KDL::Chain chain;
    chain.addSegment(Segment(Joint(Joint::RotZ),Frame(Vector(0.0,0.0,0.09015))));
    chain.addSegment(Segment(Joint(Joint::RotY),Frame(Rotation::EulerZYX(0.0,0.0,-(M_PI/2)),Vector(0.0,0.0,0.135))));
    chain.addSegment(Segment(Joint(Joint::RotZ),Frame(Vector(0.0,-0.147,0.0))));
    chain.addSegment(Segment(Joint(Joint::RotZ),Frame(Rotation::EulerZYX(0.0,(M_PI/2),0.0), Vector(0.03,-0.03,0.0))));
    chain.addSegment(Segment(Joint(Joint::RotZ),Frame(Vector(0.0, 0.0, 0.09))));

    ChainFkSolverPos_recursive solver = ChainFkSolverPos_recursive(chain);

    ros::init(argc, argv, "KDL_ForwardKin2");
    ros::NodeHandle n("~");
    ros::Publisher publisher = n.advertise<geometry_msgs::PoseStamped>("/goalpose", 1000);
    ros::Subscriber subscriber = n.subscribe("/joint_states", 1000, callback);

    Frame matrix;    
   
    geometry_msgs::PoseStamped msg;
    while(ros::ok())
{
    solver.JntToCart(jointpositions,matrix);
    double x = matrix(0,3);
    double y = matrix(1,3);
    double z = matrix(2,3);
    msg.header.frame_id = "base_link";
    msg.pose.position.x = x;
    msg.pose.position.y = y;
    msg.pose.position.z = z;
    std::cout << x << " " << y << " "<< z << std::endl;
    publisher.publish(msg);
    ros::spinOnce();   
}
    return 0;
}
