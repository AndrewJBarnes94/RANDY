// PhysicsFormulas.cpp
#include "PhysicsFormulas.h"
#include <cmath>

/*
PERCENT UNCERTAINTY: % unc = (uncertainty of A / A) * 100%
*/
double PhysicsFormulas::calculatePercentUncertainty(double uncertainty, double value) {
    return (uncertainty / value) * 100.0;
}

/*
ROUNDING TO SIGNIFICANT FIGURES
*/
double PhysicsFormulas::roundToSignificantFigures(double value, int sigFigures) {
    if (value == 0.0) return 0.0;
    double scale = std::pow(10, sigFigures - std::ceil(std::log10(std::fabs(value))));
    return std::round(value * scale) / scale;
}

/*
UNCERTAINTY IN MULTIPLICATION & DIVISION:
    When multiplying or diving one value with a percent uncertainty against another value
    with a percent uncertainty, the total percent uncertainty is the sum of each value's
    percentage uncertainties.
    
    For example, if a floor has a length of 4.00m and a width of 3.00m, with uncertainties of 2%
    and 1%, respectively, then the area of the floor is  12.0m^2 and has an uncertainty of 3%.
    (Expressed as an area this is  0.36m^2, which we round to  0.4m^2 since the area of the floor
    is given to a tenth of a square meter.) 
*/
double PhysicsFormulas::calculateUncertaintyMultiplication(double percentUncertainty1, double percentUncertainty2) {
    return percentUncertainty1 + percentUncertainty2;
}

/*
UNCERTAINTY IN ADDITION & SUBTRACTION
*/
double PhysicsFormulas::calculateUncertaintyAddition(double uncertainty1, double uncertainty2) {
    return std::sqrt(std::pow(uncertainty1, 2) + std::pow(uncertainty2, 2));
}
