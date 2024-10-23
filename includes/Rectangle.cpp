// Rectangle.cpp
#include "Rectangle.h"

// Constructor implementation
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

// Setters
void Rectangle::setWidth(double width) {
    this->width = width;
}

void Rectangle::setHeight(double height) {
    this->height = height;
}

// Getters
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

// Method to calculate the area of the rectangle
double Rectangle::area() const {
    return width * height;
}
