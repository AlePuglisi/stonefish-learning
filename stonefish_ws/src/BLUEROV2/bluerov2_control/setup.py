from setuptools import find_packages, setup

package_name = 'bluerov2_control'

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
    maintainer='ale',
    maintainer_email='puglisialessandro27@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'odom2tf = bluerov2_control.odom2tf:main',
            'odom2tf_new = bluerov2_control.odom2tf_new:main',
            'bluerov2_joy_teleop = bluerov2_control.bluerov2_joy_teleop:main',
            'bluerov2_joy_teleop_v0 = bluerov2_control.bluerov2_joy_teleop_v0:main',
        ],
    },
)
