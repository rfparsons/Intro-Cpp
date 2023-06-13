#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score;
    double grade;
    string message;

    cout << "Please enter a score between 1 and 6: " << endl;
    cin >> score;
    grade = score / 6.0;

    message = ((grade >= 0.7) ? " is passing!" : " is not passing!");

    cout << "Your test score of " << score << message << endl;

    return 0;
}
/*
Test
#	Input 	Expected Output 	Actual Output 	Test Passed?
1	6       Passing message     Passing message Yes
2	4       Failing message     Failing message Yes
3   5       Passing message     Passing message Yes
 */
