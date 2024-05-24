
#include "Rectangle.h"

#include "Triangle.h"

#include "Polygon.h"

#include <iostream>

using namespace std;

int main() 
{
 Rectangle rect = Rectangle();
 
 Triangle trgl = Triangle();
 
 rect.SetValues(4,5);
 
 trgl.SetValues (4,5);
 
 cout << rect.Area() << '\n';
 
 cout << trgl.Area() << '\n';
 
 return 0;
}

