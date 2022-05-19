//IT21254048

#include <iostream>
#include "Person.h"
#include "Order.h"
#include "Item.h"
#include <cstring>
#define SIZE 1

using namespace std;

Order :: Order() {
	      OrderNo = "";
	      ShippingMethod = "";
        itm[1] = new Item(61);
}

Order :: Order(int orderno, char shippingmethod, int itm1) {
	      OrderNo = orderno;
	      ShippingMethod = shippingmethod;
        itm[1] = new Item(itm1);
}

void Order :: Display() {
  cout << "This is Order Class >> Derived from Person\n\n";
}

void Order :: DisplayOrder() {
	cout << "Order Number	: " << OrderNo << "\n";
	cout << "Shipping Method : " << ShippingMethod  << "\n\n";
}

void Order :: DisplayItem() {
	for(int i = 0; i < SIZE; i++){
		itm[i]->Display();
	}
}

Order :: ~Order() {
	for(int i = 0; i < SIZE; i++){
		delete itm[i];
	}
	cout << "Deleting Order\n";
}