#include "FallingTestApp.h"

#include <graphics/IMGUI.h>
#include <utils/SystemUtil.hpp>
#include <core/Console.h>

// BONUS: Interacting with the Simulator
// By subclassing GraphicalSimulationApp it is possible to implement physical interactions with the simualtion world
// (See more: https://stonefish.readthedocs.io/en/latest/building.html#interacting-with-the-simulator)

FallingTestApp::FallingTestApp(std::string app_title ,std::string dataDirPath, sf::RenderSettings s, sf::HelperSettings h, FallingTestManager* sim)
    : GraphicalSimulationApp("Falling Test App", dataDirPath, s, h, sim)
{
}

// Customizing the Immediate-Mode GUI (IMGUI)
// Achieved by overriding the DoHUD() class.

void FallingTestApp::DoHUD()
{
    GraphicalSimulationApp::DoHUD(); //Keep standard GUI

    // Add a new button to the widget panel 
    sf::Uid button;
    button.owner = 0;    //e.g. id of a panel 
    //button.index = 0;  //e.g. id of a widget on the panel IT IS PRIVATE NOW 
    button.item = 10;    //e.g. id of an option on a list (item 1 to 8 are used by standard GUI)

    if(getGUI()->DoButton(button, 200, 10, 200, 50, "Press me"))
        //code_to_execute
        cInfo("Button Pressed"); 

}
