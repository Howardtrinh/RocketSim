#pragma once
#include <Eigen/Dense>
#include <string>
#include "project/exec/Integrator.h"
#include "project/exec/ForwardEulerIntegrator.h"

class Entity {
public:
    Entity(std::string name, Eigen::Vector3d states, Integrator& integrator);
    virtual ~Entity() = default;

    // Mutator
    void update(double dt);

    // Accessor
    const std::string& name() const;
    virtual const Eigen::Vector3d& states() const;

private:
    std::string m_name;
    Eigen::Vector3d m_states;
    Integrator& m_integrator;
};