#include "Unsorted.h"

UnsortedType::UnsortedType(){
	length = 0;
}
bool UnsortedType::isFull(){
	if(length == MAX_ITEMS) return true;
	else return false;

}
int UnsortedType::getLength(){
	return length;
}
void UnsortedType::putItem(ItemType item){
	info[length++] = item;
}
void UnsortedType::makeEmpty(){
	length = 0;
}
void UnsortedType::deleteItem(ItemType item){
int location = 0;
while (item.compareTo(info[location]) != EQUAL){
	location++;
}
info[location] = info[length -1];
length--;
}

void UnsortedType::resetList(){
	currentPos = -1;
}
ItemType UnsortedType::getNextItem(){
	currentPos++;
	return info[currentPos];
}
ItemType UnsortedType::getItem(ItemType item , bool &found)
{
	found = false;
	int location =0;
	bool moreToSearch = location<length;
while (moreToSearch && !found){
	switch(item.compareTo(info[location])){
		case GREATER :
		case LESS : location++;
		 moreToSearch = (location < length);break;
		default :
		found = true;
		item = info[location];
	}
}
return item;
}
