#include "student.h"

Student::Student()
{

}

Student::Student(string first, string last, string honor, string studyField) : Person(first, last, honor)
{
    field = studyField;
}

Student::~Student()
{

}


void Student::setField(string newField)
{
    field = newField;
}


string Student::getField()
{
    return field;
}

string Student::print()
{
    return Person::print() + " working in " + field;
}

string Student::printName() // Equivalent to the original Person print function
{
    return Person::print();
}
