#include <iostream>

using namespace std;

struct Person {
    string firstName;
    string lastName;
    string role; 
    int awesomeLevel; // out of 5
};

struct Address {
   int houseNumber;
   string street;
   string apartmentNumber;
   string city;
   string state;
   int zip;        
};


struct PersonalInformation { 
   // include a personID
   int personID;
   // include a Person
   Person person;
   // include an Address
   Address address;
};

void outputPersonalInformation(PersonalInformation&);

int main() {
    PersonalInformation personalInfo1;
    PersonalInformation personalInfo2;

    personalInfo1.personID = 1;
    personalInfo1.person.firstName = "Test";
    personalInfo1.person.lastName = "Person";
    personalInfo1.person.role = "Tester";
    personalInfo1.person.awesomeLevel = 4;
    personalInfo1.address.houseNumber = 123;
    personalInfo1.address.street = "Test Avenue";
    personalInfo1.address.apartmentNumber = "";
    personalInfo1.address.city = "Testville";
    personalInfo1.address.state = "Testnessee";
    personalInfo1.address.zip = 12345;

    personalInfo2.personID = 2;
    personalInfo2.person.firstName = "Testing";
    personalInfo2.person.lastName = "Guy";
    personalInfo2.person.role = "Tester";
    personalInfo2.person.awesomeLevel = 3;
    personalInfo2.address.houseNumber = 7357;
    personalInfo2.address.street = "Test Street";
    personalInfo2.address.apartmentNumber = "A118";
    personalInfo2.address.city = "Testdale";
    personalInfo2.address.state = "Texas";
    personalInfo2.address.zip = 54321;

    outputPersonalInformation(personalInfo1);
    cout << endl;
    outputPersonalInformation(personalInfo2);

    return 0;
}

void outputPersonalInformation(PersonalInformation &info) {
    cout << "ID #" << info.personID << endl;
    cout << info.person.firstName << " " << info.person.lastName << endl;
    cout << "Level " << info.person.awesomeLevel << " " << info.person.role << endl;
    cout << "Address: " << endl;
    cout << info.address.houseNumber << " " << info.address.street << endl;
    if (info.address.apartmentNumber != "") {
        cout << "Apartment #" << info.address.apartmentNumber << endl;
    }
    cout << info.address.city << ", " << info.address.state << " " << info.address.zip << endl;
}