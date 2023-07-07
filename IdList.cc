#include "IdList.h"

using namespace std;

#include <cstddef>

IdList::IdList(bool a) : Collection(a)
{
	
}

IdList::~IdList()
{
	Node* current = head;
	while (current != NULL)
	{
		Node* temp = current;
		current = current->next;
		delete temp;
	}
}

bool IdList::add(Identifiable* obj)
{
	Node* current = head;
	Node* prev = NULL;
	if (asc)
	{
		while (current != NULL && obj->getCompValue() > current->data->getCompValue())
		{
			prev = current;
			current = current->next;
		}
	}
	else
	{
		while (current != NULL && obj->getCompValue() < current->data->getCompValue())
		{
			prev = current;
			current = current->next;
		}
	}
	
	Node* n = new Node;
	n->data = obj;
	n->next = current;
	
	if (current == head)
	{
		head = n;
	}
	else
	{
		prev->next = n;
	}
	
	return true;
}

bool IdList::find(int id, Identifiable** foundObj)
{
	Node* current = head;
	while (current != NULL)
	{
		if (id == current->data->getId())
		{
			*foundObj = current->data;
			return true;
		}
		
		current = current->next;
	}
	return false;
}

void IdList::cleanupData()
{
	Node* current = head;
	while (current != NULL)
	{
		delete current->data;
		current = current->next;
	}
}

void IdList::print()
{
	Node* current = head;
	while (current != NULL)
	{
		current->data->print();
		current = current->next;
	}
}

int IdList::getSize()
{
	int size = 0;
	Node* current = head;
	while (current != NULL)
	{
		++size;
		current = current->next;
	}
	return size;
}
