#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    double gpa;
public:
    Student() { //nothing
        id = -1;
        name = "";
        gpa = 0.0;
    }
    Student(int studentId) { //id only
        id = studentId;
        name = "";
        gpa = 0.0;
    }
    Student(string studentName) { //name only
        id = -1;
        name = studentName;
        gpa = 0.0;
    }
    //no constructor for just gpa beacuse I don't think it would be very useful
    Student(int studentId, string studentName) { //name and id
        id = studentId;
        name = studentName;
        gpa = 0.0;
    }
    Student(int studentId, string studentName, double studentGPA) { //all attributes
        id = studentId;
        name = studentName;
        gpa = studentGPA;
    }
    void setId(int);
    void setName(string);
    void setGpa(double);
    int getId() const;
    string getName() const;
    double getGpa() const;
    void display();
};
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
int main() {
    Student student1;
    Student student2(20);
    Student student3("Student 3");
    Student student4(40, "Student 4");
    Student student5(50, "Student 5", 3.5);

    student1.display();
    student1.setId(10);
    student1.setName("Ayah");
    student1.setGpa(3.2);
    student2.display();
    student3.display();
    student4.display();
    student5.display();
}
