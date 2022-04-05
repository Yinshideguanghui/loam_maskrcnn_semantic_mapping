#include <ros/ros.h>
#include "loam_velodyne/TransformMaintenance.h"


/** Main node entry point. */
int main(int argc, char **argv)
{
  ros::init(argc, argv, "transformMaintenance");
  ros::NodeHandle node;
  ros::NodeHandle privateNode("~");

  loam::TransformMaintenance transMaintenance;

  if (transMaintenance.setup(node, privateNode)) {
    // initialization successful
    ros::spin();  // 持续运行使用的是ros内置方法
  }

  return 0;
}
