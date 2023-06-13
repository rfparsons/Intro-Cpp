/*
char continueLoop = 'y';
...

do {
 ...
 prompt user to continue (y/n)
 store user input in continueLoop
} while (continueLoop == 'y');
...
*/

#include <iostream>

using namespace std;

int main()
{
    char continueLoop = 'y'; //create a loop variable
    cout << "continueLoop is " << continueLoop << endl;

    do {
        cout << "Continue? (y/n) "; //prompt user to continue loop
        cin >> continueLoop;
        cout << "in loop, continueLoop is " << continueLoop << endl;
    } while (continueLoop == 'y');
    cout << "loop complete, continueLoop is " << continueLoop << endl;
    return 0;
}
/*
continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) y
in loop, continueLoop is y
Continue? (y/n) yyyyyyyyyyyyyyy
in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) in loop, continueLoop is y
Continue? (y/n) n
in loop, continueLoop is n
loop complete, continueLoop is n
Press <RETURN> to close this window...
*/
