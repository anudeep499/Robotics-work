from setuptools import find_packages
from setuptools import setup

setup(
    name='veve3725_service',
    version='0.0.1',
    packages=find_packages(
        include=('veve3725_service', 'veve3725_service.*')),
)
