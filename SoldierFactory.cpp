#include "SoldierFactory.h"

int SoldierFactory::calculateTotalHealthPerUnit(){
	return soldiers->gethealthPerSoldier() * soldiers->getamountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDamagePerUnit(){
	return soldiers->damagePerSoldier() * soldiers->getamountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDefencePerUnit(){
	return soldiers->defencePerSoldier() * soldiers->getamountOfSoldiersPerUnit();
}