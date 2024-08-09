#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

Soldiers* ShieldBearerFactory::createUnit(){
	return new ShieldBearer();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit(){
	return SoldierFactory::calculateTotalHealthPerUnit();
}

int ShieldBearerFactory::calculateTotalDamagePerUnit(){
	return SoldierFactory::calculateTotalDamagePerUnit();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit(){
	return SoldierFactory::calculateTotalDefencePerUnit();
}
