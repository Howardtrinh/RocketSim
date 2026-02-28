#pragma once
#include "project/exec/Integrator.h"
#include "project/exec/ForwardEulerIntegrator.h"
#include "memory"

class Entity {
public:
    Entity(double mass, double position, double velocity, Integrator& integrator);

    void update(double dt);
private:
    double mass;
    double position;
    double velocity;
    Integrator& integrator;
};