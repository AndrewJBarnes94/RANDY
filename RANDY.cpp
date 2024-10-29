// main.cpp
#include <iostream>
#include "includes/Physics/Kinematics.h"

int main() {
    Physics::Kinematics kinematics;

    double xf = 100;    // final position
    double x0 = 0;      // initial position
    double tf = 40;     // final time
    double t0 = 0;      // initial time
    double vf = 3;     // final velocity
    double v0 = 70;      // initial velocity
    double t = tf - t0;
    double avgAcc = -1.5; // average acceleration

    double displacement = kinematics.displacement(xf, x0);
    std::cout << "Displacement: " << displacement << std::endl;
    
    double elapsedTime = kinematics.elapsedTime(tf, t0);
    std::cout << "Elapsed Time: " << elapsedTime << std::endl;
    
    double averageVelocity = kinematics.averageVelocity(xf, x0, tf, t0);
    std::cout << "Average Velocity2: " << averageVelocity << std::endl;
    
    double averageAcceleration = kinematics.averageAcceleration(vf, v0, tf, t0);
    std::cout << "Average Acceleration: " << averageAcceleration << std::endl;

    double displacementAndFinalPositionFromAverageVelocityWhenAccelerationIsConstant = kinematics.deltaXAndXfFromAvgVelocityWhenAccIsConstant(x0, v0, vf, t);
    std::cout << "Displacement and Final Position from Average Velocity When Acceleration is Constant: " << displacementAndFinalPositionFromAverageVelocityWhenAccelerationIsConstant << std::endl;

    double finalVelocity = kinematics.finalVelocity(v0, avgAcc, t);
    std::cout << "Final Velocity with Average Acceleration: " << finalVelocity << std::endl;

    return 0;
}
