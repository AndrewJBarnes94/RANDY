// PhysicsFormulas.cpp
#include <iostream>
#include "Uncertainty.h"
#include <cmath>

using namespace std;

/*
PERCENT UNCERTAINTY: % unc = (uncertainty of A / A) * 100%
*/
double Uncertainty::calculatePercentUncertainty(double uncertainty, double value) {
    return (uncertainty / value) * 100.0;
}

/*
ROUNDING TO SIGNIFICANT FIGURES
*/
double Uncertainty::roundToSignificantFigures(double value, int sigFigures) {
    if (value == 0.0) return 0.0;
    double scale = std::pow(10, sigFigures - std::ceil(std::log10(std::fabs(value))));
    return std::round(value * scale) / scale;
}


std::map<double, double> Uncertainty::calculateUncertaintyMultiplication(double value1, double uncertainty1, double value2, double uncertainty2, std::string type) {
    double totalValue = value1 + value2;
    double totalPercentUncertainty{};

    if (type == "unit") {
        totalPercentUncertainty = (uncertainty1 / value1 * 100) + (uncertainty2 / value2 * 100);
    }
    else if (type == "percent") {
        totalPercentUncertainty = uncertainty1 + uncertainty2;
    }
    else {
        std::cout << "5th argument MUST be 'unit' or 'percent'";
    }

    double totalUncertainty = totalPercentUncertainty / 100 * totalValue;

    return {{totalValue, totalUncertainty}};
}

/*
UNCERTAINTY IN ADDITION & SUBTRACTION
*/
double Uncertainty::calculateUncertaintyAddition(double uncertainty1, double uncertainty2) {
    return uncertainty1 + uncertainty2;
}
