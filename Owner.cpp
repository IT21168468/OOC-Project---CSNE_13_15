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

using namespace std;

Owner :: Owner(){
	Name = "";
	Email = "";
	ContactNo = "";
}

Owner :: Owner(int pet1, int pay1, int itm1, string ownerid, string name, string email, string contactno) {
	
}

void Owner :: Display() {
  cout << "This is Owner Class >> Derived from Person\n\n";
}

void Owner :: DisplayOwner() {
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

void Owner :: DisplayPet() {
	
}

void Owner :: DisplayPayment() {
	
}

void Owner :: AddItem() {
	
}

void Owner :: AddAppointment() {
	
}

Owner :: ~Owner() {
	for(int i = 0; i < size; i++){
		delete pet[i];
		delete pay[i];
	}
	cout << "Deleting Owner\n";
}
