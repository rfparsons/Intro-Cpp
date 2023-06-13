#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    string honorific;

public:
   Person();
   Person(string, string, string);
   ~Person();

   void setFirstName(string);
   void setLastName(string);
   void setHonorific(string);

   string getFirstName();
   string getLastName();
   string getHonorific();

   string print();
};

#endif
