import sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from veve3725_service.srv import Veve3725Service


class ReverseClient(Node):
    def __init__(self):
        super().__init__('reverse_string_client')
        self.cli = self.create_client(Veve3725Service, '/veve3725_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /veve3725_service ...')

    def do_call(self, text: str):
        req = Veve3725Service.Request()
        req.data = String()
        req.data.data = text
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main():
    rclpy.init()
    node = ReverseClient()
    text = 'Hello ROS 2' if len(sys.argv) < 2 else ' '.join(sys.argv[1:])
    resp = node.do_call(text)
    node.get_logger().info(f'Input:    "{text}"')
    node.get_logger().info(f'Reversed: "{resp.reversed.data}"')
    node.get_logger().info(f'Runtime (server): {resp.runtime_sec:.6f} s')
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

