#include "ItemType.h"

ItemType::ItemType(){
	value=0;
}

void ItemType::initialize(int v){
value = v;
}
int ItemType::getValue(){
	return value;
}
relation ItemType::compareTo(ItemType item){
if(value < item.getValue())
return 	LESS;
else if(value > item.getValue())
return GREATER;
else return EQUAL;
}
