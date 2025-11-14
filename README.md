# stonefish-learning
Tutorials and Projects using the Stonefish library for underwater robotics simulation <br/>
Official Documnetation: [Stonefish Doc](https://stonefish.readthedocs.io/en/latest/overview.html)
Stonefish GitHub Repo : [Stonefish GitHub](https://github.com/patrykcieslak/stonefish) 

This repo is not intended to substitute that documentation, but to store a set of examples ready to run after building. <br/>
Furthermore, additional "experiments" on the concept described on the official doc will be stored here. 

> [!NOTE]
> The building configuration in the `CMakeLists.txt` works in my machine, installing the dependency and the Stonefish package as described [here](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md). <br/>
> I hope that dependenacy issues and linker errors don't occur to those who refer to this examples ...


## Stonefish Installation 
Refer to the simple [step-by-step guide](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md#installation) from my fork of the official stonefish repo. <br/>
(The official installation guide is [here](https://stonefish.readthedocs.io/en/latest/install.html), my step-by-step report is mainly for my machine reproducibility and all dependency installation process. <br/>
( I work with a Dell PRO Max 16 Laptop, NVIDIA RTX PRO 500 Blackwell Generation Laptop GPU, Intel Core Ultra 9, x86_64 (AMD 64bit), in an `Ubnutu 24.04` OS partition, with a `6.14.0-33-generic` linux kernel.)

## Building and Running (Non ROS) Examples 

> [!IMPORTANT]
> The building process for the Stonefish **ROS2 examples** inside [stonefish_ws/src](https://github.com/AlePuglisi/stonefish-learning/tree/main/stonefish_ws/src) is described [below](#building-and-running-ros2-examples). <br/>
> It requires the installation of ROS2 and the [stonefish_ros2](https://github.com/patrykcieslak/stonefish_ros2) interface package. <br/>
> Notice that the required stonefish_ros2 interface is already in [stonefish_ws/src](https://github.com/AlePuglisi/stonefish-learning/tree/main/stonefish_ws/src), therefore the installation is automatic when building the workspace. 

After cloning this repo in your system: 
```
git clone https://github.com/AlePuglisi/stonefish-learning.git
```
And moving inside the cloned repo directory 
```
cd stonefish-learning
```

The buildiing process for every "test" is the classical C++ cmake building.

All the esamples are named as `<example>_test`, to build and run each one:

1. Create a build directory inside of the selected example 
```
cd <example>_test
mkdir build && cd build 
```
2. Build the example (from `<example>_test/build` directory)
```
cmake .. && make
```
3. Once 100% make is reached, the exacutable is generated and is ready to run
```
./<example>_test
```

## Building and Running ROS2 Examples 

In the previous section you have cloned this repo in your system: 
```
git clone https://github.com/AlePuglisi/stonefish-learning.git
```

You may be interested in working with **ROS2** as the middleware of your Stonefish robotic simulation environemnt. <br/>
The author of Stonefish provide a ROS2 package for interfacing with the library and setting up a simulation, directly from a launch file and a scene descriptor. 

In this repo the ROS2 workspace [stonefish_ws](https://github.com/AlePuglisi/stonefish-learning/tree/main/stonefish_ws) is ready to use.

You just need to move to the stonefish_ws directory in your machine, and launch the usual ROS2 building command 
```
colcon build 
```

The first time it may take a while in order to build also the stonefish_ros2 packages, which depends on the Stonefish library that you have [already installed](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md#installation). 


## Building or Running ERRORS...

In case of errors in the building process or when launching the executable, I'm reporting some of the one that I encountered and how I fix those in [this readme](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md#troubleshooting). <br/>
Most of this errors are solved thanks to the issues opened on the official Stonefish repo, or caused by my wrong installation of packages and include files. 

## Learning Examples 

This section briefly describe each example. Experiment with it to get a better understanding !

## Basic Physics Simulation with simple objects (falling_test)
<details> 
<summary> Description </summary>
</details>

## Basic Underwater Simulation with Robot and Sensors (underwater_test)
<details> 
<summary> Description </summary>
</details>

## ROS2 Stonefish Simulations (stonefish_ws)

### BlueROV2 Simple Simulation (bluerov2_sim)
<details> 
<summary> Description </summary>
</details>

### Learning in Progress ...

