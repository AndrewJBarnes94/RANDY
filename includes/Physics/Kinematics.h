#pragma once
#ifndef KINEMATICS_H
#define KINEMATICS_H

namespace Physics {

    class Kinematics {  
    public:
        double displacement(double xf, double x0);
        double elapsedTime(double tf, double t0);
        double averageVelocity(double xf, double x0, double tf, double t0);
        double averageVelocityWithConstAcc(double v0, double vf);
        double finalVelocity(double v0, double a, double t);
        double deltaXAndXfFromAvgVelocityWhenAccIsConstant(double x0, double v0, double vf, double t);
        double averageAcceleration(double vf, double v0, double tf, double t0);
        
    };

} 

#endif
