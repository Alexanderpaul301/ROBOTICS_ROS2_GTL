#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "geometry_msgs/msg/twist.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;
float axes[6];        // Table to store the axes values of the joystick.
class JoyNode : public rclcpp::Node
{
  public:
    JoyNode()
    : Node("joy_node")
    {
      subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
      "joy", 10, std::bind(&JoyNode::topic_callback, this, _1));

      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
        "vrep/twistCommand", 10);
        timer_ = this->create_wall_timer(
          50ms, std::bind(&JoyNode::timer_callback, this));
    }

  private:
    void topic_callback(const sensor_msgs::msg::Joy & msg) const
    {
      RCLCPP_INFO(this->get_logger(), "Received Joy message axes:");
      RCLCPP_INFO(this->get_logger(), "Axis:");
      for (int i = 0; i < int(msg.axes.size()); i++)
      {
        RCLCPP_INFO(this->get_logger(), "%f \n", msg.axes[i]);
        axes[i] = msg.axes[i];
      }

      RCLCPP_INFO(this->get_logger(), "Buttons:");
      for (int j = 0; j<int(msg.buttons.size()); j++)
      {
        RCLCPP_INFO(this->get_logger(), "%i \n", msg.buttons[j]);
      }
    }
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;

  private: 
  void timer_callback()
  {
    //I have made the choice to direct the linear velocity to the x axis using the Up/Down axis of the joystick 
    //and the angular velocity to the z axis using the Left/Right axis of the joystick/Right axis of the joystick
    // in order to be able to make the robot in coppelia evoluate in the arena
    auto message = geometry_msgs::msg::Twist();
    message.linear.x = axes[1]+axes[3];
    message.linear.y = 0.0;
    message.linear.z = 0.0;

    message.angular.x = 0.0;
    message.angular.y = 0.0;
    message.angular.z = axes[0]+axes[2];
    RCLCPP_INFO(this->get_logger(), "Sending joystick info");
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<JoyNode>());
  rclcpp::shutdown();
  return 0;
}
