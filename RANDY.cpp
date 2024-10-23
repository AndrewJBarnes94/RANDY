// main.cpp
#include <iostream>
#include "includes/Rectangle.h"

int main() {
    Rectangle rect;

    // Set rectangle dimensions
    rect.setWidth(5.0);
    rect.setHeight(10.0);

    // Output rectangle area
    std::cout << "Rectangle area: " << rect.area() << std::endl;

    return 0;
}
