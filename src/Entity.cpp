#include "project/entities/Entity.h"

Entity::Entity(double mass, double position, double velocity, Integrator& integrator): 
mass(mass),
position(position),
velocity(velocity),
integrator(integrator)
{}

void Entity::update(double dt)
{
    integrator.step(position,velocity,dt);
}