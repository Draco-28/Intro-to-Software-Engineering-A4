#include "Animal.h"

using namespace std;

#include <iomanip>
#include <iostream>
#include <string>

#include "Customer.h"

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType s, string n, string g, int y, int m) : Identifiable(nextId)
{
	species = s;
	name = n;
	gender = g;
	age = y*12 + m;
	parent = NULL;
}

int Animal::getCompValue()
{
	return age;
}

void Animal::print()
{
	string spc = "Other";
	if (species == C_DOG)
	{
		spc = "Dog";
	}
	else if (species == C_CAT)
	{
		spc = "Cat";
	}
	
	string prnt = "NONE";
	if (parent != NULL)
	{
		prnt = parent->getName();
	}
	
	cout << id << ":  " << left << setw(10) << name << ":  "
		<< setw(5) << spc << ";  Age:" << right << setw(3)
		<< (age/12) << " yrs, " << left << setw(2) << (age%12)
		<< " mths;  Parent: " << prnt << endl;
}

void Animal::setParent(Customer* c)
{
	parent = c;
}
