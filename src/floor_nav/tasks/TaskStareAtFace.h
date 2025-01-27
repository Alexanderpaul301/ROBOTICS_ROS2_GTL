#ifndef TASK_STARE_AT_FACE_H
#define TASK_STARE_AT_FACE_H

#include "task_manager_lib/TaskInstance.h"
#include "floor_nav/SimTasksEnv.h"

using namespace task_manager_lib;

namespace floor_nav{
    struct TaskStareAtFaceConfig : public TaskConfig {
        TaskStareAtFaceConfig() {}
    };

    class TaskStareAtFace : public TaskInstance<TaskStareAtFaceConfig, SimTasksEnv>
    {
        public:
            TaskStareAtFace(TaskDefinitionPtr def, TaskEnvironmentPtr env) : Parent(def,env) {}
        
            virtual ~TaskStareAtFace() {};

            virtual TaskIndicator iterate();
            virtual TaskIndicator terminate(){
                RCLCPP_INFO(node->get_logger(),"Terminating the task TaskStareAtFace");
                return TaskStatus::TASK_TERMINATED;
            }

    };

    class TaskFactoryStareAtFace : public TaskDefinition<TaskStareAtFaceConfig, SimTasksEnv, TaskStareAtFace>
    {
        public:
            TaskFactoryStareAtFace(TaskEnvironmentPtr env) : 
                Parent("StareAtFace","Do nothing until we reach a given destination",true,env) {}
            virtual ~TaskFactoryStareAtFace() {}
    };


}
#endif // TASK_STARE_AT_FACE_H