#include <iostream>

using namespace std;

int main()
{
    int guess = 0; //create a loop variable
   // cout << "continueLoop is " << guess << endl;

    while (guess < 1 || guess > 100) {
        cout << "Enter a guess between 1 and 100: "; //prompt user to continue loop
        cin >> guess;
        //cout << "in loop, continueLoop is " << guess << endl;
        if (guess < 1 || guess > 100) {
            cout << "Invalid answer. Please only enter a number between 1 and 100" << endl;
        }
    }
    //cout << "loop complete, continueLoop is " << guess << endl;
    return 0;
}
