import rclpy
from rclpy.node import Node
from std_msgs.msg import Header

class TimeMeasuringPublisher(Node):
    def __init__(self):
        super().__init__('time_measuring_publisher')
        self.publisher_ = self.create_publisher(Header, 'latency_topic', 10)
        self.timer = self.create_timer(0.5, self.timer_of_publishing_callback)

    def timer_of_publishing_callback(self):
        msg = Header()
        msg.stamp = self.get_clock().now().to_msg()
        self.publisher_.publish(msg)
        self.get_logger().info(f'{msg.stamp.nanosec/1e9:.6f} s')


def main(args=None):
    rclpy.init(args=args)
    node = TimeMeasuringPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
