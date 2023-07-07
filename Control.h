#ifndef CONTROL_H
#define CONTROL_H

#include "Clinic.h"
#include "View.h"

/*
Class:		Control
Purpose:	Manage the control flow of the program
*/

class Control
{
	public:
		Control();
		~Control();
		void launch();
		
	private:
		View view;
		Clinic* clinic;
		void initCustomers(Clinic* c);
		void initAnimals(Clinic* c);
};

#endif
