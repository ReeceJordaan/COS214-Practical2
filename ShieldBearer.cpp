#include "ShieldBearer.h"
#include <iostream>

Soldiers* ShieldBearer::clonis() {
    ShieldBearer* shieldBearer = new ShieldBearer();

    shieldBearer->healthPerSoldier = this->healthPerSoldier;
    shieldBearer->damagePerSoldier = this->damagePerSoldier;
    shieldBearer->defencePerSoldier = this->defencePerSoldier;
    shieldBearer->amountOfSoldiersPerUnit = this->amountOfSoldiersPerUnit;
    shieldBearer->unitName = this->unitName;

    return shieldBearer;
}

void ShieldBearer::engage() {
    prepare();
    execute();
}

void ShieldBearer::disengage() {
    retreat();
    rest();
}

void ShieldBearer::prepare() {
    std::cout << "ShieldBearer: Raising shields to form a protective barrier." << std::endl;
}

void ShieldBearer::execute() {
    std::cout << "ShieldBearer: Advancing with shields held high." << std::endl;
}

void ShieldBearer::retreat() {
    std::cout << "ShieldBearer: Withdrawing while maintaining shield wall." << std::endl;
}

void ShieldBearer::rest() {
    std::cout << "ShieldBearer: Lowering shields and catching breath." << std::endl;
}