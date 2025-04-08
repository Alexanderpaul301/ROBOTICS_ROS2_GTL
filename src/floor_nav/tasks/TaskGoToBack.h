#ifndef TASK_GOTO_BACK_H
#define TASK_GOTO_BACK_H

#include "task_manager_lib/TaskInstance.h"
#include "floor_nav/SimTasksEnv.h"

using namespace task_manager_lib;

namespace floor_nav {
    struct TaskGoToBackConfig : public TaskConfig {
        TaskGoToBackConfig() {
            define("k_v",  1.0,"Gain for velocity control",false, k_v);
            define("k_alpha",  1.0,"Gain for angular control",false, k_alpha);
            define("max_velocity",  1.0,"Max allowed velocity",false, max_velocity);
            define("max_angular_velocity",  1.0,"Max allowed angular velocity",false, max_angular_velocity);
            define("dist_threshold",  0.1,"Distance at which a the target is considered reached",false, dist_threshold);
           
        }

        // convenience aliases, updated by update from the config data
        double k_v,k_alpha;
        double max_velocity;
        double max_angular_velocity;
        double dist_threshold;

    };


    class TaskGoToBack : public TaskInstance<TaskGoToBackConfig,SimTasksEnv>
    {
        protected:
            double x_init,y_init;
        public:
            TaskGoToBack(TaskDefinitionPtr def, TaskEnvironmentPtr env) : Parent(def,env) {}
            virtual ~TaskGoToBack() {};

            virtual TaskIndicator initialise() ;

            virtual TaskIndicator iterate();

            virtual TaskIndicator terminate();
    };
    class TaskFactoryGoToBack : public TaskDefinition<TaskGoToBackConfig, SimTasksEnv, TaskGoToBack>
    {

        public:
            TaskFactoryGoToBack(TaskEnvironmentPtr env) : 
                Parent("GoTo","Reach a desired destination",true,env) {}
            virtual ~TaskFactoryGoToBack() {};
    };
};

#endif // TASK_GOTO_H