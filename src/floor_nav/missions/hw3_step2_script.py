#!/usr/bin/python3
# ROS specific imports
import sys
import rclpy
from task_manager_client_py.TaskClient import *
from std_srvs.srv import Trigger
from math import pi

# Initialize ROS 2 client
rclpy.init(args=sys.argv)
tc = TaskClient("/floor_tasks", 0.2)

# Cancel request condition variable
cancel_request = ConditionVariable("cancel request")


def handle_trigger(req, resp):
    global cancel_request
    cancel_request.set(True)
    print("Received cancel request")
    resp.success = True
    resp.message = "Done"
    return resp


# Create the cancel service
s = tc.create_service(Trigger, "cancel_request", handle_trigger)

while True:
    face_task = tc.WaitForFace(foreground=False)

    # Add conditions for face detection and cancel request
    tc.addCondition(ConditionIsCompleted("Face detected", tc, face_task))
    tc.addCondition(cancel_request)

    try:
        tc.Wander()
        tc.clearConditions()

    except TaskConditionException as e:
        # Handle the condition interruption
        triggered_conditions = [str(c) for c in e.conditions]
        tc.get_logger().info(
            f"Path following interrupted on condition: {', '.join(triggered_conditions)}"
        )
        tc.get_logger().info("#################### Face detected ")
        tc.Wait(duration=5.0, foreground=True)  # Wait for 5 seconds
        tc.StareAtFace()
        tc.SetHeading(relative=True, target=pi/2, foreground=True)  # Turn 180 degrees

tc.get_logger().info("Mission completed")
