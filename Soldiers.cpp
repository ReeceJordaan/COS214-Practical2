#include "Soldiers.h"

Soldiers* Soldiers::clonis() {
    // Abstract
}

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}

void Soldiers::prepare() {
    // Abstract
}

void Soldiers::execute() {
    // Abstract
}

void Soldiers::retreat() {
    // Abstract
}

void Soldiers::rest() {
    // Abstract
}