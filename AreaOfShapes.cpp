#include <iostream>

// preprocessor directive for sizes of integral types
#include <limits>

// declaration of a function that will calculate the area of a square
double areaOfSquare ();

// declaration of a function that will calculate the area of a rectangle
double areaOfRectangle ();

// declaration of a function that will calculate the area of a triangle
double areaOfTriangle ();

// function to calculate the area of a Square
double areaOfSquare (double side1) 
{
	return (side1 * side1);
}

// function to calculate the area of a Rectangle
double areaOfRectangle (double length, double width)
{
	return (length * width);
}

// function to calculate the area of a Triangle
double areaOfTriangle (double base, double height)
{
	return ((base * height) * 0.5);
}

using namespace std;

int main() 
{	
	// declaration of the variable to store the users choice
	short userChoice;

	// Loop until a valid choice is entered
	while (true)
    {	
		cout << "Please select the area of the shape to calculate" << endl;

		// the four choices to choose from 
		cout << "1. Square" << endl;
		cout << "2. Rectangle" << endl;
		cout << "3. Triangle" << endl;
		cout << "4. Quit Program" << endl;
	
		// getting the user's choice input 
		cout << "Enter Selestion: " << endl;
		cin >> userChoice;

		// a set of conditions to check the choise of the user
	
		// condition to check if the entered value is an integer or not
		if (cin.fail()) 
		{
            cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
			cout << "Please enter a valid input!!!" << endl;
            cin.clear(); // clears error flags on the inputstream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
        } 
		// condition to check if the integer entered is indeed between 1 and 14
		else if ((userChoice >= 1) && (userChoice <= 4))
		{
			// 1. for the area of a square
			if (userChoice = 1)	
			{
				// declaration of a float variable to input the user value
				double side;
	
				// get the user input and store it in the side variable declared above
				cout << "Enter the side of the Square here: " << endl;
				cin >> side;
				while(true)
				{
					if (cin.fail()) 
					{
						cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
						cout << "Please enter a valid input!!!" << endl;
						cin.clear(); // clears error flags on the inputstream
						cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
					} 
					else 
					{
						// function call to calculate the area of the Square and store it in a variable
						double square = areaOfSquare(side);
						// print out the area of the Square to the console
						cout << "The area of the Square is: " << square << endl;
					}
					break;
				}
				
			}
			// 2. for the area of a rectangle
			else if (userChoice = 2)
			{
				// declaration of a float variables to input the user values
				double length2;
				double width2;
			
				// get the user input and store it in the leght2 variable declared above
				cout << "Enter the lengh of the Rectangle here: " << endl;
				cin >> length2;
				
					while(true)
					{
						if (cin.fail()) 
						{
							cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
							cout << "Please enter a valid input!!!" << endl;
							cin.clear(); // clears error flags on the inputstream
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
						} 
						else 
						{
							cout << "input accepted." << endl;
						}
					break;
					}
	
				// get the user input and store it in the width2 variable declared above
				cout << "Enter the width of the Rectangle here: " << endl;
				cin >> width2;
				
					while(true)
					{
						if (cin.fail()) 
						{
							cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
							cout << "Please enter a valid input!!!" << endl;
							cin.clear(); // clears error flags on the inputstream
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
						} 
						else 
						{
							// function call to calculate the area of the Rectangle and store it in a variable
							double rectangle = areaOfRectangle(length2, width2);
    
							// print out the area of the Rectangle to the console
							cout << "The area of the Rectangle is: " << rectangle << endl;
					}
					break;
					}
	
			}
			// 3. for the area of a triangle
			else if (userChoice = 3)
			{
				// declaration of a float variables to input the user values
				double base2;
				double height2;
	
				// get the user input and store it in the base2 variable declared above
				cout << "Enter the base of the Triangle here: " << endl;
				cin >> base2;
				
					while(true)
					{
						if (cin.fail()) 
						{
							cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
							cout << "Please enter a valid input!!!" << endl;
							cin.clear(); // clears error flags on the inputstream
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
						} 
						else 
						{
							cout << "Input accepted" << endl;
						}
					break;
					}
	
				// get the user input and store it in the height2 variable declared above
				cout << "Enter the height of the Triangle here: " << endl;
				cin >> height2;
				
					while(true)
					{
						if (cin.fail()) 
						{
							cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
							cout << "Please enter a valid input!!!" << endl;
							cin.clear(); // clears error flags on the inputstream
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
						} 
						else 
						{
							// function call to calculate the area of the Triangle and store it in a variable
							double triangle = areaOfTriangle(base2, height2);
    
							// print out the area of the Triangle to the console
							cout << "The area of the Triangle is: " << triangle << endl;
						}
					break;
					}
		
			}
		
			// 4. for quitting the program
			else if (userChoice = 4)
			{
				while(true)
					{
						if (cin.fail()) 
						{
							cout << "Your input was: " << userChoice << " Which is an invalid input" << endl;
							cout << "Please enter a valid input!!!" << endl;
							cin.clear(); // clears error flags on the inputstream
							cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
						} 
						else 
						{
							cout << "Exiting the program now." << endl;
							// break out of the loop once the user enters the valid input needed
						}
					break;
					}
				
			}
			// default for invalid input from the user 
			else
			{
				cout << "Invalid choice. Please select a valid option between 1 and 4." << endl;
			}
		}
		else 
		{
			cout << "Exiting Program." << endl;
		}
	}
	return 0;
}