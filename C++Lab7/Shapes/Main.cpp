#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "AreaOfShapes.h"

using namespace std;

using namespace shapes;

int main() 
{
    char choice;
    do {
        cout << "Choose a shape to calculate area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case '1': 
			{
                double length;
                cout << "Enter side length of the square: ";
                cin >> length;
                Square square(length);
                cout << "Area of the square: " << Area::calculateArea(square) << endl;
                break;
            }
            case '2': 
			{
                double base, height;
                cout << "Enter base length of the triangle: ";
                cin >> base;
                cout << "Enter height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': 
			{
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    } while (choice != '4');

    return 0;
}