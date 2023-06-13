#include "student.h"
#include <iostream>

Student::Student() { //nothing
    id = -1;
    name = "";
    gpa = 0.0;
}
Student::Student(int studentId) { //id only
    id = studentId;
    name = "";
    gpa = 0.0;
}
Student::Student(string studentName) { //name only
    id = -1;
    name = studentName;
    gpa = 0.0;
}
//no constructor for just gpa beacuse I don't think it would be very useful
Student::Student(int studentId, string studentName) { //name and id
    id = studentId;
    name = studentName;
    gpa = 0.0;
}
Student::Student(int studentId, string studentName, double studentGPA) { //all attributes
    id = studentId;
    name = studentName;
    gpa = studentGPA;
}
void Student::setId(int id) {
    this->id = id;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setGpa(double gpa) {
    this->gpa = gpa;
}
int Student::getId() const {
    return id;
}
string Student::getName() const {
    return name;
}
double Student::getGpa() const {
    return gpa;
}
void Student::display() {
    cout << id << endl;
    cout << name << endl;
    cout << gpa << endl;
}
