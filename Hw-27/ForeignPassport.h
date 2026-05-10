#pragma once
#include "Passport.h"
#include "Visa.h"
#include <vector>

class ForeignPassport : public Passport {
private:
    vector<Visa> visas;

public:
    ForeignPassport();
    ForeignPassport(string series, string number, string surname, string name,
        string patronymic, string birthDate, string birthPlace,
        string issueDate, string issuedBy, string registration);

    void addVisa(const Visa& visa);
    void printVisas() const;
    void printInfo() const;
};


