//============================================================================
// Name        : FunctionsAndArrayAlgorithmsParsons.cpp
// Author      : Bobby Parsons
// Version     :
// Copyright   : (c) 2020
// Description : Passing an array into a function by reference
//============================================================================
#include <iostream>
#include <array>
using namespace std;

const int ARRAY_SIZE = 5;

void inputNumbers(array<double, ARRAY_SIZE>& values);
double findAverage(array<double, ARRAY_SIZE>& values);
double findMin(array<double, ARRAY_SIZE>& values);
int find(array<double, ARRAY_SIZE>& values, double numberToFind);

int main() {
    array<double, ARRAY_SIZE> numbers;
    inputNumbers(numbers);
    cout << "Largest number was: " << findAverage(numbers) << endl;
    cout << "Smallest number was: " << findMin(numbers) << endl;
    cout << "Value 2.54 is at position: " << find(numbers, 2.54) << endl;
    cout << "Value 0.00001 is at position: " << find(numbers, 0.00001) << endl;
    return 0;
}

void inputNumbers(array<double, ARRAY_SIZE>& values) {
    for (size_t count = 0; count < ARRAY_SIZE; count++) {
        cout << "Enter value: ";
        cin >> values[count];
    }
}

double findAverage(array<double, ARRAY_SIZE>& values){
    double num = 0;
    double largestNum = -9999999999999;

    for (int i = 0; i < ARRAY_SIZE; i++){
        num = values[i];
        if (num > largestNum) {
            largestNum = num;
        }
    }

    return largestNum;
}

double findMin(array<double, ARRAY_SIZE>& values){
    double num = 0;
    double smallestNum = 9999999999999;

    for (int i = 0; i < ARRAY_SIZE; i++){
        num = values[i];
        if (num < smallestNum) {
            smallestNum = num;
        }
    }

    return smallestNum;
}

int find(array<double, ARRAY_SIZE>& values, double numberToFind){
    for (size_t count = 0; count < ARRAY_SIZE; count++) {
        if (values[count] == numberToFind){
            return count;
        }
    }
    return -1;
}

//Enter value: 5
//Enter value: 6
//Enter value: 2.54
//Enter value: 10.9
//Enter value: 3
//Largest number was: 10.9
//Smallest number was: 2.54
//Value 2.54 is at position: 2
//Value 0.00001 is at position: -1
