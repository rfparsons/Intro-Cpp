#include "Person.h"

Person::Person()
{
}

Person::Person(string first, string last, string honor)
{
   firstName = first;
   lastName = last;
   honorific = honor;
}

Person::~Person()
{
}

void Person::setFirstName(string first)
{
    firstName = first;
}

void Person::setLastName(string last)
{
    lastName = last;
}

void Person::setHonorific(string honor)
{
    honorific = honor;
}

string Person::getFirstName()
{
    return firstName;
}

string Person::getLastName()
{
    return lastName;
}

string Person::getHonorific()
{
    return honorific;
}

string Person::print() {
    return honorific + " " + firstName + " " + lastName;
}
