#include <iostream>
#include "Kinematics.h"

namespace Physics {

    double Kinematics::displacement(double xf, double x0) {
        return xf - x0;
    }

    double Kinematics::elapsedTime(double tf, double t0) {
        return tf - t0;
    }

    double Kinematics::averageVelocity(double xf, double x0, double tf, double t0) {
        double displacement = this->displacement(xf, x0);
        double elapsedTime = this->elapsedTime(tf, t0);
        return displacement / elapsedTime;
    }

    double Kinematics::averageVelocityWithConstAcc(double v0, double vf) {
        return (v0 + vf) / 2; // When acceleration is constant, velocity is the average of the initial and final velocities.
    }

    double Kinematics::finalVelocity(double v0, double a, double t) {
        return v0 + (a * t);
    }

    double Kinematics::deltaXAndXfFromAvgVelocityWhenAccIsConstant(double x0, double v0, double vf, double t) {
        double averageVelocity = this->averageVelocityWithConstAcc(v0, vf);
        return x0 + (averageVelocity * t);
    }

    double Kinematics::averageAcceleration(double vf, double v0, double tf, double t0) {
        return (vf - v0) / (tf - t0);
    }

}
