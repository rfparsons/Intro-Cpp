#include <iostream>
#include <fstream>

using namespace std;

string readFile(string fileName);

int main()
{
    string fileName; //= "C:\\Users\\bobby\\Documents\\CIS161\\ExceptionHandling\\data.txt";

    cout << "Enter file name: ";

    cin >> fileName;

    try {
        cout << readFile(fileName);
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

string readFile(string fileName) {
    string latestInput;
    string fileOutput = "";
    ifstream inputFile;

    inputFile.open(fileName);

    if (!inputFile) {
        throw "Opening file failed!";
    }
    while (getline(inputFile, latestInput)) {
        fileOutput = fileOutput + latestInput + '\n';
    }
    inputFile.close();

    return fileOutput;
}
