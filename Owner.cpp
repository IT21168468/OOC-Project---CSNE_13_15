//IT21168468

#include <iostream>
#include "Person.h"
#include "Owner.h"
#include "Pet.h"
#include "Payment.h"
#include "Item.h"
#include "DayCare.h"
#include "Appointment.h"
#include <cstring>
#define SIZE 1

using namespace std;

Owner :: Owner(){
	Name = "";
	Email = "";
	ContactNo = "";
	pet[0] = new Pet(201);
	pay[0] = new Payment(301);
}

Owner :: Owner(int pet1, int pay1, string ownerid, string name, string email, string contactno) {
	pet[0] = new Pet(pet1);
	pey[0] = new Peyment(pay1);
	OwnerId = ownerid;
	Name = name;
	Email = email;
	ContactNo = contactno;
}

void Owner :: Display() {
  cout << "This is Owner Class >> Derived from Person\n\n";
}

void Owner :: DisplayOwner() {
	cout << "Owner Id	: " << OwnerId << "\n";
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

void Owner :: DisplayPet() {
	for(int i = 0; i < SIZE; i++){
		pet[i]->Display();
	}
}

void Owner :: DisplayPayment() {
	for(int i = 0; i < SIZE; i++){
		pay[i]->Display();
	}
}

void Owner :: AddItem(Item *I) {
	itm[0] = itm1;
}

void Owner :: AddAppointment(Appointment *A) {
	app[0] = app1;
}

Owner :: ~Owner() {
	for(int i = 0; i < SIZE; i++){
		delete pet[i];
		delete pay[i];
	}
	cout << "Deleting Owner\n";
}
