#include "Collection.h"

using namespace std;

Collection::Collection(bool a)
{
	setAsc(a);
}

Collection::~Collection()
{

}

void Collection::setAsc(bool a)
{
	asc = a;
}
