#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff(const string &id, const string &name, const string &status,
             int age, double hourPayRate, const string &homeAddress)
    : CompanyAsset(id, name, status) {
    this->age = age;
    this->hourPayRate = hourPayRate;
    this->homeAddress = homeAddress;
}

void Staff::displayDetails() const {
    cout << "Staff ID: " << id
            << "\nName: " << name
            << "\nAge: " << age
            << "\nHourly Pay Rate: " << hourPayRate
            << "\nHome Address: " << homeAddress
            << "\nStatus: " << status << "\n";
}

void Staff::setAge(int age) {
    this->age = age;
}

int Staff::getAge() const {
    return this->age;
}

void Staff::setHourPayRate(double hourPayRate) {
    this->hourPayRate = hourPayRate;
}

double Staff::getHourPayRate() const {
    return this->hourPayRate;
}

void Staff::setHomeAddress(const string &homeAddress) {
    this->homeAddress = homeAddress;
}

string Staff::getHomeAddress() const {
    return this->homeAddress;
}
