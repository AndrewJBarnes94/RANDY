// PhysicsFormulas.h
#ifndef PHYSICSFORMULAS_H
#define PHYSICSFORMULAS_H

#include <cmath>

class PhysicsFormulas {
public:
    // Constructor
    PhysicsFormulas() {}

    // Method to calculate percent uncertainty
    static double calculatePercentUncertainty(double uncertainty, double value);

    // Method to round a value based on significant figures
    static double roundToSignificantFigures(double value, int sigFigures);

    // Method to calculate uncertainty in multiplication or division
    static double calculateUncertaintyMultiplication(double percentUncertainty1, double percentUncertainty2);

    // Method to calculate uncertainty in addition or subtraction
    static double calculateUncertaintyAddition(double uncertainty1, double uncertainty2);
};

#endif // PHYSICSFORMULAS_H
