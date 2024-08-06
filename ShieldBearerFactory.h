#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"

using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
	public:
		Soldiers* createUnit();
		int calculateTotalHealthPerUnit();
		int calculateTotalDamagePerUnit();
		int calculateTotalDefencePerUnit();
};


#endif
