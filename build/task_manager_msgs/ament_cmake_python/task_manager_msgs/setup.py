from setuptools import find_packages
from setuptools import setup

setup(
    name='task_manager_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('task_manager_msgs', 'task_manager_msgs.*')),
)
