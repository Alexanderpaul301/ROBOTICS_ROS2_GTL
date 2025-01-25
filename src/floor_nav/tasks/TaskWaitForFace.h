#ifndef TASK_WAIT_FOR_FACE_H
#define TASK_WAIT_FOR_FACE_H

#include "task_manager_lib/TaskInstance.h"
#include "floor_nav/SimTasksEnv.h"

using namespace task_manager_lib;

namespace floor_nav{
    struct TaskWaitForFaceConfig : public TaskConfig {
        TaskWaitForFaceConfig() {
        define("roiarray",  face_msg::msg::Roilist(),"Face detection message",nullptr, roilist);
        }
    };

    class TaskWaitForFace : public TaskInstance<TaskWaitForFaceConfig, SimTasksEnv>
    {
        public:
            TaskWaitForFace(TaskDefinitionPtr def, TaskEnvironmentPtr env) : Parent(def,env) {}
            virtual ~TaskWaitForFace() {};

            virtual TaskIndicator iterate();

    };

    class TaskFactoryWaitForFace : public TaskDefinition<TaskWaitForFaceConfig, SimTasksEnv, TaskWaitForFace>
    {
        public:
            TaskFactoryWaitForFace(TaskEnvironmentPtr env) : 
                Parent("WaitForFace","Do nothing until we reach a given destination",true,env) {}
            virtual ~TaskFactoryWaitForFace() {};
    };


}
#endif // TASK_WAIT_FOR_ROI_H