from setuptools import find_packages
from setuptools import setup

setup(
    name='emse_moveit_actions',
    version='0.0.0',
    packages=find_packages(
        include=('emse_moveit_actions', 'emse_moveit_actions.*')),
)
