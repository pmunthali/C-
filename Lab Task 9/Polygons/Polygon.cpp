#include "Polygon.h"

#include <iostream>

using namespace std;

Polygon::Polygon()
{
	
}

Polygon::~Polygon()
{
	
}

void Polygon::SetValues(int width, int height)
{
 mWidth = width;
 mHeight = height;
}
 
int Polygon::Area()
{
 return 0;
}

void Polygon::PrintArea()
{
 cout << this->Area() << '\n';
}



