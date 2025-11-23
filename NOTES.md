# Bug Report, Questions, and To Do: 

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

## Current (Parser Bug ?)

Defining C++ scenarios the water current works properly. 
Instead using Stonefish with ROS2, and .scn scenarios, the currents is not initialized properly (no water velocity at all)

(On the other hand, ocean waves works)