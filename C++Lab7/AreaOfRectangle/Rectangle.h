// This is the header file for the Rectangle class
// It contains the declaration of the class

#pragma once

class Rectangle
{
private:
    float length1; // length of the rectangle
    float width1;  // width of the rectangle

public:
    // Default constructor (called when an object is created)
    Rectangle();
	
	// Overloaded constructor
    Rectangle(float length3, float width3);

    // Destructor (called when an object is destroyed)
    ~Rectangle();

    // Set the length of the rectangle
    void setLength(float length2);

    // Set the width of the rectangle
    void setWidth(float width2);

    // Get the length of the rectangle
    float getLength();

    // Get the width of the rectangle
    float getWidth();

    // Calculate the area of the rectangle
    float calculateArea();
};