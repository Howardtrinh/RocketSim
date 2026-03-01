#pragma once
#include <string>
#include "project/exec/Integrator.h"
#include "project/exec/ForwardEulerIntegrator.h"
#include "project/entities/Entity.h"

class Rocket : public Entity {
public:
    // Rocket Initializer
    Rocket(std::string name, Eigen::Vector3d states, Integrator& integrator);
};