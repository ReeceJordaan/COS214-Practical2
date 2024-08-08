#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"

using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
	public:
		Soldiers* createUnit() override;
		int calculateTotalHealthPerUnit() override;
		int calculateTotalDamagePerUnit() override;
		int calculateTotalDefencePerUnit() override;
};


#endif
