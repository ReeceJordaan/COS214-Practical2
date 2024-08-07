#include "Boatman.h"
#include <iostream>

Soldiers* Boatman::clonis() {
    Boatman* boatman = new Boatman();

    boatman->healthPerSoldier = this->healthPerSoldier;
    boatman->damagePerSoldier = this->damagePerSoldier;
    boatman->defencePerSoldier = this->defencePerSoldier;
    boatman->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    boatman->unitName = this->unitName;

    return boatman;
}

void Boatman::engage() {
    prepare();
    execute();
}

void Boatman::disengage() {
    retreat();
    rest();
}

void Boatman::prepare() {
    std::cout << "Boatman: Maneuvering boats into strategic positions." << std::endl;
}

void Boatman::execute() {
    std::cout << "Boatman: Launching projectiles from the boats." << std::endl;
}

void Boatman::retreat() {
    std::cout << "Boatman: Steering boats away from danger." << std::endl;
}

void Boatman::rest() {
    std::cout << "Boatman: Anchoring boats and resting the oarsmen." << std::endl;
}