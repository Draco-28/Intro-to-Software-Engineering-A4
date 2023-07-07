#include "Customer.h"

using namespace std;

#include "defs.h"
#include <iostream>

int Customer::nextId = CUSTOMER_IDS;

Customer::Customer(string n) : Identifiable(nextId)
{
	name = n;
	animals.setAsc(true);
}

void Customer::addAnimal(Animal* a)
{
	a->setParent(this);
	animals.add(a);
}

int Customer::getCompValue()
{
	return animals.getSize();
}

void Customer::print()
{
	cout << id <<  "   " << name << endl;
	cout << "-----  PETS:";
	if (animals.getSize() == 0)
	{
		cout << " NONE" << endl << endl;
	}
	else
	{
		cout << endl;
		animals.print();
		cout << endl;
	}
	
}

string Customer::getName()
{
	return name;
}
