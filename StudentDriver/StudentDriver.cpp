#include <iostream>
#include <string>
#include <iostream>
#include "student.h"

using namespace std;

const int STUDENT_ARRAY_SIZE = 5;

int main() {
    Student studentArray[STUDENT_ARRAY_SIZE];
    int id;
    string name;
    double gpa;

    for (int i = 0; i < STUDENT_ARRAY_SIZE; i++) {
        id = i + 10;
        cout << "Name for student " << i + 1 << ": ";
        cin >> name;
        cout << "GPA for student " << i + 1 << ": ";
        cin >> gpa;
        studentArray[i].setId(id);
        studentArray[i].setName(name);
        studentArray[i].setGpa(gpa);
    }

    cout << "========================" <<endl;
    for (int i = 0; i < STUDENT_ARRAY_SIZE; i++) {
        studentArray[i].display();
        cout << "========================" <<endl;
    }

    return 0;
}
