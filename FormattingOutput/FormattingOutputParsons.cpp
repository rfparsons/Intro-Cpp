//============================================================================
// Name        : FormattingOutputParsons.cpp
// Author      : Bobby Parsons
// Version     :
// Copyright   : (c) 2020
// Description : Formatting a simple banking equation
//============================================================================
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int TEXT_OUTPUT_WIDTH = 20;
    const int NUM_OUTPUT_WIDTH = 8;
    double interest, principal, rate, time;

    cout << "Enter the principal: ";
    cin >> principal;
    cout << "Enter the rate: ";
    cin >> rate;
    cout << "Enter the time: ";
    cin >> time;

    interest = principal * (rate / 100.0) * time;

    cout << left << setw(TEXT_OUTPUT_WIDTH) << "Interest Rate: " << fixed << right << setw(NUM_OUTPUT_WIDTH + 1) << setprecision(2) << rate << "%" << endl;
    cout << left << setw(TEXT_OUTPUT_WIDTH) << "Principal:" << "$" << fixed << right << setw(NUM_OUTPUT_WIDTH) << setprecision(2) << principal << endl;
    cout << left << setw(TEXT_OUTPUT_WIDTH) << "Interest:" << "$" << fixed << right << setw(NUM_OUTPUT_WIDTH) << setprecision(2) << interest << endl;

    return 0;
}
