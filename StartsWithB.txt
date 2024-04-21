#include <iostream>

// preprocessor directive for declaration of string variables 
#include <string> 

// preprocessor directive for declaration of char string variables contains the at() funtion
#include <cstring>

using namespace std;

int main () {

  // initialising the string variable of the string array with the 8 different values (strings)
  string arrayList [8] = { "B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179" };

  // in order to use the for each loop we initialise the string variable that will store the variable array
  string element;
  
  // the for each loop to print the values that start with the "B" char
  for (string element : arrayList)
  {
    while ((element.at(0) == 'B'))
    {
		// check if the character at index (0) starts with "B" before printing the array elements
        if (element.at(0) == 'B')
        {
			// print the string values that start with the "B" character
            cout << element << endl;
            break; // break out of the loop once done printing all the elements wanted to the string 
        }
    }
  }
  
  return 0;
  
}