#include <iostream>
#include "Person.h"
#include "student.h"

using namespace std;

int main()
{
    Student bobby = Student("Bobby", "Parsons", "Mr.", "Computer Science");

    cout << bobby.print() << endl;

    return 0;
}
