#ifndef ANIMAL_H
#define ANIMAL_H

#include "Identifiable.h"
#include "defs.h"

#include <string>

class Customer;

using namespace std;

/*
Class:		Animal
Purpose:	Store and manage information pertaining to an identifiable animal
*/

class Animal : public Identifiable
{
	public:
		Animal(SpeciesType=C_SPEC_OTHER, string="Unknown", string="Unknown", int=0, int=0);
		void setParent(Customer*);
		virtual int getCompValue();
		virtual void print();
		
	private:
		static int nextId;
		SpeciesType species;
		string name;
		string gender;
		int age;
		Customer* parent;
};

#endif
