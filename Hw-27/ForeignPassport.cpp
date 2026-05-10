#include "ForeignPassport.h"
#include <iostream>

ForeignPassport::ForeignPassport() {}

ForeignPassport::ForeignPassport(string series, string number, string surname, string name,
    string patronymic, string birthDate, string birthPlace,
    string issueDate, string issuedBy, string registration)
    : Passport(series, number, surname, name, patronymic,
        birthDate, birthPlace, issueDate, issuedBy, registration) {
}

void ForeignPassport::addVisa(const Visa& visa) {
    visas.push_back(visa);
}

void ForeignPassport::printVisas() const {
    cout << "\nVisas:\n";
    for (const auto& v : visas) {
        v.printVisa();
        cout << "----------------\n";
    }
}

void ForeignPassport::printInfo() const {
    Passport::printInfo();
    printVisas();
}