#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include "../Car/Car.h"
#include "../Staff/Staff.h"
#include <vector>
using namespace std;

class RentalSystem {
    vector<Car> cars;
    vector<Staff> staffMembers;

public:
    RentalSystem();

    // uso & por que quiero usar el original en caso de que se borre o cambie alguna detail, por eso el og y no una copia
    void addCar(const Car &car);

    void addStaff(const Staff &staff);

    void displayCars() const;

    void displayStaff() const;

    void updateCarRentalStatus(const string &id, bool status);
};

#endif
