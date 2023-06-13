#include <array>
#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 9;
    array<double, 8> doubles;

    for (int i = 0; i < ARRAY_SIZE; i++){
        cout << "Enter double #" << i+1 << " of " << ARRAY_SIZE << ":";
        cin >> doubles[i];
    }

    cout << doubles[0] << endl;
    cout << doubles[4] << endl;
    cout << doubles[ARRAY_SIZE - 1] << endl;

    return 0;
}
