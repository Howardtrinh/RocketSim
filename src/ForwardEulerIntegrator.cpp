#include "project/exec/ForwardEulerIntegrator.h"
#include <Eigen/Dense>

void ForwardEulerIntegrator::step(Eigen::Vector3d& states, const Eigen::Vector3d& derivatives, const double dt) const {
    states += derivatives * dt;
}