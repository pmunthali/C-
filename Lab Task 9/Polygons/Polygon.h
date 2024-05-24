#pragma once

class Polygon 
{	
 protected:
 	int mWidth;
 	int mHeight;
 
 public:
 	Polygon();
 	virtual ~Polygon(); // for the virtual Area() function
 	void SetValues(int width, int height);
 	virtual int Area() = 0; // Pure Virtual Function Making this an Abstract Class.
 	void PrintArea();
 
};
