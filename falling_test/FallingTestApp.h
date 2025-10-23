#ifndef Falling_Test_App__Falling_Test_App_h_
#define Falling_Test_App__Falling_Test_App_h_

#include <core/GraphicalSimulationApp.h>
#include <graphics/OpenGLPrinter.h>
#include "FallingTestManager.h"

// BONUS: Interacting with the Simulator
// By subclassing GraphicalSimulationApp it is possible to implement physical interactions with the simualtion world
// (See more: https://stonefish.readthedocs.io/en/latest/building.html#interacting-with-the-simulator)

// Customizing the Immediate-Mode GUI (IMGUI)

class FallingTestApp : public sf::GraphicalSimulationApp
{
public:
    FallingTestApp(std::string app_title, std::string dataDirPath, sf::RenderSettings s, sf::HelperSettings h, FallingTestManager* sim);
    
    void DoHUD();
};

#endif // Falling_Test_App__Falling_Test_App_h_
