// main.cpp
#include <iostream>
#include "includes/PhysicsFormulas.h"

int main() {
    double value = 5.0;
    double uncertainty = 0.4;

    // Calculate percent uncertainty
    double percentUncertainty = PhysicsFormulas::calculatePercentUncertainty(uncertainty, value);
    std::cout << "Percent Uncertainty: " << percentUncertainty << "%" << std::endl;

    // Round a value to significant figures
    double roundedValue = PhysicsFormulas::roundToSignificantFigures(12345.6789, 3);
    std::cout << "Rounded Value: " << roundedValue << std::endl;

    // Calculate uncertainty in multiplication or division
    double combinedUncertaintyMult = PhysicsFormulas::calculateUncertaintyMultiplication(2.0, 3.0);
    std::cout << "Combined Uncertainty (Multiplication/Division): " << combinedUncertaintyMult << "%" << std::endl;

    // Calculate uncertainty in addition or subtraction
    double combinedUncertaintyAdd = PhysicsFormulas::calculateUncertaintyAddition(0.2, 0.3);
    std::cout << "Combined Uncertainty (Addition/Subtraction): " << combinedUncertaintyAdd << std::endl;

    return 0;
}
