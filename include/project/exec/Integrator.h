#pragma once

class Integrator {
    public:
        virtual ~Integrator() = default;

        virtual void step(double& states, double dt, double derivatives) const = 0;
};