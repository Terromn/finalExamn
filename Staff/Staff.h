#ifndef STAFF_H
#define STAFF_H

#include "../CompanyAsset/CompanyAsset.h"
using namespace std;

class Staff : public CompanyAsset {
    int age;
    double hourPayRate;
    string homeAddress;

public:
    Staff(const string &id, const string &name, const string &status,
          int age, double hourPayRate, const string &homeAddress);

    void displayDetails() const override;

    void setAge(int age);

    int getAge() const;

    void setHourPayRate(double hourPayRate);

    double getHourPayRate() const;

    void setHomeAddress(const string &homeAddress);

    string getHomeAddress() const;
};

#endif
