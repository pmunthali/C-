#pragma once

namespace shapes 
{
    class Square 
	{
    private:
	
        double sideLength;
		
    public:
	
        Square();
		
        Square(double side);
		
        double getSideLength() const;
		
        void setSideLength(double side);
		
        ~Square();
    };
}