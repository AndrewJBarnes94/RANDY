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

    double Kinematics::averageVelocity(double displacement, double elapsedTime) {
        return displacement / elapsedTime;
    }

}
