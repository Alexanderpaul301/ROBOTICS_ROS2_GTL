    #include <math.h>
    #include "TaskGoToPose.h"
    #include <vector>
    #include <iostream>
    using namespace std;
    using namespace task_manager_msgs;
    using namespace task_manager_lib;
    using namespace floor_nav;

    // #define DEBUG_GOTOPOSE
    #ifdef DEBUG_GOTOPOSE
    #warning Debugging task GOTOPOSE
    #endif


    TaskIndicator TaskGoToPose::initialise() 
    {
        RCLCPP_INFO(getNode()->get_logger(),"Going to %.2f %.2f",cfg->goal_x,cfg->goal_y);
        if (cfg->relative) {
            const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
            x_init = tpose.x;
            y_init = tpose.y;
            teta_init = tpose.theta;
        } else {
            x_init = 0.0;
            y_init = 0.0;
            teta_init = 0.0;
        }
        return TaskStatus::TASK_INITIALISED;
    }


    TaskIndicator TaskGoToPose::iterate()
    {   
        const geometry_msgs::msg::Pose2D & tpose = env->getPose2D();
        x = tpose.x;
        y = tpose.y;
        teta = tpose.theta;

        double r = hypot(y_init + cfg->goal_y-y,x_init + cfg->goal_x-x);


        stupid=cfg->stupid;
        if (stupid==true){
    
            if (r < cfg->dist_threshold) {
                if (fabs(remainder(cfg->goal_teta-teta,2*M_PI))<cfg->angle_threshold){
                    env->publishVelocity(0.0,0.0);
                    return TaskStatus::TASK_COMPLETED;
                }
                else{
                double sigma = remainder(cfg->goal_teta-teta,2*M_PI);
                double rot = ((sigma>0.0)?+1.0:-1.0)*cfg->max_angular_velocity*cfg->k_alpha/8.0;
                env->publishVelocity(0.0,rot);
                }
            }
            else {

            double alpha = remainder(atan2((y_init + cfg->goal_y-y),x_init + cfg->goal_x-x)-teta,2*M_PI);
    #ifdef DEBUG_GOTOPOSE
        printf("c %.1f %.1f %.1f g %.1f %.1f r %.3f alpha %.1f\n",
                x, y, teta*180./M_PI,
                cfg->goal_x,cfg->goal_y,r,alpha*180./M_PI);
    #endif
        if (fabs(alpha) > M_PI/9) {
            double rot = ((alpha>0)?+1:-1)*cfg->max_angular_velocity;
    #ifdef DEBUG_GOTOPOSE
            printf("Cmd v %.2f r %.2f\n",0.,rot);
    #endif
            env->publishVelocity(0,rot);
        } else {
            double vel = cfg->k_v * r;
            double rot = std::max(std::min(cfg->k_alpha*alpha,cfg->max_angular_velocity),-cfg->max_angular_velocity);
            if (vel > cfg->max_velocity) vel = cfg->max_velocity;
            if (vel <-cfg->max_velocity) vel = -cfg->max_velocity;
            if (rot > cfg->max_angular_velocity) rot = cfg->max_angular_velocity;
            if (rot <-cfg->max_angular_velocity) rot = -cfg->max_angular_velocity;
    #ifdef DEBUG_GOTO
            printf("Cmd v %.2f r %.2f\n",vel,rot);
    #endif
            env->publishVelocity(vel, rot);
        }

            }
        } // End of the stupid method



        else {
            // Smart method
            double alpha = -cfg->goal_teta + remainder(atan2((y_init + cfg->goal_y - y), x_init + cfg->goal_x - x) - teta, 2 * M_PI);
            double beta = -cfg->goal_teta - alpha;

            double v = cfg->k_r * r;
            double w = cfg->k_alpha * alpha + cfg->k_beta * beta;
        


            env->publishVelocity(v, w);

            // std::vector<std::vector<float>> A = {
            //     {-cfg->k_r, 0, 0},
            //     {0, -(cfg->k_alpha - cfg->k_r), -cfg->k_beta},
            //     {0, cfg->k_r, 0}
            // };

            // std::vector<std::vector<float>> rho_alpha_beta = {
            //     {r},
            //     {alpha},
            //     {beta}
            // };

            // std::vector<std::vector<float>> dot_rho_alpha_beta = multiplyMatrices(A, rho_alpha_beta);

            // if (alpha <= M_PI / 2 && alpha > -M_PI / 2) {
            //     std::vector<std::vector<float>> I1 = {
            //         {-cos(alpha), 0},
            //         {sin(alpha) / r, -1},
            //         {-sin(alpha) / r, 0}
            //     };
            //     std::vector<std::vector<float>> I1T = transposeMatrix(I1);
            //     std::vector<std::vector<float>> I1TI1 = multiplyMatrices(I1T, I1);
            //     std::vector<std::vector<float>> v_w_1 = multiplyMatrices(multiplyMatrices(inversMatrix(I1TI1), I1T), rho_alpha_beta);
            //     double v = v_w_1[0][0];
            //     double w = v_w_1[1][0];
            //     env->publishVelocity(v, w);
            // } else {
            //     std::vector<std::vector<float>> I2 = {
            //         {cos(alpha), 0},
            //         {-sin(alpha) / r, -1},
            //         {sin(alpha) / r, 0}
            //     };
            //     std::vector<std::vector<float>> I2T = transposeMatrix(I2);
            //     std::vector<std::vector<float>> I2TI2 = multiplyMatrices(I2T, I2);
            //     std::vector<std::vector<float>> v_w_2 = multiplyMatrices(multiplyMatrices(inversMatrix(I2TI2), I2T), rho_alpha_beta);
            //     double v = v_w_2[0][0];
            //     double w = v_w_2[1][0];
            //     env->publishVelocity(v, w);
            // }

            if (r < cfg->dist_threshold) {
                env->publishVelocity(0.0, 0.0);
                return TaskStatus::TASK_COMPLETED;
            }
            
        }
        return TaskStatus::TASK_RUNNING;

    }
       

    TaskIndicator TaskGoToPose::terminate()
    {
        env->publishVelocity(0,0);
        return TaskStatus::TASK_TERMINATED;
    }

    DYNAMIC_TASK(TaskFactoryGoToPose);
