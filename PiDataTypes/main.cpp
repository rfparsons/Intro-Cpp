#include <iostream>
using namespace std;
int main() {
 const float PI_IN_FLOAT = 3.14159265358979;
 const double PI_IN_DOUBLE = 3.14159265358979;
 cout.precision(20);
 cout << "PI_IN_FLOAT =  " << PI_IN_FLOAT << " and requires " << sizeof(PI_IN_FLOAT) << " bytes of computer memory." << endl;
 cout << "PI_IN_DOUBLE = " << PI_IN_DOUBLE << " and requires " << sizeof(PI_IN_DOUBLE) << " bytes of computer memory." << endl;
 return 0;
}
