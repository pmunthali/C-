
#include "Person.h"

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0)
{
	
}

Person::Person(string firstName, float weight, short age) : mWeight(weight), mFirstName(firstName), mAge(age)
{
	
}

Person::~Person()
{
	
}

float Person::operator+(const Person &otherPerson)
{
    return mWeight + otherPerson.mWeight;
}

// Overload the equality operator
bool Person::operator==(const Person &otherPerson) const
{
    return mFirstName == otherPerson.mFirstName;
}

// Overload the inequality operator
bool Person::operator!=(const Person &otherPerson) const
{
    return !(*this == otherPerson);
}

// Overload the less-than operator
bool Person::operator<(const Person &otherPerson) const
{
    return mAge < otherPerson.mAge;
}

// Overload the greater-than operator
bool Person::operator>(const Person &otherPerson) const
{
    return mAge > otherPerson.mAge;
}

Person::operator int() const
{
    return mAge;
}


Person::operator string() const
{
    return mFirstName;
}


Person::operator float() const
{
    return mWeight;
}