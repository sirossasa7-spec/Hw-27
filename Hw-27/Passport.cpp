#include "Passport.h"
#include <iostream>

Passport::Passport() {}

Passport::Passport(string series, string number, string surname, string name,
    string patronymic, string birthDate, string birthPlace,
    string issueDate, string issuedBy, string registration)
{
    this->series = series;
    this->number = number;
    this->surname = surname;
    this->name = name;
    this->patronymic = patronymic;
    this->birthDate = birthDate;
    this->birthPlace = birthPlace;
    this->issueDate = issueDate;
    this->issuedBy = issuedBy;
    this->registration = registration;
}

void Passport::printInfo() const {
    cout << "Passport:\n";
    cout << "Series: " << series << "\nNumber: " << number << endl;
    cout << "Name: " << surname << " " << name << " " << patronymic << endl;
    cout << "Birth date: " << birthDate << "\nPlace: " << birthPlace << endl;
    cout << "Issued: " << issueDate << " by " << issuedBy << endl;
    cout << "Registration: " << registration << endl;
}