// PhysicsFormulas.cpp
#include "PhysicsFormulas.h"
#include <cmath>

// Method to calculate percent uncertainty
double PhysicsFormulas::calculatePercentUncertainty(double uncertainty, double value) {
    return (uncertainty / value) * 100.0;
}

// Method to round a value based on significant figures
double PhysicsFormulas::roundToSignificantFigures(double value, int sigFigures) {
    if (value == 0.0) return 0.0;
    double scale = std::pow(10, sigFigures - std::ceil(std::log10(std::fabs(value))));
    return std::round(value * scale) / scale;
}

// Method to calculate uncertainty in multiplication or division
double PhysicsFormulas::calculateUncertaintyMultiplication(double percentUncertainty1, double percentUncertainty2) {
    return percentUncertainty1 + percentUncertainty2;
}

// Method to calculate uncertainty in addition or subtraction
double PhysicsFormulas::calculateUncertaintyAddition(double uncertainty1, double uncertainty2) {
    return std::sqrt(std::pow(uncertainty1, 2) + std::pow(uncertainty2, 2));
}
