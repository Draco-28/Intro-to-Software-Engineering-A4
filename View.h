#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;

/*
Class:		View
Purpose:	Handle input from the user and output to the console
*/

class View
{
	public:
		void showMenu(int&);
		void printStr(string);
		void readInt(int&);
		void readStr(string&);
};

#endif
