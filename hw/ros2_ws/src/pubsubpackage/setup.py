from setuptools import find_packages, setup

package_name = 'pubsubpackage'

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
    description='Advanced Robotics - Homework',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'publisher_member_function  = pubsubpackage.publisher_member_function:main',
            'subscriber_member_function = pubsubpackage.subscriber_member_function:main',
        ],
    },
)
