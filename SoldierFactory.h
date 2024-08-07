#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

using namespace std;

class SoldierFactory
{
	protected:
		virtual Soldiers* createUnit() = 0;
		virtual int calculateTotalHealthPerUnit();
		virtual int calculateTotalDamagePerUnit();
		virtual int calculateTotalDefencePerUnit();

	private:
		Soldiers* soldiers;
};


#endif
