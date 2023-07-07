#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

/*
Class:		Identifiable
Purpose:	Store a pure virtual template of a generic identifiable object
*/

class Identifiable
{
	public:
		Identifiable(int&);
		virtual ~Identifiable();
		virtual int getCompValue() = 0;
		virtual void print() = 0;
		int getId();
		
	protected:
		int id;
};

#endif
