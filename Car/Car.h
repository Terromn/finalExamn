#ifndef CAR_H
#define CAR_H

#include "../CompanyAsset/CompanyAsset.h"
using namespace std;

class Car : public CompanyAsset {
    string brand;
    string model;
    int year;
    string color;
    bool rentedStatus;
    string energySource;

public:
    Car(const string &id, const string &name, const string &status,
        const string &brand, const string &model, int year, const string &color,
        const string &energySource);

    void displayDetails() const override;

    void setRentedStatus(bool status);

    bool getRentedStatus() const;

    void setBrand(const string &brand);

    string getBrand() const;

    void setModel(const string &model);

    string getModel() const;

    void setYear(int year);

    int getYear() const;

    void setColor(const string &color);

    string getColor() const;

    void setEnergySource(const string &energySource);

    string getEnergySource() const;
};

#endif
