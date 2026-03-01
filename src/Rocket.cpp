#include <string>
#include <Eigen/Dense>
#include "project/entities/Rocket.h"

Rocket::Rocket(std::string name,Eigen::Vector3d states, Integrator& integrator)
: Entity(name, states, integrator) {}
