#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "ItemType.h"
#include "ItemType.cpp"
class UnsortedType{
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;

    public :
	UnsortedType();
	void MakeEmpty();
	bool IsFull();
	int GetLength();
	ItempType GetItem();
	void putItem(ItemType item);
	void deleteItem(ItemType item);
	void ResetList();
	ItemType GetNextItem();

};


#endif // UNSORTEDTYPE_H_INCLUDED
