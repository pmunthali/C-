// This is the implementation file for the Rectangle class
// It contains the definitions of the class methods

#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle()
{
    length1 = 0.0; // initialize length to 0
    width1 = 0.0;  // initialize width to 0
}

// Destructor (does nothing for now)
Rectangle::~Rectangle() {}

// Overloaded constructor
Rectangle::Rectangle(float length3, float width3) : length1(length3), width1(width3) {}

// Set the length of the rectangle
void Rectangle::setLength(float length2)
{
    length1 = length2;
}

// Set the width of the rectangle
void Rectangle::setWidth(float width2)
{
    width1 = width2;
}

// Get the length of the rectangle
float Rectangle::getLength()
{
    return length1;
}

// Get the width of the rectangle
float Rectangle::getWidth()
{
    return width1;
}

// Calculate the area of the rectangle
float Rectangle::calculateArea()
{
    return length1 * width1;
}