import argparse, os
import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from rclpy.time import Time

class LatencySubscriber(Node):
    def __init__(self, count, png, csv):
        super().__init__('latency_subscriber')
        self.count = int(count)
        self.png = png
        self.csv = csv
        self.samples = []
        self.sub = self.create_subscription(Header, 'latency_topic', self.timer_function, 10)

    def timer_function(self, msg: Header):
        previous_time = Time.from_msg(msg.stamp)
        present_time = self.get_clock().now()
        latency = (present_time - previous_time).nanoseconds / 1e9
        self.samples.append(latency)
        if len(self.samples) >= self.count:
            self.excel_finishing()

    def excel_finishing(self):
        if self.csv:
            os.makedirs(os.path.dirname(self.csv) or '.', exist_ok=True)
            with open(self.csv, 'w') as f:
                f.write('latency_s\n')
                for x in self.samples:
                    f.write(f'{x}\n')
        try:
            import matplotlib.pyplot as plt
            os.makedirs(os.path.dirname(self.png) or '.', exist_ok=True)
            plt.figure()
            plt.hist(self.samples, bins=30)
            plt.xlim(0.0, 0.03)
            plt.title('Subscriber Information Latency')
            plt.xlabel('seconds'); plt.ylabel('frequency/number of times')
            plt.savefig(self.png, dpi=200, bbox_inches='tight')
        except Exception as e:
            self.get_logger().warn(f'Plot skipped: {e}')
        self.get_logger().info(f'Collected {len(self.samples)} samples: {self.png}')
        self.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

def main(args=None):
    parser = argparse.ArgumentParser()
    parser.add_argument('-n', '--count', type=int, default=400)
    parser.add_argument('--png', default='docs/histogram_chart.png')
    parser.add_argument('--csv', default='logs/latency_raw_values.csv')
    cli_args, ros_args = parser.parse_known_args()
    rclpy.init(args=ros_args)
    node = LatencySubscriber(cli_args.count, cli_args.png, cli_args.csv)
    rclpy.spin(node)

if __name__ == '__main__':
    main()
