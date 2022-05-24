#include <ros/ros.h>
#include "visualization_msgs/Marker.h"
#include <stdio.h>
#include <ar_track_alvar_msgs/AlvarMarkers.h>
#include "dobot/GetPose.h"
double coordinates [6];
double orientation [8];
void callback(const ar_track_alvar_msgs::AlvarMarkers::ConstPtr& msg) {
if(!((msg->markers).empty()))
{
	double x = msg->markers[0].pose.pose.position.x;
    	double y = msg->markers[0].pose.pose.position.y;
    	double z = msg->markers[0].pose.pose.position.z;
	double o_x = msg->markers[0].pose.pose.orientation.x;
	double o_y =  msg->markers[0].pose.pose.orientation.y;
	double o_z = msg->markers[0].pose.pose.orientation.z;
	double o_w = msg->markers[0].pose.pose.orientation.w;
	if(msg->markers[0].id == 3)
{
	orientation[0] = o_y; 
	orientation[1] = o_x;
	orientation[2] = o_z;
	orientation[3] = o_w;
	coordinates[0] = -x;
	coordinates[1] = y;
	coordinates[2] = z;
}
	if(msg->markers[0].id == 5)
{
	coordinates[3] = -x;
	coordinates[4] = y;
	coordinates[5] = z;
	orientation[4] = o_y; 
	orientation[5] = -o_x;
	orientation[6] = o_z;
	orientation[7] = o_w;
}

}
}

int main( int argc, char** argv )
{
ros::init(argc, argv, "marker_publisher");
ros::NodeHandle n("~");
ros::Publisher pub = n.advertise<visualization_msgs::Marker>( "visualization_marker", 1000 );
ros::Publisher pub_paper = n.advertise<visualization_msgs::Marker>( "visualization_marker", 1000 );
visualization_msgs::Marker marker;
visualization_msgs::Marker object_marker;
ros::Subscriber subscriber = n.subscribe("/ar_pose_marker", 1000, callback);
ros::ServiceClient client;
client = n.serviceClient<dobot::GetPose>("/DobotServer/GetPose");
dobot::GetPose positionsrv;
while(ros::ok())
{
client.call(positionsrv);
double pos_x =positionsrv.response.x/1000;
double pos_y =positionsrv.response.y/1000;
double pos_z =positionsrv.response.z/1000;
marker.header.frame_id = "base_link";
marker.header.stamp = ros::Time();
marker.ns = "my_marker";
marker.id = 0;
marker.type = visualization_msgs::Marker::CUBE;
marker.action = visualization_msgs::Marker::ADD;
marker.pose.position.x = coordinates[0]+pos_x+0.095;
marker.pose.position.y = coordinates[1]+pos_y;
marker.pose.position.z = coordinates[2]+pos_z;
marker.pose.orientation.x = orientation[0];
marker.pose.orientation.y = orientation[1];
marker.pose.orientation.z = orientation[2];
marker.pose.orientation.w = orientation[3];
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
object_marker.pose.position.x = coordinates[3]+pos_x+0.095;
object_marker.pose.position.y = coordinates[4]+pos_y;
object_marker.pose.position.z = coordinates[5]+pos_z;
object_marker.pose.orientation.x = orientation[4];
object_marker.pose.orientation.y = orientation[5];
object_marker.pose.orientation.z = orientation[6];
object_marker.pose.orientation.w = orientation[7];
object_marker.scale.x = 0.02;
object_marker.scale.y = 0.02;
object_marker.scale.z = 0.02;
object_marker.color.a = 1.0;
object_marker.color.r = 1.0;
object_marker.color.g = 0.37;
object_marker.color.b = 0.12;

pub.publish( marker );
pub_paper.publish( object_marker );
ros::spinOnce();   
}
return 0;
}
