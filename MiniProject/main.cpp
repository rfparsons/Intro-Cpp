#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

vector<double> fileToVector(string fileName);
double getLeastInVector(vector<double> input);
double getGreatestInVector(vector<double> input);
double getAverageOfVector(vector<double> input);
void showGraphOfVector(vector<double> input);
vector<int> calcBarLengths(vector<double> input);

int main() {
    string fileName;
    vector<double> fileOutput;
    cout << "What is the input file name?" << endl;
    cin >> fileName;
    fileOutput = fileToVector(fileName);

    cout << setw(9) << right << "Range: ";
    cout << "[" << getLeastInVector(fileOutput) << ", " << getGreatestInVector(fileOutput) << "]" << endl;
    cout << "Average: " << fixed << setprecision(2) << getAverageOfVector(fileOutput) << endl;

    // for (unsigned int i = 0; i < fileOutput.size(); i++) {
    //     // cout << fileOutput[i] << endl;
    //     cout << calcBarLengths(fileOutput)[i] << endl;
    // }
    showGraphOfVector(fileOutput);

    return 0;
}


/**
 * @brief Read a list of doubles from a file into a vector
 * @param fileName - Name of the file to read in
 * @return A vector of the doubles in the file 
 */
vector<double> fileToVector(string fileName) {
    double latestInput;
    vector<double> fileOutput;
    ifstream inputFile;

    inputFile.open(fileName);

    if (!inputFile) {
        cerr << "Opening " << fileName << " failed!" << endl;
    }
    while (inputFile >> latestInput) {
        fileOutput.push_back(latestInput);
    }
    inputFile.close();

    return fileOutput;
}

/**
 * @brief Get the lowest number within a vector of doubles
 * @param input - Vector to process
 * @return The lowest number in the vector
 */
double getLeastInVector(vector<double> input) {
    int size = input.size();
    double smallest = input[0]; //ensures that we won't ever have a default that's too small
    double currNum;

    for (int i = 0; i < size; i++) {
        currNum = input[i];
        if (currNum < smallest) {
            smallest = currNum;
        }
    }

    return smallest;
}

/**
 * @brief Get the biggest number within a vector of doubles
 * @param input - Vector to process
 * @return The biggest number in the vector
 */
double getGreatestInVector(vector<double> input) {
    int size = input.size();
    double biggest = 0; //assumes that the whole array isn't negative
    double currNum;

    for (int i = 0; i < size; i++) {
        currNum = input[i];
        if (currNum > biggest) {
            biggest = currNum;
        }
    }

    return biggest;
}

/**
 * @brief Get the average of a vector of doubles
 * @param input - Vector to process
 * @return The average of the vector
 */
double getAverageOfVector(vector<double> input) {
    int size = input.size();
    double sum = 0;
    double avg;

    for (int i = 0; i < size; i++) {
        sum += input[i]; // add up all numbers in the vector
    }
    avg = sum / size; // divide them by size

    return avg;
}

/**
 * @brief Prints a bar graph from the values given in the vector
 * @param input - Vector to process
 */
void showGraphOfVector(vector<double> input) {
    int size = input.size();
    vector<int> lengthsVector = calcBarLengths(input);

    for (int i = 0; i < size; i++) {
        cout << setw(7) << right << i << ": "; 
        for (int j = 0; j < lengthsVector[i]; j++) {
            cout << "="; 
        }
        cout << endl;
    }
}

/**
 * @brief Calculates the length of each bar of a bar graph based on a vector
 * @param input - Vector to process
 * @return A vector of the length of each bar, correlating to each value in the original vector
 */
vector<int> calcBarLengths(vector<double> input) {
    int size = input.size();
    double max = getGreatestInVector(input);
    double decimalLen; //length of bar if partial = signs were possible
    int len;
    vector<int> lengthsVector;
    
    for (int i = 0; i < size; i++) {
        decimalLen = (input[i] / max) * 10;
        len = ceil(decimalLen); // rounds decimalLen up
        lengthsVector.push_back(len);
    }

    return lengthsVector;
}

/*
With:
46.46
39.28
5.25
1.67
64.19
9.67
6.48

What is the input file name?
C:\Users\bobby\Documents\CIS161\MiniProject\data2.txt
  Range: [1.67, 64.19]
Average: 24.71
      0: ========
      1: =======
      2: =
      3: =
      4: ==========
      5: ==
      6: ==
*/