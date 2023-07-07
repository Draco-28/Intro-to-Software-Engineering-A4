#include "Clinic.h"

using namespace std;

#include <iostream>

Clinic::Clinic(string n)
{
	name = n;
	animals.setAsc(false);
	customers.setAsc(false);
}

Clinic::~Clinic()
{
	animals.cleanupData();
}

void Clinic::add(Animal* a)
{
	animals.add(a);
}

void Clinic::add(Customer* c)
{
	customers.add(c);
}

bool Clinic::addToCustomer(Customer* c, int animalId)
{
	Identifiable* i;
	if (animals.find(animalId, &i))
	{
		Animal* animal = dynamic_cast<Animal*>(i);
		c->addAnimal(animal);
		return true;
	}
	else
	{
		cout << "No animal with the id #" << animalId << " could be found." << endl;
		return false;
	}
}

void Clinic::printAnimals()
{
	cout << endl << "ANIMALS:" << endl << endl;
	animals.print();
}

void Clinic::printCustomers()
{
	cout << endl << "CUSTOMERS:" << endl << endl;
	customers.print();
}

void Clinic::print()
{
	cout << endl << "DATA FOR " << name << endl << endl;
	printAnimals();
	printCustomers();
}
