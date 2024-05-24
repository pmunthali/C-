#include "Derived.h"

#include "Base.h"

#include <iostream>

using namespace std;

int main () 
{
	// 1. FOR DYNAMIC_CAST
	
 	Base *pba = new Derived();
 
 	Base *pbb = new Base();
 
 	Derived * pd;
 
 	pd = dynamic_cast<Derived*>(pba);
 
 	if (pd == nullptr) 
 	{
 	cout << "Null pointer on first type-cast.\n";
 	}
 
	pd = dynamic_cast<Derived*>(pbb);
 
 	if (pd == nullptr) 
 	{
 	cout << "Null pointer on second type-cast.\n";
 	}
 
 	delete pba;
 
 	pba = nullptr;
 
 	delete pbb;
 
 	pbb = nullptr;
 	
 	// 2. FOR STATIC_CAST
 	
 	Base* pBase = new Base();
 
 	Derived* pDerived = static_cast<Derived*>(pBase);
 	
 	delete pBase;
 	
 	pBase = nullptr;

 	return 0;
}

