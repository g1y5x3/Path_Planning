/*
 * =====================================================================================
 *
 *       Filename:  harmonic_potential.h
 *
 *    Description:  The header for the ROS global planner plugin that implements the 
 *                  Harmonic Potential Field algorithm
 *
 *        Version:  1.0
 *        Created:  05/02/2017 11:05:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yixiang Gao (yg), yg5d6@mail.missouri.edu
 *        Company:  University of Missouri - Columbia
 *
 * =====================================================================================
 */

#include <ros/ros.h>
#include <costmap_2d/costmap_2d.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Point.h>
#include <nav_msgs/Path.h>
#include <tf/transform_datatypes.h>
#include <vector>
#include <nav_core/base_global_planner.h>
#include <nav_msgs/GetPlan.h>

namespace Harmonic_planner {

class HarmonicPlannerROS : public nav_core::BaseGlobalPlanner {
    public:
        // Default constructor
        HarmonicPlannerROS();
        HarmonicPlannerROS(std::string name, costmap_2d::Costmap2DROS* costmap_ros);
        ~HarmonicPlannerROS();

        void initialize(std::string name, costmap_2d::Costmap2DROS* costmap_ros);
        bool makePlan(const geometry_msgs::PoseStamped& start, const geometry_msgs::PoseStamped& goal, std::vector<geometry_msgs::PoseStamped>& plan);

}   // end of class

}   // end of namespace
