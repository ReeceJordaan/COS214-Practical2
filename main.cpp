#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include <iostream>

int main() {
    Infantry infantry;
    ShieldBearer shieldBearer;
    Boatman boatman;

    std::cout << "Infantry Engagement:" << std::endl;
    infantry.engage();
    std::cout << "\nInfantry Disengagement:" << std::endl;
    infantry.disengage();

    std::cout << "\n\nShieldBearer Engagement:" << std::endl;
    shieldBearer.engage();
    std::cout << "\nInfantry Disengagement:" << std::endl;
    shieldBearer.disengage();

    std::cout << "\n\nBoatman Engagement:" << std::endl;
    boatman.engage();
    std::cout << "\nInfantry Disengagement:" << std::endl;
    boatman.disengage();

    return 0;
}