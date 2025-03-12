from setuptools import find_packages
from setuptools import setup

setup(
    name='wpa_cli_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('wpa_cli_msgs', 'wpa_cli_msgs.*')),
)
