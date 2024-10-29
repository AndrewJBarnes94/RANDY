// main.cpp
#include <iostream>
#include "includes/Physics/Kinematics.h"

int main() {
    Physics::Kinematics kinematics;

    double xf = 100;
    double x0 = 26;
    
    double tf = 60;
    double t0 = 5;

    double displacement = kinematics.displacement(xf, x0);
    double elapsedTime = kinematics.elapsedTime(tf, t0);
    double averageVelocity1 = kinematics.averageVelocity(xf, x0, tf, t0);
    double averageVelocity2 = kinematics.averageVelocity(displacement, elapsedTime);

    std::cout << "Displacement: " << displacement << std::endl;
    std::cout << "Elapsed Time: " << elapsedTime << std::endl;
    std::cout << "Average Veocity1: " << averageVelocity1 << std::endl;
    std::cout << "Average Velocity2: " << averageVelocity2 << std::endl;

    return 0;
}
