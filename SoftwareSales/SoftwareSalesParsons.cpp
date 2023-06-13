#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double TEN_UNIT_DISCOUNT = 0.2;
    const double TWENTY_UNIT_DISCOUNT = 0.3;
    const double FIFTY_UNIT_DISCOUNT = 0.4;
    const double HUNDRED_UNIT_DISCOUNT = 0.5;
    const double PRICE_PER_UNIT = 99.0;

    int units;
    double subtotal;
    double discount = 0;
    double total;

    cout << "Enter the number of units: ";
    cin >> units;
    subtotal = units * PRICE_PER_UNIT;

    if (units >= 100) {
        discount = HUNDRED_UNIT_DISCOUNT;
    }
    else if (units >= 50) {
        discount = FIFTY_UNIT_DISCOUNT;
    }
    else if (units >= 20) {
        discount = TWENTY_UNIT_DISCOUNT;
    }
    else if (units >= 10) {
        discount = TEN_UNIT_DISCOUNT;
    }

    total = subtotal - (subtotal * discount);

    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Quantity discount: " << fixed << setprecision(0) << discount*100 << "%" << endl;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;

    return 0;
}
