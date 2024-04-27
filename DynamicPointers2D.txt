#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    // Declare variables to store the number of rows and columns
    unsigned short rows, columns;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows (not more than 3): ";
    while(true) {
        if(cin >> rows && rows >= 1 && rows <= 3) {
            // Input is valid, break the loop
            break;
        } else {
            // Clear the error flag
            cin.clear();
            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Prompt the user again
            cout << "Invalid input. Number of rows must be between 1 and 3." << endl;
            cout << "Enter the number of rows (not more than 3): ";
        }
    }

    // Prompt the user to enter the number of columns
    cout << "Enter the number of columns (not more than 3): ";
    while(true) {
        if(cin >> columns && columns >= 1 && columns <= 3) {
            // Input is valid, break the loop
            break;
        } else {
            // Clear the error flag
            cin.clear();
            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Prompt the user again
            cout << "Invalid input. Number of columns must be between 1 and 3." << endl;
            cout << "Enter the number of columns (not more than 3): ";
        }
    }

    // Dynamically allocate memory for the 2D array
    double** array2D = new double*[rows];
    for (int p = 0; p < rows; ++p) 
    {
        array2D[p] = new double[columns];
    }

    // Prompt the user to enter values for each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int k = 0; k < rows; ++k) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            cout << "Enter value for element (" << k << "," << j << "): ";
            cin >> array2D[k][j];
        }
    }

    // Output the values of each element of the array
    cout << "\nValues of each element of the array:" << endl;
    for (int m = 0; m < rows; ++m) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            cout << array2D[m][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the dynamically allocated memory
    for (int g = 0; g < rows; ++g) 
    {
        delete[] array2D[g];
    }
    delete[] array2D;

    return 0;
}