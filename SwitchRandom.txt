#include <iostream>

// preprocessor directive for standard C++ library where the rand() function is
#include <cstdlib>

// preprocessor directive for standard C++ library where the time and date <time()> function is
#include <ctime> 

using namespace std;

int generateRandom();

// a function to generate the random numbers
int generateRandom(){
    
	// initializes the random number generator with a starting value of rand()
    srand((unsigned)time(0)); 
    
	// declaration of an integer variable for genereting the random values
    int daysUntilExpirationdays2;
    
	// generates the random numbers and divides them by 11 and returns the remainder so that the range is reasonable
    daysUntilExpirationdays2 = (rand()%11); 
    
	// returns the reasonably generated number in the code above to the function call
    return daysUntilExpirationdays2;
}
 
int main ()
{	
	// initialisation of a variable to the randomly generated number in the function
    int daysUntilExpirationdays = generateRandom();
	
	// a switch statement to check each one of the given condition 
    switch (daysUntilExpirationdays) {
	
	// checks if the number of the days for expiration is 0
    case 0:
        cout << "Your subscription has expired."  << endl;
        break;
		
	// checks if the number of the days for expiration is 1
    case 1:
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
        break;
		
	// checks if the number of the days for expiration is 2
    case 2:
        cout << "Your subscription expires in " << daysUntilExpirationdays << " Renew now and save 10%!" << endl;
        break;
		
	// checks if the number of the days for expiration is 3
    case 3:
        cout << "Your subscription expires in " << daysUntilExpirationdays << " Renew now and save 10%!" << endl;
        break;
		
	// checks if the number of the days for expiration is 4
    case 4:
        cout << "Your subscription expires in " << daysUntilExpirationdays << " Renew now and save 10%!" << endl;
        break;
		
	// checks if the number of the days for expiration is 5
    case 5:
        cout << "Your subscription expires in " << daysUntilExpirationdays << " Renew now and save 10%!" << endl;
        break;
		
	// checks if the number of the days for expiration is 6
    case 6:
        cout <<"Your subscription will expire soon. Renew now!" << endl;
        break;
		
	// checks if the number of the days for expiration is 7
    case 7:
        cout << "Your subscription will expire soon. Renew now!" << endl;
        break;
		
	// checks if the number of the days for expiration is 8
    case 8:
        cout << "Your subscription will expire soon. Renew now!" << endl;
        break;
		
	// checks if the number of the days for expiration is 9
    case 9:
        cout << "Your subscription will expire soon. Renew now!"<< endl;
        break;
		
	// checks if the number of the days for expiration is 10
    case 10:
        cout << "Your subscription will expire soon. Renew now!"<< endl;
        break;
		
	// checks if the number of the days for expiration is not between 5 and 10
    default:
        cout <<"You have an active subscription." << endl;
        break;

    }
    
    return 0;
}