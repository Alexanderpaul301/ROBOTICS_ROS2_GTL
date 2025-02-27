#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from numpy.linalg import inv
from math import pi, sin, cos,hypot,sqrt
from visualization_msgs.msg import Marker, MarkerArray
from geometry_msgs.msg import PoseWithCovarianceStamped, PoseStamped
import threading
from rover_driver_base.rover_kinematics import RoverKinematics
from ar_loc_base.rover_odo import RoverOdo



class MappingKF(RoverOdo):
    def __init__(self, node, initial_pose, initial_uncertainty):
        super().__init__(node,initial_pose,initial_uncertainty)
        self.lock = threading.Lock()
        self.X = np.mat(np.vstack(initial_pose))
        self.P = np.mat(np.diag(initial_uncertainty))
        self.idx = {}
        self.marker_pub = node.create_publisher(MarkerArray,"~/landmarks",1)

    def predict_rover(self, logger, motor_state, drive_cfg, encoder_precision):
        self.lock.acquire()
        # The first time, we need to initialise the state
        if self.first_run:
            self.motor_state.copy(motor_state)
            self.first_run = False
            self.lock.release()
            return (self.X, self.P)
        # print("-"*32)
        # then compute odometry using least square
        iW = self.prepare_inversion_matrix(drive_cfg)
        S = self.prepare_displacement_matrix(self.motor_state,motor_state,drive_cfg)
        self.motor_state.copy(motor_state)
        
        # Implement Kalman prediction here
        # Compute the update in the body frame and the resulting uncertainty in the body frame
        DeltaX = iW @ S
        DeltaP = iW @ np.eye(12)*(encoder_precision**2) @ iW.T
        self.lock.release()
        return self.predict_delta(logger,DeltaX,DeltaP)

    def predict_delta(self, logger, DeltaX, DeltaP):
        self.lock.acquire()
        # Update the state using the provided displacement, but we only need to deal with a subset of the state
        # Assumption: deltaX and deltaP are defined in the body frame and need to be rotated to account for the jacobian 
        # of the transfer function
        # TODO
        theta = self.X[2,0]
        Rtheta = np.mat([[cos(theta), -sin(theta), 0], 
                      [sin(theta),  cos(theta), 0],
                      [         0,           0, 1]]);
        A = np.eye(3)
        A[0, 2] = -sin(theta) * DeltaX[0,0] - cos(theta) * DeltaX[1,0]
        A[1, 2] = cos(theta) * DeltaX[0,0] - sin(theta) * DeltaX[1,0]

        Q=np.eye(3)*10**(-4)

        self.X[0:3,0] = self.X[0:3,0] + Rtheta @ DeltaX
        self.P[0:3,0:3] = A @ self.P[0:3,0:3] @ A.T + Rtheta @ DeltaP @ Rtheta.T + Q

        self.lock.release()
        return (self.X,self.P)


    def update_ar(self, logger, Z, id, uncertainty):
        self.lock.acquire()
        
        R = np.mat(np.diag([uncertainty,uncertainty]))
        theta=self.X[2,0]
        Rtheta=np.mat([[cos(theta),-sin(theta)],[sin(theta),cos(theta)]]);
        # TODO
        logger.info("Update: Z="+str(Z.T)+" X="+str(self.X.T)+" Id="+str(id))
        print("Update: Z="+str(Z.T)+" X="+str(self.X.T)+" Id="+str(id))

        if id in self.idx:
            # Known landmark, we can run the KF update
            j=self.idx[id]

        else:
            j=len(self.X)
            self.idx[id]=j
            # ! Initiliaze()
            # ! Adding the new landmark to the X vector
            Ln=self.X[0:2] + Rtheta @ Z
            self.X=np.vstack((self.X,Ln))

            # ! Updating the covariance
            Pr=self.P[0:3,0:3]
            
            Hx= np.zeros((2,3)) # ! dim(Hx)=(2,3)
            Hx[0,0]=1
            Hx[1,1]=1
            Hx[0, 2] = -sin(theta) * Z[0,0] + cos(theta) * Z[1,0]
            Hx[1, 2] = -cos(theta) * Z[0,0] - sin(theta) * Z[1,0]

            Hz=Rtheta

            Pn=Hx @ Pr @ Hx.T + Hz @ R @ Hz.T

            Pnew = np.zeros((self.P.shape[0] + Pn.shape[0], self.P.shape[1] + Pn.shape[1]))
            
            # Copy the covariance
            Pnew[0:self.P.shape[0], 0:self.P.shape[1]] = self.P

            # Add new covariance block
            Pnew[self.P.shape[0]:, self.P.shape[0]:] = Pn
            self.P = Pnew

        # ! Update(j) Updating the data we have with the information 
        # Update the full state self.X and self.P based on landmark id
        # be careful that this might be the first time that id is observed
        

        h_x=Rtheta @ (self.X[j:j+2]-self.X[0:2])

        H=np.zeros((2,len(self.X)))

        delta_x=self.X[j,0]-self.X[0,0]
        delta_y=self.X[j+1,0]-self.X[1,0]

        H[0:2,0:3] = np.mat([[-cos(theta), -sin(theta), -sin(theta) * delta_x + cos(theta) * delta_y],
                    [ sin(theta), -cos(theta),  -cos(theta) * delta_x - sin(theta) * delta_y]])

        H[0:2,j:j+2]=Rtheta

        # ! Kalman Gain
        K = self.P @ H.T @ inv(H @ self.P @ H.T + uncertainty * np.eye(H.shape[0]))

        # ! Evolution of state
        logger.info("taille X" + str(self.X.shape))
        logger.info("taille K"+ str(K.shape))

        self.X = self.X.copy() + K @ (Z - h_x)
        
        # ! Covariance
        self.P = (np.eye(self.P.shape[0]) - K @ H) @ self.P

        self.lock.release()
        return (self.X,self.P)

    def update_compass(self, logger, Z, uncertainty):
        self.lock.acquire()

        logger.info("Update: Z=" + str(Z) + " X=" + str(self.X.T))
        
        H= np.zeros((1,len(self.X)))
        H[0,2] = 1  
        
        # Innovation (différence entre la mesure et l'orientation prédite)
        innovation = np.mat([[(Z - self.X[2, 0] + pi) % (2 * pi) - pi]])  # Normaliser à [-pi, pi]
        
        # Calcul de la covariance de l'innovation S (incertitude de la mesure du compas)
        S = H @ self.P @ H.T + uncertainty  
        K = self.P @ H.T @ inv(S)  # Gain de Kalman
        
        # Mise à jour de l'estimation de l'état (X) avec l'innovation
        self.X = self.X.copy() + K @ innovation
        
        # Normalisation de theta pour qu'il soit dans l'intervalle [-pi, pi]
        self.X[2, 0] = (self.X[2, 0] + pi) % (2 * pi) - pi  # Assurer que theta reste dans la plage
        
        # Mise à jour de la matrice de covariance (P)
        self.P = (np.eye(self.P.shape[0]) - K @ H) @ self.P

        self.lock.release()
        return self.X, self.P




    def publish(self, pose_pub, odom_pub, target_frame, stamp, child_frame):
        pose = super().publish(pose_pub, odom_pub, target_frame, stamp, child_frame)
        ma = MarkerArray()
        marker = Marker()
        marker.header = pose.header
        marker.ns = "kf_uncertainty"
        marker.id = 5000
        marker.type = Marker.CYLINDER
        marker.action = Marker.ADD
        marker.pose = pose.pose
        marker.pose.position.z = -0.1
        marker.scale.x = 3*sqrt(self.P[0,0])
        marker.scale.y = 3*sqrt(self.P[1,1]);
        marker.scale.z = 0.1;
        marker.color.a = 1.0;
        marker.color.r = 0.0;
        marker.color.g = 1.0;
        marker.color.b = 1.0;
        ma.markers.append(marker)
        for id in self.idx:
            marker = Marker()
            marker.header = pose.header
            marker.ns = "landmark_kf"
            marker.id = id
            marker.type = Marker.CYLINDER
            marker.action = Marker.ADD
            l = self.idx[id]
            marker.pose.position.x = self.X[l,0]
            marker.pose.position.y = self.X[l+1,0]
            marker.pose.position.z = -0.1
            marker.pose.orientation.x = 0.
            marker.pose.orientation.y = 0.
            marker.pose.orientation.z = 1.
            marker.pose.orientation.w = 0.
            marker.scale.x = 3*sqrt(self.P[l,l])
            marker.scale.y = 3*sqrt(self.P[l+1,l+1]);
            marker.scale.z = 0.1;
            marker.color.a = 1.0;
            marker.color.r = 1.0;
            marker.color.g = 1.0;
            marker.color.b = 0.0;
            marker.lifetime = rclpy.time.Duration(seconds=3.).to_msg()
            ma.markers.append(marker)
            marker = Marker()
            marker.header = pose.header
            marker.ns = "landmark_kf"
            marker.id = 1000+id
            marker.type = Marker.TEXT_VIEW_FACING
            marker.action = Marker.ADD
            marker.pose.position.x = self.X[l+0,0]
            marker.pose.position.y = self.X[l+1,0]
            marker.pose.position.z = 1.0
            marker.pose.orientation.x = 0.
            marker.pose.orientation.y = 0.
            marker.pose.orientation.z = 1.
            marker.pose.orientation.w = 0.
            marker.text = str(id)
            marker.scale.x = 1.0
            marker.scale.y = 1.0
            marker.scale.z = 0.2
            marker.color.a = 1.0;
            marker.color.r = 1.0;
            marker.color.g = 1.0;
            marker.color.b = 1.0;
            marker.lifetime = rclpy.time.Duration(seconds=3.).to_msg()
            ma.markers.append(marker)
        self.marker_pub.publish(ma)

