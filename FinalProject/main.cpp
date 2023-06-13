#include <windows.h> //used for sleep, change if compiling on linux
#include <vector>
#include <iostream>
#include <iomanip>
#include "Camper.h"
#include "Food.h"

using namespace std;

int printMenu();
int findCamperByName(string name, vector<Camper> &camperVector);
int findFoodByName(string name, vector<Food> &foodVector);
void addNewCamper(vector<Camper> &camperVector);
void addNewFood(vector<Food> &foodVector);
void assignFoodToCamper(vector<Camper> &camperVector, vector<Food> &foodVector);
void addPaymentToCamper(vector<Camper> &camperVector);
void displayAllCampers(vector<Camper> &camperVector);

int main()
{
    vector<Camper> happyCampers;
    vector<Food> camperFoods;
    bool endProgram = false;
    int userChoice;

    while (!endProgram) {
        userChoice = printMenu();
        switch (userChoice) {
        case 1:
            //add new camper
            addNewCamper(happyCampers);
            break;
        case 2:
            //add new food
            addNewFood(camperFoods);
            break;
        case 3:
            //assign food to camper
            assignFoodToCamper(happyCampers, camperFoods);
            break;
        case 4:
            //add payment for camper
            addPaymentToCamper(happyCampers);
            break;
        case 5:
            //display all campers
            displayAllCampers(happyCampers);
            break;
        case 6:
            //exit program
            endProgram = true;
            break;
        }
        cout << endl;
    }

    return 0;
}


/**
 * @brief Prints a menu for the user to select an option from
 * @return The user's choice
 */
int printMenu(){
    int userChoice = -1;
    cout << "1. Add new camper" << endl;
    cout << "2. Add new food " << endl;
    cout << "3. Assign food to camper" << endl;
    cout << "4. Add payment for camper" << endl;
    cout << "5. Display all campers" << endl;
    cout << "6. Exit Program" << endl;
    cout << endl;
    while (userChoice < 1 || userChoice > 6) {
        cout << "Make your selection: ";
        try {
            cin >> userChoice;
        } catch (const char* msg) {
            cerr << "Invalid input resulting in " << msg << " error!" << endl;
        }
        if (userChoice < 1 || userChoice > 6) {
            cout << "Input out of range!" << endl;
        }
    }

    return userChoice;
}


/**
 * @brief Finds a camper in the camper vector by their name
 * @param name - The name of the camper you want to find
 * @param camperVector - The vector of campers
 * @return Index of the camper found in the vector
 */
int findCamperByName(string name, vector<Camper> &camperVector){
    int vectorSize = camperVector.size();
    // not a very efficient search but probably good enough for this
    for (int i = 0; i < vectorSize; i++) {
        if (name == camperVector[i].getName()){
            return i;
        }
    }
    return -1;
}

/**
 * @brief Finds a food in the food vector by their name
 * @param name - The name of the food you want to find
 * @param foodVector - The vector of foods
 * @return Index of the food found in the vector
 */
int findFoodByName(string name, vector<Food> &foodVector){
    int vectorSize = foodVector.size();
    // not a very efficient search but probably good enough for this
    for (int i = 0; i < vectorSize; i++) {
        if (name == foodVector[i].getName()){
            return i;
        }
    }
    return -1;
}


/**
 * @brief Prompts the user to add a camper to the vector
 * @param camperVector - The vector of campers
 */
void addNewCamper(vector<Camper> &camperVector){
    string camperName;
    Camper newCamper;
    cout << "Add New Camper" << endl;
    cout << "==============" << endl;
    cout << "Camper name: ";
    try {
        cin >> camperName;
        newCamper.setName(camperName);
        camperVector.push_back(newCamper);
    } catch (const char* msg) {
        cerr << "Invalid input resulting in " << msg << " error!" << endl;
    }
}

/**
 * @brief Prompts the user to add a food to the vector
 * @param foodVector - The vector of foods
 */
void addNewFood(vector<Food> &foodVector){
    string foodName;
    int quantity;
    Food newFood;

    cout << "Add New Food" << endl;
    cout << "============" << endl;
    cout << "Food name: ";
    try {
        cin >> foodName;
        newFood.setName(foodName);
        cout << "Quantity: ";
        cin >> quantity;
        newFood.setQuantity(quantity);
        foodVector.push_back(newFood);
    } catch (const char* msg) {
        cerr << "Invalid input resulting in " << msg << " error!" << endl;
    }
}

/**
 * @brief Prompts the user to assign a food to a camper
 * @param camperVector - The vector of campers
 * @param foodVector - The vector of foods
 */
void assignFoodToCamper(vector<Camper> &camperVector, vector<Food> &foodVector){
    bool camperVectorIsEmpty = camperVector.size() == 0;
    bool foodVectorIsEmpty = foodVector.size() == 0;
    int camperIndex;
    int foodIndex;
    string userInput;

    cout << "Assign food to camper" << endl;
    cout << "=====================" << endl;
    if (!(camperVectorIsEmpty || foodVectorIsEmpty)) { // make sure there's campers to assign food to
        try {
            cout << "Food name: ";
            cin >> userInput;
            foodIndex = findFoodByName(userInput, foodVector);
            if (foodIndex == -1) {
                cerr << "Error: Food not found!" << endl;
                return; // boot the user out of this command so they don't get stuck if
                // they forget the name of a food or camper - this program doesn't save!
            }

            cout << "Camper name: ";
            cin >> userInput;
            camperIndex = findCamperByName(userInput, camperVector);
            if (camperIndex == -1) {
                cerr << "Error: Camper not found!" << endl;
                return;
            }

            camperVector[camperIndex].setFood(foodVector[foodIndex]);
        } catch (const char* msg) {
            cerr << "Invalid input resulting in " << msg << " error!" << endl;
        }
    }
    else {
        if (camperVectorIsEmpty) {
            cout << "Please add a camper." << endl;
        }
        if (foodVectorIsEmpty) {
            cout << "Please add a food." << endl;
        }
        Sleep(1500);
    }
}

/**
 * @brief Prompts the user to add a payment to a camper
 * @param camperVector - The vector of campers
 */
void addPaymentToCamper(vector<Camper> &camperVector){
    bool camperVectorIsEmpty = camperVector.size() == 0;
    string userInput;
    int camperIndex;
    double payment;

    cout << "Add payment to camper" << endl;
    cout << "=====================" << endl;
    if (!(camperVectorIsEmpty)) {
        try {
            cout << "Camper name: ";
            cin >> userInput;
            camperIndex = findCamperByName(userInput, camperVector);
            if (camperIndex == -1) {
                cerr << "Error: Camper not found!" << endl;
                return;
            }
            cout << "Payment: ";
            cin >> payment;

            camperVector[camperIndex].setPayment(payment);
        } catch (const char* msg) {
            cerr << "Invalid input resulting in " << msg << " error!" << endl;
        }
    }
    else {
        cout << "Please add a camper." << endl;
        Sleep(1500);
    }
}

/**
 * @brief Displays all campers, their payments, and the food they're bringing
 * @param camperVector - The vector of campers
 */
void displayAllCampers(vector<Camper> &camperVector){
    int campers = camperVector.size();
    bool camperVectorIsEmpty = campers == 0;

    cout << "Display All Campers" << endl;
    cout << "===================" << endl;
    if (!(camperVectorIsEmpty)) {
        for (int i = 0; i < campers; i++) {
            cout << fixed << setw(10) << camperVector[i].getName() << "|";
            cout << "$" << fixed << setw(7) << setprecision(2) << camperVector[i].getPayment() << "|";
            cout << fixed << setw(10) << camperVector[i].getFood().getName() << "|";
            cout << fixed << setw(3) << setprecision(1) << camperVector[i].getFood().getQuantity(); //not too sure why food quantity is a double?
            cout << endl;
        }
    }
    else {
        cout << "Please add a camper." << endl;
        Sleep(1500);
    }
}
