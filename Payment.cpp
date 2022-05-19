//IT21254048

#include <iostream>
#include "Person.h"
#include "Payment.h"
#include "Order.h"
#include <cstring>
#define SIZE 1

using namespace std;

Payment :: Payment() {
	PaymentNo = "";
	PaymentMethod = "";
        odr[1] = new Order(51);
}
Payment :: Payment(int paymentno, char paymentmethod, int odr1) {
	PaymentNo = paymentno;
	PaymentMethod = paymentmethod;
        odr1 = new Order(odr1);
}

void Payment :: Display() {
	cout << "This is Payment Class\n\n";
}

void Payment :: DisplayPayment() {
	cout << "Payment Number	: " << PaymentNo << "\n";
	cout << "Payment Method	: " << PaymentMethod << "\n\n";
}

void Payment :: DisplayOrder() {
	for(int i = 0; i < SIZE; i++){
		odr[i]->Display();
	}
}

Payment :: ~Payment() {
	for(int i = 0; i < SIZE; i++){
		delete odr[i];
	}
	cout << "Deleting Payment\n";
}
