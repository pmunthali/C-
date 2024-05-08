#pragma once

namespace shapes 
{
    class Triangle 
	{
    private:
	
        double base;
		
        double height;
		
    public:
	
        Triangle();
		
        Triangle(double b, double h);
		
        double getBase() const;
		
        double getHeight() const;
		
        void setBase(double b);
		
        void setHeight(double h);
		
        ~Triangle();
    };
}