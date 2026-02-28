#pragma once
#include "project/exec/Integrator.h"

class ForwardEulerIntegrator : public Integrator {
    public:
        virtual void step(double& states, double dt, double derivatives) const override;
};
