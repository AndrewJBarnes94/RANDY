// PhysicsFormulas.h
#ifndef PHYSICSFORMULAS_H
#define PHYSICSFORMULAS_H

#include <cmath>
#include <string>
#include <map>

class Uncertainty {
public:
    // Constructor
    Uncertainty() {}

    // Method to calculate percent uncertainty
    static double calculatePercentUncertainty(double uncertainty, double value);

    // Method to round a value based on significant figures
    static double roundToSignificantFigures(double value, int sigFigures);

    // Method to calculate uncertainty in addition or subtraction
    static double calculateUncertaintyAddition(double uncertainty1, double uncertainty2);

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
    static std::map<double, double> calculateUncertaintyMultiplication(double value1, double uncertainty1, double value2, double uncertainty2, std::string type);

};

#endif // PHYSICSFORMULAS_H
