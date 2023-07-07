#include "Identifiable.h"

using namespace std;

Identifiable::Identifiable(int& i)
{
	id = i;
	++i;
}

Identifiable::~Identifiable() 
{
	
}

int Identifiable::getId()
{
	return id;
}
