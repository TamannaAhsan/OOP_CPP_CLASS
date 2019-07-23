#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include "UnsortedType.h"
#include "UnsortedType.cpp"
class ItemType{
int value;
	public:
	Initialize (int val);
	print();
	int compareTo(ItemType item);
};

#endif // ITEMTYPE_H_INCLUDED
