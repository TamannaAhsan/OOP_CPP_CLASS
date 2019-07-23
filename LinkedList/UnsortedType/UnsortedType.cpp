#include "UnsortedType.h"
#include<iostream>
struct NodeType {
	ItemType info;
	NodeType *next;
};

UnsortedType::UnsortedType(){
	listdata = NULL;
	length = 0;
}
bool UnsortedType::isFull(){
	try{
		NodeType *location  = new NodeType;
		delete location;
		return false;
	}
	catch(std::bad_alloc exception){
		return true;
	}
}

int UnsortedType::getLength(){
	return length;
}

void UnsortedType::makeEmpty(){
	NodeType *location;

	while(listData != NULL){
		location = listData;
		listData = listData->next;
		delete location;
	}
	length = 0;
}

void UnsortedType::putItem(ItemType item){
	NodeType *location = new NodeType;
	location->next = listData;
	location->info = item;
	listData = location;
	length++;
}

ItemType UnsortedType::getItem(ItemType &item, bool &found){
	NodeType *location ;
	location = listdata;
	found = false;
	bool moreToSearch = (location != NULL);

	while(moreToSearch && !found){
		switch(item.compareTo(location->info)){
			case LESS :
			case GREATER : location = location->next;
			moreToSearch = location != NULL;
			break;
			default : found = true;
			item = location->info;
			break;

		}
	}
	return item;
}

void UnsortedType::deleteItem(ItemType item){
	NodeType *location = listdata;
	NodeType *tempLocation;
if(item.compareTo(listdata->info) == EQUAL){
tempLocation = location;
listData = listData->next;
}

else {
	while(item.compareTo(location->info)!= EQUAL)
		location = location->next;

	tempLocation = location->next;
	location->next = location->next->next;
}

delete tempLocation;
	length--;

}

void UnsortedType::resetList(){
	currentPos = NULL;
}
ItemType UnsortedType::getNextItem(){
	if(currentPos == NULL){
		currentPos = listData;
	}
	else
		currentPos = currentPos->next;

		item = currentPos->info;
		return item;


}
UnsortedType:: ~UnsortedType()
{
	NodeType *tempPtr;
	while(location != NULL){
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
}

