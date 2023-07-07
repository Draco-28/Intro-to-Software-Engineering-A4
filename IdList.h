#ifndef IDLIST_H
#define IDLIST_H

#include "Collection.h"
#include "Identifiable.h"

/*
Class:		IdList
Purpose:	Store and manage a linked list collection of identifiable objects
*/

class IdList : public Collection
{
	class Node
	{
		public:
			Identifiable* data;
			Node* next;
	};
	
	public:
		IdList(bool=true);
		virtual ~IdList();
		virtual bool add(Identifiable*);
		virtual bool find(int, Identifiable**);
		void cleanupData();
		virtual void print();
		int getSize();
	
	private:
		Node* head;
};

#endif
