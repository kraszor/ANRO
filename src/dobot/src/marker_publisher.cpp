#include <ros/ros.h>
#include "visualization_msgs/Marker.h"
#include <stdio.h>

int main( int argc, char** argv )
{
ros::init(argc, argv, "marker_publisher");
ros::NodeHandle n("~");
ros::Publisher pub = n.advertise<visualization_msgs::Marker>( "visualization_marker", 10 );
visualization_msgs::Marker marker;
visualization_msgs::Marker object_marker;
while(ros::ok())
{
marker.header.frame_id = "base_link";
marker.header.stamp = ros::Time();
marker.ns = "my_marker";
marker.id = 0;
marker.type = visualization_msgs::Marker::CUBE;
marker.action = visualization_msgs::Marker::ADD;
marker.pose.position.x = 0.23;
marker.pose.position.y = 0;
marker.pose.position.z = 0;
marker.pose.orientation.x = 0.0;
marker.pose.orientation.y = 0.0;
marker.pose.orientation.z = 0.0;
marker.pose.orientation.w = 1.0;
marker.scale.x = 0.1;
marker.scale.y = 0.05;
marker.scale.z = 0.001;
marker.color.a = 1.0;
marker.color.r = 1.0;
marker.color.g = 0.0;
marker.color.b = 0.8;


object_marker.header.frame_id = "base_link";
object_marker.header.stamp = ros::Time();
object_marker.ns = "my_second_marker";
object_marker.id = 1;
object_marker.type = visualization_msgs::Marker::CUBE;
object_marker.action = visualization_msgs::Marker::ADD;
object_marker.pose.position.x = 0.25;
object_marker.pose.position.y = 0.01;
object_marker.pose.position.z = 0.0051;
object_marker.pose.orientation.x = 0.0;
object_marker.pose.orientation.y = 0.0;
object_marker.pose.orientation.z = 0.0;
object_marker.pose.orientation.w = 1.0;
object_marker.scale.x = 0.02;
object_marker.scale.y = 0.02;
object_marker.scale.z = 0.02;
object_marker.color.a = 1.0;
object_marker.color.r = 1.0;
object_marker.color.g = 0.37;
object_marker.color.b = 0.12;

pub.publish( marker );
pub.publish( object_marker );
ros::spinOnce();   
}
return 0;
}
