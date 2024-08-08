#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "SoldierFactory.h"

using namespace std;

class BoatmanFactory : public SoldierFactory
{
	public:
		Soldiers* createUnit() override;
		int calculateTotalHealthPerUnit() override;
		int calculateTotalDamagePerUnit() override;
		int calculateTotalDefencePerUnit() override;
};


#endif
