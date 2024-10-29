#pragma once
#ifndef KINEMATICS_H
#define KINEMATICS_H

namespace Physics {

    class Kinematics {  
    public:
        double displacement(double xf, double x0);
        double elapsedTime(double tf, double t0);
        double averageVelocity(double xf, double x0, double tf, double t0);
        double averageVelocity(double displacement, double elapsedTime);
    };

} 

#endif
