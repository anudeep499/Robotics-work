import argparse, time, csv, os, statistics
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from veve3725_service.srv import Veve3725Service


class LatencyNode(Node):
    def __init__(self):
        super().__init__('latency_check_function')
        self.client = self.create_client(Veve3725Service, '/veve3725_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for /veve3725_service ...')

    def ping_once(self, payload: str):
        req = Veve3725Service.Request()
        msg = String()
        msg.data = payload
        req.data = msg

        t_start = time.perf_counter()
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        t_end = time.perf_counter()

        resp = future.result()
        effective_time = t_end - t_start          
        server = resp.runtime_sec      
        transfer = max(effective_time - server, 0.0) 
        return effective_time, server, transfer


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('-n', '--count', type=int, default=400)
    parser.add_argument('-t', '--text', default='abcdef')
    parser.add_argument('--out', default='logs/service_rtt.csv')
    parser.add_argument('--png', default='docs/service_hist.png')
    args = parser.parse_args()

    rclpy.init()
    node = LatencyNode()

    samples = []
    for _ in range(args.count):
        effective_time, server, transfer = node.ping_once(args.text)
        samples.append((effective_time, server, transfer))

    node.destroy_node()
    rclpy.shutdown()

   
    os.makedirs(os.path.dirname(args.out), exist_ok=True)
    with open(args.out, 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(['effective_time', 'server', 'transfer'])
        w.writerows(samples)

    
    try:
        import matplotlib.pyplot as plt
        xs = [s[2] for s in samples]
        os.makedirs(os.path.dirname(args.png), exist_ok=True)
        plt.figure()
        plt.hist(xs, bins=30)
        plt.xlim(0.0, 0.03)
        plt.title('Service transfer latency')
        plt.xlabel('seconds')
        plt.ylabel('count/frequency')
        plt.savefig(args.png, dpi=150, bbox_inches='tight')
    except Exception as e:
        print('Plot skipped:', e)

    xs = [s[2] for s in samples]
    print(f"Wrote {len(samples)} rows to {args.out}")
    print(
        f"transfer_s mean={statistics.mean(xs):.6f} s, "
        f"median={statistics.median(xs):.6f} s, "
        f"max={max(xs):.6f} s"
    )


if __name__ == '__main__':
    main()
