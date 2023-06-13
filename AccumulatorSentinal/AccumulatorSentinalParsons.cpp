#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int currentScore;
    int count = 0;
    int pointsPossible;
    int assignments;
    int totalPoints = 0;
    int totalPointsPossible = 0;
    double average;

    cout << "Number of assignments: ";
    cin >> assignments;
    while (count < assignments) {
        cout << "Enter score #" << count +1 << ": ";
        cin >> currentScore;
        cout << "Enter points possible for score #" << count + 1 << ": ";
        cin >> pointsPossible;

        totalPoints += currentScore;
        totalPointsPossible += pointsPossible;

        count++;
    }
    average = (double)totalPoints / totalPointsPossible;
    cout << fixed << setprecision(2) << average * 100 << "%" << endl;

    return 0;
}

/*
Number of assignments: 5
Enter score #1: 5
Enter points possible for score #1: 7
Enter score #2: 4
Enter points possible for score #2: 5
Enter score #3: 86
Enter points possible for score #3: 100
Enter score #4: 17
Enter points possible for score #4: 20
Enter score #5: 4
Enter points possible for score #5: 5
84.67%
Press <RETURN> to close this window...
*/
