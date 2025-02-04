#ifndef TASK_GOTOPOSE_H
#define TASK_GOTOPOSE_H

#include "task_manager_lib/TaskInstance.h"
#include "floor_nav/SimTasksEnv.h"

using namespace task_manager_lib;

namespace floor_nav {
    struct TaskGoToPoseConfig : public TaskConfig {
        TaskGoToPoseConfig() {
            define("goal_teta",  3.14/4.0,"Theta orientation at destination",false, goal_teta);
            define("goal_x",  0.0,"X coordinate of destination",false, goal_x);
            define("goal_y",  0.0,"Y coordinate of destination",false, goal_y);
            define("k_v",  1.0,"Gain for velocity control",false, k_v);
            define("k_r",  0.6,"Gain for angular control",false, k_r);
            define("k_alpha",  3.0,"Gain for angular control",false, k_alpha);
            define("k_beta",  -3.0,"Gain for angular control",false, k_beta);
            define("max_velocity", 1.0,"Max allowed velocity",false, max_velocity);
            define("max_angular_velocity",  1.0,"Max allowed angular velocity",false, max_angular_velocity);
            define("dist_threshold",  0.1,"Distance at which a the target is considered reached",false, dist_threshold);
            define("angle_threshold",  0.1,"Angle at which a the target is considered reached",false, angle_threshold);
            define("relative",  false,"Is the target pose relative or absolute",true, relative);
            define("stupid", false,"Use a stupid control law",false, stupid);
            define("flag_holo",  false,"Use holonomic control",true, flag_holo);
        }

        // convenience aliases, updated by update from the config data
        double goal_teta;
        double goal_x,goal_y;
        double k_v,k_alpha;
        double k_r,k_beta;
        double max_velocity;
        double max_angular_velocity;
        double dist_threshold;
        double angle_threshold;
        bool relative;
        bool stupid;
        bool flag_holo;

    };


    class TaskGoToPose : public TaskInstance<TaskGoToPoseConfig,SimTasksEnv>
    {
        protected:
            double x_init,y_init;
            double teta_init;
            double x;
            double y;
            double teta;
            bool stupid;
            bool flag_holo;
        public:
            TaskGoToPose(TaskDefinitionPtr def, TaskEnvironmentPtr env) : Parent(def,env) {}
            virtual ~TaskGoToPose() {};

            virtual TaskIndicator initialise() ;

            virtual TaskIndicator iterate();

            virtual TaskIndicator terminate();
    };
    class TaskFactoryGoToPose : public TaskDefinition<TaskGoToPoseConfig, SimTasksEnv, TaskGoToPose>
    {

        public:
            TaskFactoryGoToPose(TaskEnvironmentPtr env) : 
                Parent("GoToPose","Reach a desired destination",true,env) {}
            virtual ~TaskFactoryGoToPose() {};
    };
};

#endif // TASK_GOTOPOSE_H
