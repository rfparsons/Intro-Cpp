//*****************************************************************
// This program is a driver for testing the calculateBill function.                         *
// Stubs were used to debug and test the program, using top-down design. *
// Author: Michelle E. Ruse and Bobby Parsons                                                                                                  *
//*****************************************************************
 #include <iostream>
 using namespace std;

 // Prototype (Wait, what's this? Hmmm... how would you find out? )
double calculateBill(double, int);

 int main()
 {
      // local variables
      int numMonths = 10;
      double rate = 25.99;
      double total;

      // Perform a test for $25.99 membership.
      cout << "Calling the calculateBill function with arguments ";
      cout << rate << " and " << numMonths << "\n";
      total = calculateBill(rate, numMonths);
      cout << "Bill is " << total<< "\n";

      // Perform a test for 70.50 membership.
      numMonths = 5;
      rate = 70.50;
      cout << "Calling the calculateBill function with arguments ";
          cout << rate << " and " << numMonths << "\n";
      total = calculateBill(rate, numMonths);
      cout << "Bill is " << total << "\n";

      // Perform a test for $-5 membership.
      numMonths = 5;
      rate = -5;
      cout << "Calling the calculateBill function with arguments ";
          cout << rate << " and " << numMonths << "\n";
      total = calculateBill(rate, numMonths);
      cout << "Bill is " << total << "\n";

//// What should you add to your function now?

      // Perform a test for -10 months. Keep -5 to make sure you added that input validation
      numMonths = -10;
      rate = -5;
      cout << "Calling the calculateBill function with arguments ";
          cout << rate << " and " << numMonths << "\n";
      total = calculateBill(rate, numMonths);
      cout << "Bill is " << total << "\n";

//// What should you add to your function now?

      return 0;
}

//*****************************************************************
// Definition of function calculateBilll. The memberRate parameter holds   *
// the monthly membership rate and the months parameter holds the          *
// number of months. The function displays the total charges.                           *
//*****************************************************************
double calculateBill(double memberRate, int months)
{
    if (memberRate < 0 || months < 0){
        cout << "Input out of range!" << endl;
        return -1;
    }
    else {
        return (memberRate * months);
    }
}
