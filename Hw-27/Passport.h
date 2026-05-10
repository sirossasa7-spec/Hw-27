#pragma once
#include <string>
using namespace std;

class Passport {
protected:
    string series;
    string number;
    string surname;
    string name;
    string patronymic;
    string birthDate;
    string birthPlace;
    string issueDate;
    string issuedBy;
    string registration;

public:
    Passport();
    Passport(string series, string number, string surname, string name,
        string patronymic, string birthDate, string birthPlace,
        string issueDate, string issuedBy, string registration);

    void printInfo() const;
};

