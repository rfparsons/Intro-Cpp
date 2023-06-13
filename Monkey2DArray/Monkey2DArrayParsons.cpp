//============================================================================
// Name        : Monkey2DArrayParsons.cpp
// Author      : Bobby Parsons
// Version     :
// Copyright   : (c) 2020
// Description : Calculates statistics for zoo monkeys
//============================================================================

#include <array>
#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_MONKEYS = 3; // declared as globals for the function prototypes
const int DAYS_PER_WEEK = 5; // functions determine sizes on their own otherwise

int inputFood(int monkey, int day);
double average(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray);
int least(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray);
int greatest(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray);

int main()
{
    array< array<double, DAYS_PER_WEEK>, NUM_MONKEYS > monkeyArray;
    double avg;
    int min;
    int max;

    for (int i = 0; i < NUM_MONKEYS; i++){
        for (int j = 0; j < DAYS_PER_WEEK; j++){
            monkeyArray[i][j] = inputFood(i+1, j+1);
        }
    }

    avg = average(monkeyArray);
    min = least(monkeyArray);
    max = greatest(monkeyArray);

    cout << "The average amount of food the monkeys ate was: " << fixed << setprecision(2) << avg << " pounds." << endl;
    cout << "The least amount of food a monkey ate was: " << min << " pounds." << endl;
    cout << "The most amount of food a monkey ate was: " << max << " pounds." << endl;

    return 0;
}

int inputFood(int monkey, int day) {
    int input;
    bool validInput = false;

    while (!validInput) {
        cout << "Enter pounds of food eaten for monkey " << monkey;
        cout << " on day " << day <<": ";
        cin >> input;
        validInput = !(input < 0);
    }

    return input;
}

double average(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray) {
    int monkeys = monkeyArray.size();
    int days = monkeyArray[0].size();
    double sum = 0;

    for (int i = 0; i < monkeys; i++){
        for (int j = 0; j < days; j++){
            sum += monkeyArray[i][j];
        }
    }

    return sum / (monkeys * days);
}

int least(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray){
    int monkeys = monkeyArray.size();
    int days = monkeyArray[0].size();
    int sum = 0;
    int smallestSum = __INT32_MAX__; //hopefully no monkey eats enough food to need a 64 bit int

    for (int i = 0; i < monkeys; i++){
        for (int j = 0; j < days; j++){
            sum += monkeyArray[i][j];
        }
        if (sum < smallestSum) {
            smallestSum = sum;
        }
        sum = 0;
    }

    return smallestSum;
}

int greatest(array< array<double, DAYS_PER_WEEK> , NUM_MONKEYS> monkeyArray){
    int monkeys = monkeyArray.size();
    int days = monkeyArray[0].size();
    int sum = 0;
    int largestSum = 0;

    for (int i = 0; i < monkeys; i++){
        for (int j = 0; j < days; j++){
            sum += monkeyArray[i][j];
        }
        if (sum > largestSum) {
            largestSum = sum;
        }
        sum = 0;
    }

    return largestSum;
}

/*
Enter pounds of food eaten for monkey 1 on day 1: 1
Enter pounds of food eaten for monkey 1 on day 2: 2
Enter pounds of food eaten for monkey 1 on day 3: 3
Enter pounds of food eaten for monkey 1 on day 4: 4
Enter pounds of food eaten for monkey 1 on day 5: 5
Enter pounds of food eaten for monkey 2 on day 1: 6
Enter pounds of food eaten for monkey 2 on day 2: 7
Enter pounds of food eaten for monkey 2 on day 3: 8
Enter pounds of food eaten for monkey 2 on day 4: 9
Enter pounds of food eaten for monkey 2 on day 5: 10
Enter pounds of food eaten for monkey 3 on day 1: 11
Enter pounds of food eaten for monkey 3 on day 2: 12
Enter pounds of food eaten for monkey 3 on day 3: 13
Enter pounds of food eaten for monkey 3 on day 4: 14
Enter pounds of food eaten for monkey 3 on day 5: 15
The average amount of food the monkeys ate was: 8.00 pounds.
The least amount of food a monkey ate was: 15 pounds.
The most amount of food a monkey ate was: 65 pounds.
Press <RETURN> to close this window...
*/
