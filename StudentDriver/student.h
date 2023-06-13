#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace  std;


class Student {
private:
    int id;
    string name;
    double gpa;
public:
    Student(); //nothing
    Student(int studentId); //id only
    Student(string studentName); //name only
    //no constructor for just gpa beacuse I don't think it would be very useful
    Student(int studentId, string studentName); //name and id
    Student(int studentId, string studentName, double studentGPA); //all attributes
    void setId(int);
    void setName(string);
    void setGpa(double);
    int getId() const;
    string getName() const;
    double getGpa() const;
    void display();
};

#endif // STUDENT_H
