#include <iostream>

using namespace std;

int main()
{
    char continueLoop = 'y'; //create a loop variable
    cout << "continueLoop is " << continueLoop << endl;

    while (continueLoop == 'y') {
        cout << "Continue? (y/n) "; //prompt user to continue loop
        cin >> continueLoop;
        cout << "in loop, continueLoop is " << continueLoop << endl;
    }
    cout << "loop complete, continueLoop is " << continueLoop << endl;
    return 0;
}
