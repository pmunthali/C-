#include "Polygon.h"

#include "Rectangle.h"

#include "Triangle.h"

#include <iostream>

using namespace std;

int main() 
{
	
 Rectangle rect = Rectangle();
 
 Triangle trgl = Triangle();
 
 // Polygon poly = Polygon();
 
 Polygon *pPoly1 = &rect;
 
 Polygon *pPoly2 = &trgl;
 
 // Polygon* pPoly3 = &poly;
 
 pPoly1->SetValues(4,5);
 
 pPoly2->SetValues(4,5);
 
 // pPoly3->SetValues(4,5);
 
 cout << endl;
 
 cout << rect.Area() << '\n';
 
 cout << trgl.Area() << '\n';
 
 cout << "using the PrintArea () functon for the pure virtual Area () function"<< '\n';
 
 pPoly1->PrintArea();
 
 pPoly2->PrintArea();
 
 cout << endl;
 
 // USING THE DYNAMIC POINTERS TO PRINT THE AREA
 
 Polygon* pPoly3 = new Rectangle(4,5);
 
 Polygon* pPoly4 = new Triangle(4,5);
 
 cout << "using the dynamic pointers to the Polygon Abstract Class"<< '\n';
 
 pPoly1->PrintArea();
 
 pPoly2->PrintArea();
 
 delete pPoly1;
 
 delete pPoly2;
 
 return 0;
}

