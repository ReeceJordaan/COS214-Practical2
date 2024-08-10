#include "Infantry.h"
#include "ShieldBearer.h"
#include "Boatman.h"
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "Soldiers.h"
#include <iostream>

using namespace std;

int main() {
	
	//Derived classes of Soldier
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


	//Testing derived classes of SoldierFactory
	cout<<"\n\n\t\tTesting Shield Factory:\t\t\n";
	
	InfantryFactory infantryFactory(&infantry);
	ShieldBearerFactory shieldBearerFactory(&shieldBearer);
	BoatmanFactory boatmanFactory(&boatman);
	
	Soldiers* infantryUnit = infantryFactory.createUnit();
	Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
	Soldiers* boatmanUnit = boatmanFactory.createUnit();
	
	cout<<"Infantry Unit:\n";
	cout<<"Total Health: "<<infantryFactory.calculateTotalHealthPerUnit()<<"\n";
	cout<<"Total Damage: "<<infantryFactory.calculateTotalDamagePerUnit()<<"\n";
	cout<<"Total Defence: "<<infantryFactory.calculateTotalDefencePerUnit()<<"\n";
	
	cout<<"\nShieldBearer Unit:\n";
	cout<<"Total Health: "<<shieldBearerFactory.calculateTotalHealthPerUnit()<<"\n";
	cout<<"Total Damage: "<<shieldBearerFactory.calculateTotalDamagePerUnit()<<"\n";
	cout<<"Total Defence: "<<shieldBearerFactory.calculateTotalDefencePerUnit()<<"\n";
	
	cout << "\nBoatman Unit:\n";
	cout << "Total Health: "<<boatmanFactory.calculateTotalHealthPerUnit()<<"\n";
	cout << "Total Damage: "<<boatmanFactory.calculateTotalDamagePerUnit()<<"\n";
	cout << "Total Defence: "<<boatmanFactory.calculateTotalDefencePerUnit() <<"\n";

	delete infantryUnit;
	delete shieldBearerUnit;
	delete boatmanUnit;
	
	return 0;
}