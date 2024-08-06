#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"

using namespace std;

class Boatman : public Soldiers
{
	public:
		void engage();
		void disengage();
		Soldiers* clonis();
		

	private:
		int healthPerSoldier;
		int damagePerSoldier;
		int defencePerSoldier;
		int amountOfSoldiersPerUnit;
		string unitName;
		void prepare();
		void execute();
		void retreat();
		void rest();
};


#endif
