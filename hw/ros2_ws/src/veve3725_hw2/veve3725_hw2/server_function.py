import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from veve3725_service.srv import Veve3725Service


class ReverseServer(Node):
    def __init__(self):
        super().__init__('reverse_string_server')
        self.srv = self.create_service(
            Veve3725Service,
            '/veve3725_service',
            self.handle_request
        )
        self.get_logger().info('Service ready on /veve3725_service')

    def handle_request(self, request, response):
        t_initial = time.perf_counter()

        
        text_in = request.data.data
        text_out = text_in[::-1]

        runtime = time.perf_counter() - t_initial

        
        response.reversed = String()
        response.reversed.data = text_out
        response.runtime_sec = runtime
        return response


def main():
    rclpy.init()
    node = ReverseServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

