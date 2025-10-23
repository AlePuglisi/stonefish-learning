#include "FallingTestManager.h"
#include <Stonefish/entities/statics/Plane.h>
#include <Stonefish/entities/statics/Obstacle.h>
#include <Stonefish/entities/solids/Sphere.h>
#include <Stonefish/graphics/OpenGLDataStructs.h>
#include <Stonefish/entities/SolidEntity.h>


// 1. Create a Simulation Manager subclass
FallingTestManager::FallingTestManager(sf::Scalar stepsPerSecond) : SimulationManager(stepsPerSecond)
{
}

// 2. Override BuildScenario(), Responsible for creating the simulation scenario.
// Scenario: Materials, Graphics, Static/Dynamic Objects, Robots, Environment Forces, Sensors, Actuators, Animated Entities etc.
void FallingTestManager::BuildScenario()
{
    //Physical materials
    CreateMaterial("Aluminium", 2700.0, 0.8);
    CreateMaterial("Steel", 7810.0, 0.9);
    SetMaterialsInteraction("Aluminium", "Aluminium", 0.7, 0.5);
    SetMaterialsInteraction("Steel", "Steel", 0.4, 0.2);
    SetMaterialsInteraction("Aluminium", "Steel", 0.6, 0.4);

    //Graphical materials (looks)
    CreateLook("gray", sf::Color::Gray(0.5f), 0.3f, 0.2f);
    CreateLook("red", sf::Color::RGB(1.f,0.f,0.f), 0.1f, 0.f);
    CreateLook("blue", sf::Color::RGB(0.f,0.f,.8f), 0.1f, 0.f);

    //Create environment (Static Entities)
    sf::Plane* plane = new sf::Plane("Ground", 10000.0, "Steel", "blue");
    AddStaticEntity(plane, sf::I4()); // Place it on the Origin (I4 as rigid transformation matrix)

    sf::Obstacle* cyl = new sf::Obstacle("Cylinder", 0.5, 5.0, sf::I4(), "Aluminium",  "gray");
    AddStaticEntity(cyl, sf::Transform(sf::Quaternion(0,M_PI_2,0), sf::Vector3(0.0,0.0,-0.5))); // Place it 1m up on z axis

    //Create object
    sf::BodyPhysicsSettings phy;
    phy.mode = sf::BodyPhysicsMode::SURFACE;

    sf::Sphere* sph = new sf::Sphere("Sphere1", phy, 0.1, sf::I4(), "Aluminium",  "red");
    AddSolidEntity(sph, sf::Transform(sf::IQ(), sf::Vector3(0.0,0.1,-2.0))); // Place it 1m up on z axis

    sf::Sphere* sph2 = new sf::Sphere("Sphere2", phy, 0.5, sf::I4(), "Aluminium",  "gray");
    AddSolidEntity(sph2, sf::Transform(sf::IQ(), sf::Vector3(1.0,0,-2.0))); // Place it 1m up on z axis
}

// The virtual method SimulationStepCompleted is called after each simulation step. 
// Impleemnting this allow to interact with the simulator synchronizing with data retrieval and actuator commands 

void FallingTestManager::SimulationStepCompleted(sf::Scalar timeStep)
{

}