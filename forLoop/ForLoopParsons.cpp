#include <iostream>

using namespace std;

int main()
{
    const int NUM_SCORES = 10;
    int score;

    cout << "Loop start" << endl;

    for (int i=0; i < NUM_SCORES; i++){
        cout << "Enter score between 1 and 100: ";
        cin >> score;
        cout << "Test #" << i + 1 << " score is " << score << "%" << endl; // i+1 since it begins at 0
    }

    cout << "Loop over" << endl;

    return 0;
}

/*
Loop start
Enter score between 1 and 100: 12
Test #1 score is 12%
Enter score between 1 and 100: 34
Test #2 score is 34%
Enter score between 1 and 100: 56
Test #3 score is 56%
Enter score between 1 and 100: 78
Test #4 score is 78%
Enter score between 1 and 100: 90
Test #5 score is 90%
Enter score between 1 and 100: 49
Test #6 score is 49%
Enter score between 1 and 100: 24
Test #7 score is 24%
Enter score between 1 and 100: 49
Test #8 score is 49%
Enter score between 1 and 100: 90
Test #9 score is 90%
Enter score between 1 and 100: 90
Test #10 score is 90%
Loop over
Press <RETURN> to close this window...
*/
