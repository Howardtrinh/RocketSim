#pragma once
#include <Eigen/Dense>
class Integrator {
    public:
        virtual ~Integrator() = default;

        virtual void step(Eigen::Vector3d& states, const Eigen::Vector3d& derivatives, const double dt) const = 0;
};