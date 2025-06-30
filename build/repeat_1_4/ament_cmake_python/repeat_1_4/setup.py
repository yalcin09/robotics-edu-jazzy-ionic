from setuptools import find_packages
from setuptools import setup

setup(
    name='repeat_1_4',
    version='0.0.0',
    packages=find_packages(
        include=('repeat_1_4', 'repeat_1_4.*')),
)
