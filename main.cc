#include "Control.h"

using namespace std;

/*
Program Purpose:
Manage a collection of animals and their owners/parents that are registered at an animal clinic. The user can view the lists of customers or animals registered to the clinic.

Program Usage:
	- Compile using the terminal command "make a4"
	- Run using the terminal command "./a4"
	- Enter "1" to view all of the data for the clinic
	- Enter "2" to view the list of animals registered to the clinic
	- Enter "3" to view the list of customers and their animals registered to the clinic
	- Enter "0" to exit the program
	- Use the terminal command "make clean" to remove extra files after running

Program Author:	Justin Calverley (ID: 101218430)
*/

int main()
{
	Control control;
	control.launch();
	
	return 0;
}
