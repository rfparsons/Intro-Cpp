//============================================================================
// Name        : RandomParsons.cpp
// Author      : Bobby Parsons
// Version     :
// Copyright   : "THIS PROGRAM IS PROVIDED 'AS IS'" and all that
// Description : Display a user-determined number of random numbers, then
//               display the value of RAND_MAX in C++, Ansi-style.
//============================================================================
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
    int counter = 0;
    srand(time(NULL)); //not sure if this should be seeded but eh

    // delcare a variable for use as a sentinel value, call it numRandomNumbers
    int numRandomNumbers;

    // prompt user to ask how many random numbers to display
    cout << "How many numbers to display? ";
    cin >> numRandomNumbers;

    while (counter < numRandomNumbers)
    {
        // output a random number (see chapter 2 in the book)
        cout << rand() << endl;
        counter++;
    }
    // output the value of RAND_MAX
    cout << "RAND_MAX: " << RAND_MAX << endl;
}
