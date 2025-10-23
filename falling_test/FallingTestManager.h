#ifndef Falling_Test_Manager__Falling_Test_Manager_h_
#define Falling_Test_Manager__Falling_Test_Manager_h_

#include <Stonefish/StonefishCommon.h>
#include <Stonefish/core/SimulationManager.h>

class FallingTestManager : public sf::SimulationManager
{
public:
    FallingTestManager(sf::Scalar stepsPerSecond);
    void BuildScenario();
    void SimulationStepCompleted(sf::Scalar timeStep);
};

#endif // Falling_Test_Manager__Falling_Test_Manager_h_