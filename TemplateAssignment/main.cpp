// This program demonstrates an overloaded function template.
#include <iostream>
using namespace std;

template <class T>
T minimum(T v1, T v2)
{
    if (v1 < v2) {
        return v1;
    }
    else {
        return v2;
    }
}

template <class T>
T maximum(T v1, T v2)
{
    if (v1 > v2) {
        return v1;
    }
    else {
        return v2;
    }
}

int main()
{
    string str1 = "aaaaa";
    string str2 = "AAAAA";

    cout << minimum(10, 100) << endl;
    cout << minimum(50.7, -50.7) << endl;
    cout << maximum('4', 'a') << endl;
    cout << maximum(str1, str2) << endl;

    return 0;
}
