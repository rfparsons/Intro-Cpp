#include <iostream>
#include <vector>
#include <memory>
#include <string>


using namespace std;

class Ship {
protected: // changed private to protected so derived classes could access year
    string name;
    string year;
public:
    Ship() { }
    Ship(string name, string year): name(name), year(year) { }
    void setName(string shipName) {
        name = shipName;
    }
    void setYear(string shipYear) {
        year = shipYear;
    }

    string getName() {
        return name;
    }
    string getYear() {
        return year;
    }

    virtual string print() {
        return name + ", built in " + year;
    }
};

class CruiseShip: public Ship {
private:
    int passengers;
public:
    CruiseShip(string name, string year, int passengers): Ship(name, year), passengers(passengers) { }
//    double area() {
//        return (width * height);
//    }
    void setPassengers(int newPassengers) {
        passengers = newPassengers;
    }

    int getPassengers(){
        return passengers;
    }

    virtual string print() {
        return name + ", with " + to_string(passengers) + " passengers.";
    }
};

class CargoShip: public Ship {
private:
    int capacity;
public:
    CargoShip(string name, string year, int capacity): Ship(name, year), capacity(capacity) { }
//    double area() {
//        return 3.14 * radius * radius;
//    }
    void setCapacity(int newCapacity) {
        capacity = newCapacity;
    }

    int getCapacity(){
        return capacity;
    }

    virtual string print() {
        return name + ", with " + to_string(capacity) + " tons of cargo capacity.";
    }
};

int main() {
    vector<unique_ptr<Ship>> toyBox;
    toyBox.push_back(make_unique<CruiseShip>("The big boat", "2005", 4000));
    toyBox.push_back(make_unique<CargoShip>("The bigger boat", "2006", 15000));
    for (auto& shape: toyBox) {
        cout << shape->print() << endl;
    }
    return 0;
}
