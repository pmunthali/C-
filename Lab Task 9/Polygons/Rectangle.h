#pragma once

#include "Polygon.h"

class Rectangle : public Polygon 
{
 public:
 	Rectangle();
 	~Rectangle();
 	Rectangle(int width, int height); // for the dynamic pointers to inherite the function from the polygon class 
 	int Area();
};

