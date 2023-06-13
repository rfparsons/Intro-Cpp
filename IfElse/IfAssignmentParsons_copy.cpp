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

    return 0;
}
/*
Test
#	Input 	Expected Output 	Actual Output 	Test Passed?
1	10      Passing message     Passing message Yes
2	7       Passing message     Passing message Yes
3   5       No output           No output       Yes
 */
