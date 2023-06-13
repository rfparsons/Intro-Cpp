 // Defining a struct, accessing a struct 
#include <iostream>
#include <string>
using namespace std; 

struct Employee {
    string name;
    int shift;
    double pay;
};

int main() {
    Employee myEmployee;

    myEmployee.name = "Bobby Parsons";
    myEmployee.shift = 2;
    myEmployee.pay = 10.25;

    cout << myEmployee.name << endl;
    cout << myEmployee.shift << endl;
    cout << myEmployee.pay << endl;

    return 0;
}