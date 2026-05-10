#pragma once
#include <string>
using namespace std;

class Visa {
private:
    string country;
    string openDate;
    string closeDate;

public:
    Visa(string country, string openDate, string closeDate);

    void printVisa() const;
};

