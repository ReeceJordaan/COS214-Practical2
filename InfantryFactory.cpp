#include "InfantryFactory.h"
#include "Infantry.h"

Soldiers* InfantryFactory::createUnit(){
	return new Infantry();
}

int InfantryFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int InfantryFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
