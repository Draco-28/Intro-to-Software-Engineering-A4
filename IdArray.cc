#include "IdArray.h"

using namespace std;

IdArray::IdArray(int c, bool a) : Collection(a)
{
	capacity = c;
	elements = new Identifiable*[capacity];
	size = 0;
}

IdArray::~IdArray()
{
	for (int e = 0; e < capacity; ++e)
	{
		delete elements[e];
	}
	delete [] elements;
}

bool IdArray::add(Identifiable* obj)
{
	if (size == capacity)
	{
		return false;
	}
	
	int e = 0;
	if (asc)
	{
		while (e < size && obj->getCompValue() > elements[e]->getCompValue())
		{
			++e;
		}
	}
	else
	{
		while (e < size && obj->getCompValue() < elements[e]->getCompValue())
		{
			++e;
		}
	}
	
	for (int i = size-1; i >= e; --i)
	{
		elements[i+1] = elements[i];
	}
	
	elements[e] = obj;
	++size;
	
	return true;
}

bool IdArray::find(int id, Identifiable** foundObj)
{
	for (int i = 0; i < size; ++i)
	{
		if (id == elements[i]->getId())
		{
			*foundObj = elements[i];
			return true;
		}
	}
	return false;
}

void IdArray::print()
{
	for (int i = 0; i < size; ++i)
	{
		elements[i]->print();
	}
}
