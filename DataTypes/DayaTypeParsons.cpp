#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[7];
    long long int debt;
    double gas;

    strcpy(name, "Alexa");
    debt = 23168997450789;
    gas = 8.56;

    cout << "My name is " << name << "." << endl << endl;
    cout << "The national debt is $" << debt << "." << endl << endl;
    cout << "The car has " << gas << " gallons of gas left." << endl << endl;

    return 0;
}
