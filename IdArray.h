#ifndef IDARRAY_H
#define IDARRAY_H

#include "Collection.h"
#include "Identifiable.h"
#include "defs.h"

/*
Class:		IdArray
Purpose:	Store and manage an array collection of identifiable objects
*/

class IdArray : public Collection
{
	public:
		IdArray(int=MAX_ARR, bool=true);
		virtual ~IdArray();
		virtual bool add(Identifiable*);
		virtual bool find(int, Identifiable**);
		virtual void print();
	
	private:
		Identifiable** elements;
		int capacity;
		int size;
};

#endif
