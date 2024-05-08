
#include <iostream>

using namespace std;

void SwapNumbers(int &paramA, int &paramBB);

void SwapNumbers(int &paramA, int &paramB)
{
     int swapNum;
    
     swapNum = paramA;
    
     paramA = paramB;
    
     cout << "varA after swap: " << paramA << endl; //varA is 100
    
     paramB = swapNum;
    
     cout << "VarB after swap: " << paramB << endl; //varB is 25
    
    
}

int main()
{
    int varA = 25;
    int varB = 100;
    cout << "varA before swap: " << varA << endl; //varA is 25
    cout << "VarB before swap: " << varB << endl; //varB is 100
    SwapNumbers(varA, varB);
  //  cout << "varA after swap: " << varA << endl; //varA is 100
  //  cout << "VarB after swap: " << varB << endl; //varB is 25
    
    return 0;
}
