#include <iostream>

using namespace std;

int main()
{
    int option;

    cout << "Choose an option: (1-4) ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Create a Camping Trip" << endl;
            break;
        case 2:
            cout << "Assign a Camper to a Trip" << endl;
            break;
        case 3:
            cout << "Create a Needed Food item" << endl;
            break;
        case 4:
            cout << "Assign a Camper to a Food item" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
    }

    return 0;
}

/*
Create a Camping Trip
Assign a Camper to a Trip
Create a Needed Food item
Assign a Camper to a Food item
*/
