#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "SoldierFactory.h"

using namespace std;

class InfantryFactory : public SoldierFactory
{
	public:
		Soldiers* createUnit() override;
		int calculateTotalHealthPerUnit() override;
		int calculateTotalDamagePerUnit() override;
		int calculateTotalDefencePerUnit() override;
};


#endif
