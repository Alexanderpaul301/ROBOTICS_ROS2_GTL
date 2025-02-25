#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from numpy import * 
from numpy.linalg import inv
from math import pi, sin, cos
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped
import threading
from rover_driver_base.rover_kinematics import RoverKinematics
from ar_loc_base.rover_odo import RoverOdo


class RoverKF(RoverOdo):
    def __init__(self, node, initial_pose, initial_uncertainty):
        super().__init__(node,initial_pose, initial_uncertainty)
        self.X = mat(vstack(initial_pose))
        self.P = mat(diag(initial_uncertainty))
        self.ellipse_pub = node.create_publisher(Marker,"~/ellipse",1)
        self.pose_with_cov_pub = node.create_publisher(PoseWithCovarianceStamped,"~/pose_with_covariance",1)

    def getRotationFromWorldToRobot(self):
        return self.getRotation(-self.X[2,0])

    def predict(self, logger, motor_state, drive_cfg, encoder_precision):
        self.lock.acquire()
        # The first time, we need to initialise the state
        if self.first_run:
            self.motor_state.copy(motor_state)
            self.first_run = False
            self.lock.release()
            return (self.X, self.P)
        # print "-"*32
        # then compute odometry using least square
        iW = self.prepare_inversion_matrix(drive_cfg)
        S = self.prepare_displacement_matrix(self.motor_state,motor_state,drive_cfg)
        self.motor_state.copy(motor_state)
        
        # TODO: Implement Kalman prediction here
        
        # ultimately : 
        
        n=iW.shape[0]
        logger.info("taille iW"+str(n))

        # Definition of the matrices 
        Q=numpy.eyes(n)*10**(-6) # We define the covariance matrix for model incompletion and also in order to invert the Pk matrix (avoid singularity of the matrix)
        Qu=numpy.eyes(n)*encoder_precision
        self.P=numpy.eyes(n)*10**(-6)

        Rteta=zeros((n,n))
        Rteta[0:2,0:2]=self.getRotationFromWorldToRobot()
        Rteta[n-1,n-1]=1

        # A and B matrices are the jacobian A=df/dX and B=df/dS
        B= Rteta @ iW

        A = numpy.eyes(n)

        # Predict with the movement deltaX = iWS and then Xk= Xk-1 + R*iW*S=Xk-1 +R*deltaX, incertainty is in the S matrix and Xk-1, 
        # CovF(X,Y)=dF/dX Cov(X)dF/dX.T + dF/dY*Cov(Y)*dF/dY.T

        self.X =  self.X.copy() + Rteta @ iW @ S
        # The noises are from the command point of view and the censors point of view. Qu is front the motor point of view and is equal to encoder_precision and Q is made to avoid singular matrix
        self.P = A @ self.P.copy() @ A.T + B @ Qu @ B.T + Q

        self.lock.release()
        return (self.X,self.P)

    def update_ar(self, logger, Z, L, uncertainty):
        self.lock.acquire()
        logger.info("Update: L="+str(L.T)+" X="+str(self.X.T))
        # TODO: Implement Kalman Obervation here
        Rteta=zeros((3,3))
        Rteta[0:2,0:2]=-self.getRotationFromWorldToRobot()
        Rteta[2,2]=1

        H=-Rteta

        # Compute the Kalman gain
        # ! MISTAKE : Dimension issue  # Should be fixed now
            # ! shape(H)=(2,2)
            # ! shape(P)=(3,3)
        
        K = self.P @ H.T @ inv(H @ self.P @ H.T + uncertainty)

        # Update the state estimate using the observation
        # ! MISTAKE : Dimension issue
            # ! shape(L)=(2,1)
            # ! shape(Rteta)=(2,2)
            # ! shape(K)=(3,3)

        logger.info("Dim L"+ str(L.shape))
        logger.info("Dim R"+ str(Rteta.shape))
        logger.info("Dim K"+ str(K.shape))

        self.X = self.X.copy() + K @ (Z - (Rteta @ (L - self.X[:2]))) 

        # Update the state covariance matrix
        self.P = (eye(self.P.shape[0]) - K @ H) @ self.P

        self.lock.release()
        return (self.X,self.P)

    # def update_comp   ass(self, logger, Z, uncertainty):
    #     self.lock.acquire()
    #     logger.info("Update: S="+str(Z)+" X="+str(self.X.T))
    #     # Implement kalman update using compass here
    #     # TODO

    # ####################################################################################################################
    #     # Define observation matrix H (the compass only affects theta)
    #     Rteta=self.getRotationFromWorldToRobot()
    #       H=numpy.zeros(3,3)
            # H[0:1,0:1]=-Rteta
            # H[2,2]=1

    #     # Compute the innovation (difference between measurement and estimate)
    #     teta_estimated = Z[2,0]
    #     innovation = (Z - theta_estimated + pi) % (2 * pi) - pi  # Normalize angle difference

    #     # Compute the Kalman gain
    #     K = self.P @ H.T @ inv(H @ self.P @ H.T + uncertainty)  # Kalman gain

    #     # Update the state estimate using the observation
    #     self.X = self.X.copy() + K @ innovation

    #     # Normalize theta to keep it in [-pi, pi]
    #     self.X[2, 0] = (self.X[2, 0] + pi) % (2 * pi) - pi  

    #     # Update the state covariance matrix
    #     self.P = (eye(self.P.shape[0]) - K @ H) @ self.P
    # ####################################################################################################################

    #     # self.X = 
    #     # self.P = 
    #     self.lock.release()
        # return (self.X,self.P)

    def publish(self, pose_pub, odom_pub, target_frame, stamp, child_frame):
        logger = rclpy.logging.get_logger('rover_kf')
        logger.info("Publishing pose...")
        
        pose_simple = super().publish(pose_pub, odom_pub, target_frame, stamp, child_frame)
        pose = PoseWithCovarianceStamped()
        pose.header = pose_simple.header
        pose.pose.pose = pose_simple.pose
        C = [0.]*36
        C[ 0] = self.P[0,0]; C[ 1] = self.P[0,1]; C[ 5] = self.P[0,2]
        C[ 6] = self.P[1,0]; C[ 7] = self.P[1,1]; C[11] = self.P[1,2]
        C[30] = self.P[2,0]; C[31] = self.P[2,1]; C[35] = self.P[2,2]
        pose.pose.covariance = C
        self.pose_with_cov_pub.publish(pose)

        marker = Marker()
        marker.header = pose.header
        marker.ns = "kf_uncertainty"
        marker.id = 1
        marker.type = Marker.CYLINDER
        marker.action = Marker.ADD
        marker.pose = pose.pose.pose
        marker.scale.x = 3*sqrt(self.P[0,0])
        marker.scale.y = 3*sqrt(self.P[1,1]);
        marker.scale.z = 0.1;
        marker.color.a = 1.0;
        marker.color.r = 1.0;
        marker.color.g = 1.0;
        marker.color.b = 0.0;
        self.ellipse_pub.publish(marker)

        

