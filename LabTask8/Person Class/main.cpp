
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Person Jane = Person("Jane", 60.0f, 28);
    Person John = Person("John", 75.0f, 35); 
	
	if (Jane == John)
	{
		cout << "This is the same person" << endl;
	}

	if (Jane != John)
	{
		cout << "This is NOT the same person" << endl;
	}

	if (Jane < John)
	{
		cout << "Jane is younger than John" << endl;
	}
	
	if (John > Jane)
	{
		cout << "John is older than Jane" << endl;
	}
	
	int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

	string janeFirstName = Jane;
	cout << "Jane's First Name: " << janeFirstName << endl;
	
	float janeWeight = Jane;
	cout << "Jane's weight: " << janeWeight << endl; 
	
    float totalWeight = Jane + John;

    cout << "Total Weight: " << totalWeight << endl;

    return 0;
}