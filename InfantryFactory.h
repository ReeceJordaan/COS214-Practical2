#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "SoldierFactory.h"

using namespace std;

class InfantryFactory : public SoldierFactory
{
	public:
		Soldiers* createUnit();
		int calculateTotalHealthPerUnit();
		int calculateTotalDamagePerUnit();
		int calculateTotalDefencePerUnit();
};


#endif
