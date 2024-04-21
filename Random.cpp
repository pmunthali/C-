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
    
	// checks if the number of the days for expiration is between 5 and 10
    if ((daysUntilExpirationdays > 5) && (daysUntilExpirationdays <= 10) ){
        
        cout << "Your subscription will expire soon. Renew now!" << endl;
        
    } 
	// checks if the number of the days for expiration is between 1 and 5
	else if ((daysUntilExpirationdays > 1) && (daysUntilExpirationdays <= 5)){
        
        cout << "Your subscription expires in " << daysUntilExpirationdays << "Renew now and save 10%!" << endl;
        
    } 
	// checks if the number of days for expiration is 1
	else if (daysUntilExpirationdays = 1){
        
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
        
    } 
	// checks if the number of days for expiration is 0
	else if (daysUntilExpirationdays = 0) {
        
        cout << "Your subscription has expired." << endl;
        
    } 
	// checks if the number of days for expiration is not between 1 and 10
	else {
        
        cout << "You have an active subscription." << endl;
        
    }
    
}