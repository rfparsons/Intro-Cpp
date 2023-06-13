#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"


class Student : public Person
{
private:
    string field;

public:
    Student();
    Student(string, string, string, string);
    ~Student();

    void setField(string);

    string getField();

    string print();
    string printName();
};

#endif // STUDENT_H
