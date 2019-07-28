#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "ItemType.h"
#include "ItemType.cpp"
#include <iostream>
using namespace std;

int main(){

    UnsortedType list;
    ItemType a1, a2, a3, a4;

    a1.initialize(5);
    a2.initialize(6);
    a3.initialize(7);
    a4.initialize(8);

    list.putItem(a1);
    list.putItem(a2);
    list.putItem(a3);
    list.putItem(a4);
    for(int i=0; i<(int)list.getLength(); i++){
        ItemType item=list.getNextItem();
        item.print();
    }

    if(list.isFull()){
        cout<<"List is full"<<endl;
    }
    else{
        cout<<"List is not full"<<endl;
    }

    cout<<list.getLength()<<endl;

    list.deleteItem(a2);
    list.resetList();
    for(int i=0; i<list.getLength(); i++){
        ItemType item=list.getNextItem();
        item.print();
    }

    list.resetList();
    ItemType item=list.getNextItem();
    item.print();

    bool found;
    list.getItem(a1,found);
    if(found== true){
        cout<<"Item is found"<<endl;
    }
    else{
        cout<<"Item is not found"<<endl;
    }

}

