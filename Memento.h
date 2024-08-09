#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

using namespace std;

class Memento
{
	public:
		int getHealthPerSoldier();
		int getDamagePerSoldier();
		int getDefencePerSoldier();
		int getAmountOfSoldiersPerUnit();
		string getUnitName();

	private:
		int healthPerSoldier;
		int damagePerSoldier;
		int defencePerSoldier;
		int amountOfSoldiersPerUnit;
		string unitName;
		Memento(int value1, int value2, int value3, int value4, string value5);
		
};


#endif