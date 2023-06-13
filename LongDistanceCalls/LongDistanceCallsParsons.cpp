#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double MORNING_RATE = 0.05;
    const double MIDDAY_RATE = 0.45;
    const double NIGHT_RATE = 0.2;

    int minutes;
    double rate = 0;
    double time;
    double total;

    cout << "Enter the start time of the call in the format HH.MM: ";
    cin >> time;
    cout << "Enter the length of the call in minutes: ";
    cin >> minutes;

    if (time >= 19.01) { //Should there have been a nested if?
        rate = NIGHT_RATE;
    }
    else if (time >= 7.00) {
        rate = MIDDAY_RATE;
    }
    else if (time >= 0) {
        rate = MORNING_RATE;
    }

    total = minutes * rate;

    cout << "Total: $" << fixed << setprecision(2) << total << endl;

    return 0;
}
