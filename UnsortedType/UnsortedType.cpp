#include "UnsortedType.h"
#include "ItemType.h"
#include "ItemType.cpp"
#include <iostream>
using namespace std;
UnsortedType::UnsortedType(){
	//construct object
}
 void UnsortedType::MakeEmpty(){
 	//clear the file
	 length = 0;
 }
void UnsortedType::putItem(ItemType item){
info[length++] = item;
}
void UnsortedType::deleteItem(ItemType item){
	int location = 0;
	while((item.comparedTo(info[location])) != EQUAL){
		location++;
	}
	info[location] = info[length-1];
	length--;
}
 bool UnsortedType::isFull(){
if(length == MAX_ITEMS)
	return true;
	 else
		 return false;
 }
int UnsortedType::GetLength() {
	return length;
}
void UnsortedType::ResetList(){

}
ItemType GetItem (ItemType item , bool &found){
bool moreToSearch;
int location = 0;
found = false;
	moreToSearch = (location < length );
	while(moreToSearch && !found){
	switch(item.comparedTo ( info [location])){
		case LESS :
		case GREATER : location++;moreToSearch = (location < length); break;
		case EQUAL : found = true;
			item = info[location];
			break;
	}
	}
	return item;
}

ItemType UnsortedType::GetNextItem(){
	return info[++currentPos];


}
void UnSortedType::Resetlist() {

	currentPos = -1;
}
