#ifndef COLLECTION_H
#define COLLECTION_H

#include "Identifiable.h"

/*
Class:		Collection
Purpose:	Store a pure virtual template of a generic collection of identifiable objetcs
*/

class Collection
{
	public:
		Collection(bool);
		virtual ~Collection();
		virtual bool add(Identifiable*) = 0;
		virtual bool find(int, Identifiable**) = 0;
		virtual void print() = 0;
		void setAsc(bool);
		
	protected:
		bool asc;	
};

#endif
