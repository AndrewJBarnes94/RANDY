// main.cpp
#include <iostream>
#include "includes/Physics/Uncertainty.h"

int main() {
    double value = 5.0;
    double uncertainty = 0.4;

    // Calculate percent uncertainty
    double percentUncertainty = Uncertainty::calculatePercentUncertainty(uncertainty, value);
    std::cout << "Percent Uncertainty: " << percentUncertainty << "%" << std::endl;

    // Round a value to significant figures
    double roundedValue = Uncertainty::roundToSignificantFigures(12345.6789, 3);
    std::cout << "Rounded Value: " << roundedValue << std::endl;

    // Calculate uncertainty in multiplication or division
    std::map<double, double> combinedUncertaintyMult = Uncertainty::calculateUncertaintyMultiplication(5.0, 3.0, 0.2, 0.1, "unit");
    std::cout << "Combined Values and Uncertainty (Multiplication/Division) ";
    for (const auto& pair : combinedUncertaintyMult) {
        std::cout << "Value: " << pair.first << ", Uncertainty: " << pair.second << std::endl;
    }

    // Calculate uncertainty in addition or subtraction
    double combinedUncertaintyAdd = Uncertainty::calculateUncertaintyAddition(0.2, 0.3);
    std::cout << "Combined Uncertainty (Addition/Subtraction): " << combinedUncertaintyAdd << std::endl;

    return 0;
}
