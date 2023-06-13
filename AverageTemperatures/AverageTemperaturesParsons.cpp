#include <array>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int TEMP_ARRAY_SIZE = 8;
    double sum = 0;
    double average;
    int j = 0;
    array<double, 8> temperatures;

    for (int i = 0; i < TEMP_ARRAY_SIZE; i++){
        cout << "Enter temperature #" << i+1 << " of " << TEMP_ARRAY_SIZE << ":";
        cin >> temperatures[i];
    }
    while (j < TEMP_ARRAY_SIZE) {
        sum += temperatures[j];
        j += 2;
    }
    average = sum / (TEMP_ARRAY_SIZE / 2);

    cout << endl << "Sum of every other temperature: " << fixed << setprecision(2) << sum << endl;
    cout << "Average of every other temperature: " << fixed << setprecision(2) << average << endl;

    return 0;
}
