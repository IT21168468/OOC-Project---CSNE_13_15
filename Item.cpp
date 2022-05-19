//IT21254048

#include <iostream>
#include "Person.h"
#include "Item.h"
#include "Owner.h"
#include <cstring>
#define SIZE 1

using namespace std;

Item :: Item() {
	ItemNo = "";
	Category = "";
        Quantity = "";
        Price = "";
        own[1] = new Owner(101)
        itm[1] = new Item(41);
}

Item :: Item(int itemno, char ItemCategory, int ItemQuantity, double ItemPrice, Owner *pown, int itm1) {
	ItemNo = itemno;
	Category = ItemCategory;
	Quantity = ItemQuantity;
	Price = ItemPrice;
	own[1] = new Owner(own1)
	itm[1] = new Item(itm1);   
}

 void Item :: Display() {
 	cout << "This is Item Class\n\n";
                                     
}

void Item :: DisplayItem() {
	cout << "Item Number	: " << ItemNo << "\n";
	cout << "Item Category	: " << Category  << "\n";
	cout << "Item Quantity	: " << Quantity << "\n";
	cout << "Item Price	: " << Price << "\n\n";
}

void Item :: DisplayOwner() {
	for(int i = 0; i < SIZE; i++){
		own[i]->Display();
	}
}

void Item :: DisplayItem() {
	for(int i = 0; i < SIZE; i++){
		itm[i]->Display();
	}
}

Item :: ~Item() {
	for(int i = 0; i < SIZE; i++){
		delete own[i];
		delete itm[i];
	}
	cout << "Deleting Item\n";
}
