#include <iostream>
#include <iomanip>

using namespace std;

void averageFourTemperatures(double temp1, double temp2, double temp3, double temp4) {
    double total = temp1 + temp2 + temp3 + temp4;
    double avg;

    avg = total / 4.0;
    cout << "Average: " << fixed << setprecision(2) << avg << endl;
}

int main()
{
    double temp1, temp2, temp3, temp4;//, avg;

    cout << "Enter temperature 1: ";
    cin >> temp1;
    cout << "Enter temperature 2: ";
    cin >> temp2;
    cout << "Enter temperature 3: ";
    cin >> temp3;
    cout << "Enter temperature 4: ";
    cin >> temp4;

    averageFourTemperatures(temp1, temp2, temp3, temp4);

    //cout << "Average: " << fixed << setprecision(2) << avg << endl;

    return 0;
}
