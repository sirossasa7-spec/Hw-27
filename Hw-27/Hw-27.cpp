#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"

using namespace std;

int main() {

    Passport p("AA", "123456", "Ivanov", "Ivan", "Ivanovych",
        "01.01.1990", "Kyiv", "01.01.2010", "MVS", "Kyiv");

    p.printInfo();

    cout << "\n========================\n";

    ForeignPassport fp("BB", "654321", "Petrenko", "Petro", "Petrovych",
        "02.02.1985", "Lviv", "02.02.2015", "MVS", "Lviv");

    fp.addVisa(Visa("USA", "01.03.2020", "01.03.2025"));
    fp.addVisa(Visa("Germany", "01.06.2021", "01.06.2024"));

    fp.printInfo();

    return 0;
}