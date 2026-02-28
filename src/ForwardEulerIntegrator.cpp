#include "project/exec/ForwardEulerIntegrator.h"

void ForwardEulerIntegrator::step(double& states, double dt, double derivatives) const {
    states += derivatives * dt;
}