#ifndef SOLDIERS_H
#define SOLDIERS_H

using namespace std;

class Soldiers
{
	protected:
		virtual Soldiers* createUnit();
		virtual int calculateTotalHealthPerUnit();
		virtual int calculateTotalDamagePerUnit();
		virtual int calculateTotalDefencePerUnit();

	private:
		Soldiers* soldiers;
};


#endif
