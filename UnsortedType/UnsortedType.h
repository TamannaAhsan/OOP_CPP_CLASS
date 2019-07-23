#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

#include "ItemType.h"

class UnsortedType {
private:
	int length;
	ItemType info [MAX_ITEMS];
	int currentPos;
public:
	UnsortedType();
	void makeEmpty();
	bool isFull();
	ItemType getItem(ItemType item, bool &found);
	void putItem(ItemType item);
	void deleteItem(ItemType item);
	void resetList();
	ItemType getNextItem();
	int getLength();


};


#endif // UNSORTEDTYPE_H_INCLUDED
