#include <iostream>

using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

int main() {
    int input = 0;
    Day day;
    Day prev;
    Day next;

    while (input != -1)
    {
        cout << "Enter a number for a day. (Monday is 0, Sunday is 6)" << endl;
        cout << "Enter -1 to end the program," << endl;
        cin >> input;
        day = static_cast<Day>(input);
        if (day >= MONDAY && day <= SUNDAY) {
            day = static_cast<Day>(input);
            // cout << day << endl;
            if (day == MONDAY) {
                prev = SUNDAY;
            }
            else {
                prev = static_cast<Day>(input - 1);
            }
            if (day == SUNDAY) {
                next = MONDAY;
            }
            else {
                next = static_cast<Day>(input + 1);
            }

            cout << "Yesterday: " << prev << endl;
            cout << "Today: " << day << endl;
            cout << "Tomorrow: " << next << endl;
        }
        else {
            cerr << "Invalid response." << endl;
        }
        
    }
    return 0;
}
