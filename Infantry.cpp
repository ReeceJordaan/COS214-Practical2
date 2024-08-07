#include "Infantry.h"
#include <iostream>

Soldiers* Infantry::clonis() {
    Infantry* infantry = new Infantry();

    infantry->healthPerSoldier = this->healthPerSoldier;
    infantry->damagePerSoldier = this->damagePerSoldier;
    infantry->defencePerSoldier = this->defencePerSoldier;
    infantry->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    infantry->unitName = this->unitName;

    return infantry;
}

void Infantry::engage() {
    prepare();
    execute();
}

void Infantry::disengage() {
    retreat();
    rest();
}

void Infantry::prepare() {
    std::cout << "Infantry: Forming tight defensive formations." << std::endl;
}

void Infantry::execute() {
    std::cout << "Infantry: Charging forward with bayonets." << std::endl;
}

void Infantry::retreat() {
    std::cout << "Infantry: Falling back in an orderly fashion." << std::endl;
}

void Infantry::rest() {
    std::cout << "Infantry: Resting and resupplying ammunition." << std::endl;
}