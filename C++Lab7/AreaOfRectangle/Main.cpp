// This is the main function file
// It contains the main function where the program starts

#include <iostream>

#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle AreaOfRectangle; // create a Rectangle object

    float length3, width3;

    cout << "Enter the length of the rectangle: ";
    cin >> length3;
    cout << "Enter the width of the rectangle: ";
    cin >> width3;

    AreaOfRectangle.setLength(length3); // set the length of the rectangle
    AreaOfRectangle.setWidth(width3);  // set the width of the rectangle

    cout << "Area of the rectangle: " << AreaOfRectangle.calculateArea() << endl;
	
	// Create another instance of a rectangle
    float length4, width4;

    cout << "Enter the length of the second rectangle: ";
    cin >> length4;
    cout << "Enter the width of the second rectangle: ";
    cin >> width4;

    // Use the overloaded constructor to initialize AreaOfRectangle
    Rectangle AreaOfRectangle2(length4, width4);

    cout << "Area of the second rectangle: " << AreaOfRectangle2.calculateArea() << endl;

    return 0;
}