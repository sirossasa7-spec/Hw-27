#include "Visa.h"
#include <iostream>

Visa::Visa(string country, string openDate, string closeDate) {
    this->country = country;
    this->openDate = openDate;
    this->closeDate = closeDate;
}

void Visa::printVisa() const {
    cout << "Visa to: " << country << endl;
    cout << "Open: " << openDate << " Close: " << closeDate << endl;
}