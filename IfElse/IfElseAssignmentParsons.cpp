#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Please enter a score between 1 and 10: " << endl;
    cin >> score;

    if (score >= 7) {
        cout << "Your test score of " << score << " is passing!" << endl;
    }
    else {
        cout << "Your test score of " << score << " is not passing!" << endl;
    }

    return 0;
}
/*
Input: 10
Result:
Please enter a score between 1 and 10:
10
Your test score of 10 is passing!

Input: 7
Result:
Please enter a score between 1 and 10:
7
Your test score of 7 is passing!

Input: 5
Result:
Please enter a score between 1 and 10:
5
Your test score of 5 is not passing!
 */
