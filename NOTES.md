# Bug Report, Questions, and To Do + Found Solutions: 

## Robot as compound objects (Bug (?))

When defining the robot base as a compound object, the robot base frame is "rotated" based on some criteria that I don't understand. 
Therefore defining the robot base as a compound will compromise its reference frame ... 

**Notes and Comments (after some experiments)**
- This is not caused by a wrong blender export. (following the documentation is fine)
- This occurs as soon as more than one external body is present, even with zero internal components 
- This occurs in general when defining compound bodies with more than one external parts 
- having one external part and more internal part doesn't affect the reference frame, which is preserved properly

**Questions**
- Does it affect the dynamics of the system ? 
- Does it depends on the inertia computation ? 
- Is it only a visualization bug ? 

**Solution**
Define the Robot base as muli link body with fixed joints, as done in classical ros URDFs. 

## Enable/Disable Current (Parser Bug ?) [Solved]

Defining C++ scenarios the water current works properly. 
Instead using Stonefish with ROS2, and .scn scenarios, the currents is not initialized properly (no water velocity at all)
(On the other hand, ocean waves works)

There is no parser bug... The currents are included in the simulation once defined in the scenario file, but in ROS2 you should trigger it explicitly after the simulation start. Read below... 

### Solution:

Ocean currents defined in the scenario file are included in the simulation, and exposed as a ROS2 service in order to be enabled/disable. 

You can enable/disable currents using the related service exposed by the `stonefish_ros2` package.

You can see by listing the ROS2 services (`ros2 service list`) that there are:
```
/stonefish_ros2/disable_currents
/stonefish_ros2/enable_currents
```

These are of the standard service type `std_srvs/srv/Trigger`

Therefore, you can easily enable the current defined in the simulation .scn as
```
ros2 service call /stonefish_ros2/enable_currents std_srvs/srv/Trigger "{}"
```
and disable it as:
```
ros2 service call /stonefish_ros2/disable_currents std_srvs/srv/Trigger "{}"
```