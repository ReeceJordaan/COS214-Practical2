#include "BoatmanFactory.h"
#include "Boatman.h"

Soldiers* BoatmanFactory::createUnit(){
	return new Boatman();
}

int BoatmanFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int BoatmanFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int BoatmanFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
