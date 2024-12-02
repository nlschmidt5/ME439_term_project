from setuptools import find_packages
from setuptools import setup

setup(
    name='parallelbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('parallelbot_interfaces', 'parallelbot_interfaces.*')),
)
