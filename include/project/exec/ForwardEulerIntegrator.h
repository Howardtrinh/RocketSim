#pragma once
#include "project/exec/Integrator.h"
#include <Eigen/Dense>

class ForwardEulerIntegrator : public Integrator {
    public:
        virtual void step(Eigen::Vector3d& states, const Eigen::Vector3d& derivatives, const double dt) const override;
};
