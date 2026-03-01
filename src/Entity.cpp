#include "project/entities/Entity.h"
#include <Eigen/Dense>
#include <string>

// Entity Constructor
Entity::Entity(std::string name, Eigen::Vector3d states, Integrator& integrator): 
m_name(name),
m_states(states),
m_integrator(integrator)
{}

// Mutators
void Entity::update(double dt)
{   
    double position = m_states.x();
    double velocity = m_states.y();
    double acceleration = m_states.z();

    Eigen::Vector3d derivatives(velocity,acceleration,0);
    m_integrator.step(m_states,derivatives,dt);
}

// Accessors
const std::string& Entity::name() const
{
    return m_name;
}

const Eigen::Vector3d& Entity::states() const
{ return m_states; }
