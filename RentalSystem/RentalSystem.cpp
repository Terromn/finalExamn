#include "RentalSystem.h"
#include <iostream>
using namespace std;

RentalSystem::RentalSystem() {
}

void RentalSystem::addCar(const Car &car) {
    cars.push_back(car);
}

void RentalSystem::addStaff(const Staff &staff) {
    staffMembers.push_back(staff);
}

void RentalSystem::displayCars() const {
    if (cars.empty()) {
        cout << "No cars available.\n";
        return;
    }
    for (const auto &car: cars) {
        cout << "Details: \n";
        car.displayDetails();
    }
}

void RentalSystem::displayStaff() const {
    if (staffMembers.empty()) {
        cout << "No staff members available.\n";
        return;
    }
    for (const auto &staff: staffMembers) {
        cout << "Staff Members: \n";
        staff.displayDetails();
    }
}

void RentalSystem::updateCarRentalStatus(const string &id, bool status) {
    for (auto &car: cars) {
        if (car.getId() == id) {
            car.setRentedStatus(status);
            cout << "Rental status updated successfully.\n";
            return;
        }
    }
    cout << "Car with ID " << id << " not found.\n";
}
