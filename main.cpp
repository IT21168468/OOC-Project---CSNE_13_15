// IT21168468

#include <iostream>
#include "Person.h"
#include "Owner.h"
#include "Doctor.h"
#include "Staff.h"
#include "Appointment.h"
#include "Pet.h"
#include "Payment.h"
#include "Item.h"
#include "DayCare.h"
#include "Order.h"

using namespace std;

int main () {
	
	Person per1;
	Owner *ow1;
	Doctor *doc1;
	Staff *st1;
	
	per1.Display();
	
	ow1 = new Owner();
	ow1->Display();
	
	doc1 = new Doctor();
	doc1->Display();
	
	st1 = new Staff();
	st1->Display();
	
	ow1->DisplayOwner();
	doc1->DisplayDoctor();
	st1->DisplayStaff();
	
	delete ow1;
	delete doc1;
	delete st1;
	
	return 0;

}
