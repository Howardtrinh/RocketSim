#include <fmt/core.h>
#include <vector>
#include <memory>
#include <Eigen/Dense>
#include <string>
#include "project/exec/ForwardEulerIntegrator.h"
#include "project/entities/Entity.h"
#include "project/entities/Rocket.h"

int main() {
    // Create container of all entites in world
    std::vector<std::unique_ptr<Entity>> entities;
    double dt = 0.01;
    double endTime = 50.0;
    ForwardEulerIntegrator integrator;

    // Initialize rocket
    entities.push_back(std::make_unique<Rocket>(std::string("Howard"),Eigen::Vector3d(0,0,2),integrator));

    for (double t = 0.0;t < endTime; t=t+dt) {
        for (auto& entity : entities) {
            entity->update(dt);
            Eigen::Vector3d states = entity->states();
            fmt::print("{} has state [{:.2f}, {:.2f}, {:.2f}]\n",entity->name(),states.x(),states.y(),states.z());
        }
    }
    fmt::print("Finished running\n");
    return 0;
}