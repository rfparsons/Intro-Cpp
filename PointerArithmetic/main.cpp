#include <iostream>
#include <array>

using namespace std;

const int ARRAY_SIZE = 5;
int main() {
    array<double, ARRAY_SIZE> distances = {1.23, 4.56, 7.89, 2.34, 5.67};
    double *distancePtr = &distances[0];
    double totalDistance = 0.0;
    // TODO: Put your code here, zero points awarded if you use distances[xyz] anywhere
    // in the code. Pointer arithmetic only!
    for (int count = 0; count < ARRAY_SIZE; count++) {
        cout << "Distance " << (count + 1) << " " << *(distancePtr + count) << endl;
        totalDistance += *(distancePtr + count);
    }
    cout << "The average distance is " << (totalDistance / ARRAY_SIZE) << endl;
}
