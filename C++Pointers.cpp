
#include <iostream>

using namespace std;

int main()
{
    // declare pointer and initialise it 
    // so that it doesn't store a random address
    int *pPointer = nullptr;
    
    int integerVar = 5;
    
    // assign pointer to address of object
    pPointer = &integerVar;
    
    // output the value of integerVar
    cout << "integerVar: " << integerVar << endl;
    
    // output the address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;
    
    // output the address assigned to pPointer
    cout << "pPointer: " << pPointer + 1 << endl;
    
    // output the address of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;
    
    return 0;
}


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numbersArray[5];
    
    int *pPointer = nullptr;
    
    //assign the address to the first element of the pointer 
    pPointer = numbersArray;
    
    // assign a value to the first element 
    *pPointer = 10;
    
   /*increment the pointer using pointer arithmetic 
    to assign the address of the second element to the pointer*/
    pPointer++;
    
    // assign a value to the second element 
    *pPointer = 20;
    
    // assign the address of the third element to the pointer
    pPointer = &numbersArray[2];
    
    *pPointer = 30;
    
    pPointer = numbersArray + 3;
    
    *pPointer = 40;
    
    pPointer = numbersArray;
    
   *(pPointer + 4) = 50;
    
    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << " ";
    }
    
    return 0;
}




/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numberOfElements = 0;
    
    int *dynamicArray = nullptr;
    
    cout << "How Many Numbers would you like to type? ";
    cin >> numberOfElements;
    
    dynamicArray = new int[numberOfElements];
    
    if (dynamicArray == nullptr)
    {
        cout << "Error: memory could not be allocated";
    }
    else 
    {
        for (int i = 0; i < numberOfElements; i++)
        {
            cout << "Enter number: ";
            cin >> dynamicArray[i];
        }
        cout << "You have entered: ";
        for (int j = 0; j < numberOfElements; j++)
        {
            cout << dynamicArray[j] << ", ";
        }
        
        delete[] dynamicArray;
    }

    return 0;
}
