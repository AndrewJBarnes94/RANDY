// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    // Constructor
    Rectangle(double width = 1.0, double height = 1.0);

    // Setters
    void setWidth(double width);
    void setHeight(double height);

    // Getters
    double getWidth() const;
    double getHeight() const;

    // Method to calculate the area of the rectangle
    double area() const;

private:
    // Member variables
    double width;
    double height;
};

#endif // RECTANGLE_H
