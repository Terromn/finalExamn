#ifndef COMPANYASSET_H
#define COMPANYASSET_H

#include <string>
using namespace std;

class CompanyAsset {
protected:
    string id;
    string name;
    string status;

public:
    CompanyAsset(const string &id, const string &name, const string &status);

    string getId() const;

    void setId(const string &id);

    string getName() const;

    void setName(const string &name);

    string getStatus() const;

    void setStatus(const string &status);

    virtual void displayDetails() const = 0;
};

#endif
