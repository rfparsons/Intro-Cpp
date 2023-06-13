//============================================================================
// Name        : IntArithmetic.cpp
// Author      : Michelle Ruse and Bobby Parsons
// Version     :
// Copyright   : (c) 2020
// Description : Arithmetic using int data type in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    double a, b;
    a = b = 0;

    cout << "Enter a number: ";
    cin >> a;

    cout << "\nEnter a number: ";
    cin >> b;

    cout << "Addition:           " << (a + b) << endl;
    cout << "Subtraction:        " << (a - b) << endl;
    cout << "Multiplication:     " << (a * b) << endl;
    cout << "Division:           " << (a / b) << endl;
    //cout << "Modulo (remainder): " << (a % b) << endl;
    return 0;
}
/*
 Test Data
 a = 5, b = 7
 Results
Enter a number: 5

Enter a number: 7
Addition:           12
Subtraction:        -2
Multiplication:     35
Division:           0.714286

a=3.5, b=2.7
Results
Enter a number: 3.5

Enter a number: 2.7
Addition:           6.2
Subtraction:        0.8
Multiplication:     9.45
Division:           1.2963

a=12.1, b=12
Results
Enter a number: 12.1

Enter a number: 12
Addition:           24.1
Subtraction:        0.1
Multiplication:     145.2
Division:           1.00833
*/
