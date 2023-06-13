#include <iostream>

using namespace std;

void averageTemperature();

int main()
{
    averageTemperature();

    return 0;
}

void averageTemperature() {
    int input = 0;
    int total = 0;
    int numEntered = 0;
    double average;

    cout << "Enter -999 to stop" << endl;

    while (input != -999) {
        cout << "Enter temperature #" << numEntered + 1 << ": ";
        cin >> input;
        if (input != -999) {
            total += input;
            numEntered++;
        }
    }

    average = (double)total / (double)numEntered;
    cout << "Average: " << average << endl;
}
