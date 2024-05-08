#include "Triangle.h"

namespace shapes 
{
    Triangle::Triangle() : base(0.0), height(0.0) 
	{
		
	}

    Triangle::Triangle(double b, double h) : base(b), height(h) 
	{
		
	}

    double Triangle::getBase() const 
	{
        return base;
    }

    double Triangle::getHeight() const 
	{
        return height;
    }

    void Triangle::setBase(double b) 
	{
        base = b;
    }

    void Triangle::setHeight(double h) 
	{
        height = h;
    }

    Triangle::~Triangle() 
	{
		
	}
}