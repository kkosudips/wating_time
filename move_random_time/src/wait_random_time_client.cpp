#include "ros/ros.h"
#include "move_random_time/WaitRandomTime.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "wait_random_time_client");
  if (argc != 4)
  {
    ROS_INFO("usage: wait_random_time_client x,y,flag");
    return 1;
  }

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<move_random_time::WaitRandomTime>("wait_random_time");
  move_random_time::WaitRandomTime srv;
  srv.request.x = atoll(argv[1]);
  srv.request.y = atoll(argv[2]);
  srv.request.flag = atoll(argv[3]);
  

  if (client.call(srv))
  {
    ROS_INFO("response:[robot:%ld,waiting %ld -3 s]", (long int)srv.request.flag,(long int)srv.response.time);
  }
  else
  {
    ROS_ERROR("Failed to call service wait_random_time");
    return 1;
  }

  return 0;
}
