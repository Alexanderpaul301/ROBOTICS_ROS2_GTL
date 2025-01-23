from setuptools import find_packages
from setuptools import setup

setup(
    name='face_msg',
    version='0.0.0',
    packages=find_packages(
        include=('face_msg', 'face_msg.*')),
)
