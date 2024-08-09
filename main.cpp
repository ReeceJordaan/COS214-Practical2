#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include <iostream>

int main() {
    Infantry infantry = Infantry(20, 20, 20, 20, "3rd Infantry Division");
    ShieldBearer shieldBearer = ShieldBearer(30, 30, 30, 30, "1st Shield Bearer Division");
    Boatman boatman = Boatman(40, 40, 40, 40, "4th Boatman Division");

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

    std::cout << "\n\nInfantry Stats:" << std::endl;
    infantry.printStats();

    std::cout << "\n\nShield Bearer Stats:" << std::endl;
    shieldBearer.printStats();

    std::cout << "\n\nBoatman Stats:" << std::endl;
    boatman.printStats();

    infantry.damage(&boatman);
    infantry.damage(&boatman);
    infantry.damage(&boatman);
    infantry.heal();
    infantry.heal();

    std::cout << "\n\nInfantry Stats:" << std::endl;
    infantry.printStats();

    std::cout << "\n\nShield Bearer Stats:" << std::endl;
    shieldBearer.printStats();

    std::cout << "\n\nBoatman Stats:" << std::endl;
    boatman.printStats();

    return 0;
}