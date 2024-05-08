
#pragma once

#include <string>

using namespace std;

class Person
{
public:

    Person();
	
    Person(string firstName, float weight, short age);
	
    ~Person();
	
    float operator+(const Person &otherPerson);
	
	bool operator==(const Person &otherPerson) const;
	
    bool operator!=(const Person &otherPerson) const;
	
	bool operator<(const Person &otherPerson) const;
	 
    bool operator>(const Person &otherPerson) const;
	
	operator int() const; // added operator int() overload
	
	operator string() const; // added operator string() overload
	
    operator float() const; // added operator float() overload

	
private:

    float mWeight;
	
    string mFirstName;
	
    int mAge;
};