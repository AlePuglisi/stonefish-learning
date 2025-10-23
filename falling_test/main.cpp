#include <Stonefish/core/GraphicalSimulationApp.h>
#include <Stonefish/entities/forcefields/Atmosphere.h>
#include <Stonefish/graphics/OpenGLDataStructs.h>

#include "FallingTestManager.h"
#include "FallingTestApp.h"

// (Steps To build a basic Simulator: https://stonefish.readthedocs.io/en/latest/building.html#building-a-simple-graphical-simulator)
// 3. cpp file containing the Main 
// 4. Remember to include <Stonefish/core/GraphicalSimulationApp.h> (and your SimulationManager)
// 5. Create Render and Helper settings
// 6. Create you Simulation Manager instance (With input the steps/seconds = freqency of simulation)
// 7. Create GraphicalSimulationApp 
// 8. Call the Run() method on your app to start the simulation 

int main(int argc, char **argv)
{
    //Using default settings
    sf::RenderSettings s;
    sf::HelperSettings h;

    FallingTestManager simulationManager(500.0); // 500 = number of simulation steps per second (inverse of sample time)
    FallingTestApp app("Falling Test Simulator", "path_to_data", s, h, &simulationManager);
    app.Run();

    return 0;
}