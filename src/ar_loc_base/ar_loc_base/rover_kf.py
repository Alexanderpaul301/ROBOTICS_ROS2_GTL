#!/usr/bin/env python3
from rclpy.node import Node
import rclpy
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
        self.P=eye(3)*10**(-6)

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
        # logger.info("taille iW"+str(iW.shape))

        # Definition of the matrices 
        Q=eye(n)*10**(-4) # We define the covariance matrix for model incompletion and also in order to invert the Pk matrix (avoid singularity of the matrix)
        Qu=eye(12)*encoder_precision*10**(-1)

        Rteta=zeros((3,3))
        Rteta[0:2,0:2]=self.getRotationFromWorldToRobot()
        Rteta[2,2]=1
        # logger.info("Rteta" + str(Rteta)) #Rteta seems to have the good form

        # A and B matrices are the jacobian A=df/dX and B=df/ddelraX
        B = Rteta @ iW
        # logger.info("Taille B" + str(B.shape))

        theta = self.X[2, 0] 
        delta_x, delta_y = (iW @ S)[:2]

        A = eye(n)
        A[0, 2] = -sin(theta) * delta_x - cos(theta) * delta_y
        A[1, 2] = cos(theta) * delta_x - sin(theta) * delta_y
        # logger.info("Taille A" + str(A.shape))
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
        Rteta[0:2,0:2]=self.getRotationFromWorldToRobot()
        Rteta[2,2]=1

        # We declare this matrix to be able to have a H of the right dimension
        # ! dim H = (2,3)
        # logger.info("taille H" + str(H.shape))

        theta = self.X[2, 0]  # Rover orientation
        Lx, Ly = L[0, 0], L[1, 0]  # Landmark position
        x, y = self.X[0, 0], self.X[1, 0]  # Rover position

        delta_x = Lx - x
        delta_y = Ly - y

        cos_theta = cos(theta)
        sin_theta = sin(theta)

        # Jacobian H (2x3)
        H = array([
            [-cos_theta, -sin_theta, -sin_theta * delta_x + cos_theta * delta_y],
            [ sin_theta, -cos_theta,  -cos_theta * delta_x - sin_theta * delta_y]
        ])
    

        # Compute the Kalman gain        
        K = self.P @ H.T @ inv(H @ self.P @ H.T + uncertainty*eye(2))


        # logger.info("Dim L"+ str(L.shape))
        # logger.info("Dim R"+ str(Rteta.shape))
        # logger.info("Dim K"+ str(K.shape))
        # logger.info("taille L" +str((L.shape)))
        # logger.info("taille Rtronqué" +str((Rteta[0:2,0:2].shape)))
        # logger.info("taille X" +str((self.X[0:2].shape)))
        # logger.info("taille K" +str((K.shape)))
        self.X = self.X.copy() + K @ (Z - (Rteta[0:2,0:2] @ (L - self.X[0:2]))) 


        # Update the state covariance matrix
        self.P = (eye(self.P.shape[0]) - K @ H) @ self.P

        logger.info("Update Covariance " + str(self.P.T))
        self.lock.release()
        return (self.X,self.P)


    def update_compass(self, logger, Z, uncertainty):
        self.lock.acquire()
        logger.info("Update: S="+str(Z)+" X="+str(self.X.T))
        # Implement kalman update using compass here
        # TODO
        # Define observation matrix H (only affects theta)
        H = array([[0, 0, 1]])  # 1x3 matrix

        # Compute the innovation (difference between measurement and estimate)
        theta_estimated = self.X[2, 0]
        innovation = array([[ (Z - theta_estimated + pi) % (2 * pi) - pi ]])  # Convert to (1,1) shape
        # Compute the Kalman gain
        S = H @ self.P @ H.T + uncertainty  # Innovation covariance
        K = self.P @ H.T @ inv(S)  # Kalman gain

        # Update the state estimate using the observation
        self.X = self.X.copy() + K @ innovation

        # Normalize theta to keep it in [-pi, pi]
        self.X[2, 0] = (self.X[2, 0] + pi) % (2 * pi) - pi  

        # Update the state covariance matrix
        self.P = (eye(self.P.shape[0]) - K @ H) @ self.P

        self.lock.release()
        return (self.X,self.P)



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

        

