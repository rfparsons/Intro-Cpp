#include <iostream>
#include <array>
using namespace std;

const int ARRAY_SIZE = 10;

//void inputNumbers(array<double, ARRAY_SIZE>& values);
void inputNumber(double *value);
double findAverage(double *value);

int main() {
    array<double, ARRAY_SIZE> scores;
    double *firstValue = &scores[0];
//    inputNumbers(scores);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        inputNumber(firstValue + i);
    }
    cout << "Average score: " << findAverage(firstValue) << endl;
    return 0;
}

//void inputNumbers(array<double, ARRAY_SIZE>& values) {
//    for (size_t count = 0; count < ARRAY_SIZE; count++) {
//        cout << "Enter score: ";
//        cin >> values[count];
//    }
//}

void inputNumber(double *value) {
    cout << "Enter score: ";
    cin >> *value;
}

double findAverage(double *firstValue){
    double sum = 0;
    double avg;

    for (int i = 0; i < ARRAY_SIZE; i++){
        sum += *(firstValue + i);
//        cout << *(firstValue + i) << endl;
//        cout << sum << endl;
    }

    avg = sum / ARRAY_SIZE;

    return avg;
}
