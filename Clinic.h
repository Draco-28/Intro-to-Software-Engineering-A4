#ifndef CLINIC_H
#define CLINIC_H

#include "Customer.h"
#include "Animal.h"
#include "IdList.h"
#include "IdArray.h"

#include <string>

using namespace std;

/*
Class:		Clinic
Purpose:	Store and manage information pertaining to an animal clinic
*/

class Clinic
{
	public:
		Clinic(string="Unknown");
		~Clinic();
		void add(Customer*);
		void add(Animal*);
		bool addToCustomer(Customer*, int);
		void print();
		void printCustomers();
		void printAnimals();
		
	private:
		string name;
		IdList animals;
		IdArray customers;
};

#endif
