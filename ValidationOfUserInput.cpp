#include <iostream>

// preprocessor directive for sizes of integral types
#include <limits>

using namespace std;

int main() {
	
	// a declaration of the value that the user will enter
    int inputValue;

	// a while loop to prompt the user to enter a valid integer within 5 and 10
    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> inputValue;
		
		// condition to check if the entered value is an integer or not
        if (cin.fail()) 
		{
            cout << "Sorry, you entered an invalid number. Please try again." << endl;
            cin.clear(); // clears error flags on the inputstream
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores any remaining characters in the input buffer upto the newline characters
        } 
		// condition to check if the integer entered is indeed between 5 and 10
		else if (inputValue < 5 || inputValue > 10) 
		{
            cout << "You entered " << inputValue << ". Please enter a number between 5 and 10." << endl;
        } 
		else 
		{
            cout << "Your input value " << inputValue << " has been accepted." << endl;
            break; // Exit the loop if the input is valid
        }
    }

    return 0;
}
