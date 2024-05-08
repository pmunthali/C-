#pragma once

namespace shapes 
{
    class Circle 
	{
		
    private:
	
        double radius;
		
    public:
	
        Circle();
		
        Circle(double r);
		
        double getRadius() const;
		
        void setRadius(double r);
		
        ~Circle();
    };
}