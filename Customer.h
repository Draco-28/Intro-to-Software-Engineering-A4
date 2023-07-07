#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Identifiable.h"
#include "IdList.h"
#include "Animal.h"

#include <string>

using namespace std;

/*
Class:		Customer
Purpose:	Store and manage information pertaining to an identifiable customer of an animal clinic
*/

class Customer : public Identifiable
{
	public:
		Customer(string="");
		void addAnimal(Animal*);
		virtual int getCompValue();
		virtual void print();
		string getName();
	
	private:
		string name;
		static int nextId;
		IdList animals;
};

#endif
