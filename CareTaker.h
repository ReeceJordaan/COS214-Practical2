#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <stack>

using namespace std;

class CareTaker
{
	public:
		Memento* undo();
		void save(Memento* mem);

	private:
		stack<Memento*> mementoStack;
};


#endif