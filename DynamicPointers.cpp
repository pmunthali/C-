#include <iostream>
#include <string>

using namespace std;

int main() 
{
    // Dynamically allocate a string using a dynamic pointer
    string *dynamicFirstName = new string;
    
    // Dynamically allocate an integer using a dynamic pointer
    unsigned short *dynamicAge = new unsigned short;
    
    // Prompt user for input of their First Name
    cout << "Enter Your First Name here please: ";
    getline(cin, *dynamicFirstName);

    // Prompt user for input of their age
    cout << "Enter Your Age here please: ";
    cin >> *dynamicAge;

    // Output the dynamically allocated FirstName and Age
    cout << "Hello " << *dynamicFirstName << ". We are happy to see you here." << endl;
    cout << "You are " << *dynamicAge << " years old." << endl;

    // Free the dynamically allocated memory
    delete dynamicAge;
    delete dynamicFirstName;

    return 0;
}