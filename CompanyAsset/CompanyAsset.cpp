#include "CompanyAsset.h"

CompanyAsset::CompanyAsset(const string &id, const string &name, const string &status) {
    this->id = id;
    this->name = name;
    this->status = status;
}

void CompanyAsset::setId(const string &id) {
    this->id = id;
}

string CompanyAsset::getId() const {
    return this->id;
}

void CompanyAsset::setName(const string &name) {
    this->name = name;
}

string CompanyAsset::getName() const {
    return this->name;
}

void CompanyAsset::setStatus(const string &status) {
    this->status = status;
}

string CompanyAsset::getStatus() const {
    return this->status;
}
