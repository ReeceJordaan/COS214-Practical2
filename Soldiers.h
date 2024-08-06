#ifndef SOLDIERS_H
#define SOLDIERS_H

#include "Memento.h"

using namespace std;

class Soldiers
{
	public:
		virtual void engage();
		virtual void disengage();
		virtual Soldiers* clonis();
		Memento* militusMemento();
		void vivificaMemento(Memento* mem);

	private:
		int healthPerSoldier;
		int damagePerSoldier;
		int defencePerSoldier;
		int amountOfSoldiersPerUnit;
		string unitName;
		virtual void prepare();
		virtual void execute();
		virtual void retreat();
		virtual void rest();
};


#endif
