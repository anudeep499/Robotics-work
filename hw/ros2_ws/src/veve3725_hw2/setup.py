from setuptools import find_packages, setup

package_name = 'veve3725_hw2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='anudeep',
    maintainer_email='vedantamanudeep1@gmail.com',
    description='Homeowrk 1 - Advanced robotics',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': ['server_function = veve3725_hw2.server_function:main',
            'client_function = veve3725_hw2.client_function:main',
	    'latency_client_function = veve3725_hw2.latency_client_function:main',	
        ],
    },
)
