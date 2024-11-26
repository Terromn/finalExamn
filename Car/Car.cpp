#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string &id, const string &name, const string &status,
         const string &brand, const string &model, const int year, const string &color,
         const string &energySource)
    : CompanyAsset(id, name, status) {
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->color = color;
    this->rentedStatus = false;
    this->energySource = energySource;
}

void Car::displayDetails() const {
    cout << "Car ID: " << id
            << "\nName: " << name
            << "\nBrand: " << brand
            << "\nModel: " << model
            << "\nYear: " << year
            << "\nColor: " << color
            << "\nEnergy Source: " << energySource
            << "\nRental Status: " << (rentedStatus ? "Rented" : "Available") << "\n";
}

void Car::setRentedStatus(bool status) {
    this->rentedStatus = status;
}

bool Car::getRentedStatus() const {
    return this->rentedStatus;
}

void Car::setBrand(const string &brand) {
    this->brand = brand;
}

string Car::getBrand() const {
    return this->brand;
}

void Car::setModel(const string &model) {
    this->model = model;
}

string Car::getModel() const {
    return this->model;
}

void Car::setYear(int year) {
    this->year = year;
}

int Car::getYear() const {
    return this->year;
}

void Car::setColor(const string &color) {
    this->color = color;
}

string Car::getColor() const {
    return this->color;
}

void Car::setEnergySource(const string &energySource) {
    this->energySource = energySource;
}

string Car::getEnergySource() const {
    return this->energySource;
}
