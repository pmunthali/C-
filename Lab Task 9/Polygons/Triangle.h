#include "Polygon.h"

class Triangle : public Polygon 
{
 public:
 	Triangle();
 	~Triangle();
 	Triangle(int width, int height);
 	int Area();
 };

