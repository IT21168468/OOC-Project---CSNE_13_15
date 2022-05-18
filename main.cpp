// IT21168468

#include <iostream>
#include <cstring>
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
	
	string ownerid, doctorid, staffid, name, email, contactno, patnme, breed, dob, place;
	int petid, payno, orderno, itemno, appid, careid. qty;
	char peymethod, shipmethod, category, date, time;
	double price;
	
	Person per1;
	Owner *own1;
	Doctor *doc1;
	Staff *st1;
	Pet *pet1;
	Payment *pay1;
	Order *odr1;
	Item *itm1;
	Appointment *app1;
	DayCare *dcr1;
	
	per1.Display();
	
	cout << "\n\n***Pet Class***\n";
	cout << "-------------------------------------------\n";
	pet1 = new Pet();
	cout << "Enter Pet Id : "; cin >> petid;
	cout << "Enter Pet Name : "; cin >> name;
	cout << "Enter Pet Breed : "; cin >> breed;
	cout << "Enter Pet DoB : "; cin >> dob;
	pet1->Pet(petid, name, breed, dob);
	pet1->Display();
	
	
	cout << "\n\n***Payment Class***\n";
	cout << "-------------------------------------------\n";
	pay1 = new Payment();
	cout << "Enter Payment No : "; cin >> payno;
	cout << "Enter Payment Method : "; cin >> peymethod;
	pay1->Payment(payno, peymethod, odr1);
	pay1->Diaplay()
	pay1->DisplayOrder();
	pay1->CalcTotalPrice();
	
	
	cout << "\n\n***Order Class***\n";
	cout << "-------------------------------------------\n";
	odr1 = new Order();
	cout << "Enter Order No : "; cin >> orderno;
	cout << "Enter Shipping Method : "; cin >> shipmethod;
	odr1->Order(orderno, shipmethod, itm1);
	odr1->Display();
	odr1->DisplayItem();
	odr1->CalcOrderCharge();
	
	
	cout << "\n\n***Item Class***\n";
	cout << "-------------------------------------------\n";
	itm1 = new Item();
	cout << "Enter Item No : "; cin >> itemno;
	cout << "Enter Category : "; cin >> category;
	cout << "Enter Quantity : "; cin >> qty;	
	cout << "Enter Price : "; cin >> price;
	Item(itemno, category, qty, price, Owner *pown, itm1);
	itm1->DisplayOwner();
	itm1->DisplayItem();
	itm1->CalcPrice();
	
	
	cout << "\n\n***Appointment Class***\n";
	cout << "-------------------------------------------\n";
	app1 = new Appointment();
	cout << "Enter Appointment No : "; cin >> appid;
	cout << "Enter Appointment Date : "; cin >> date;
	cout << "Enter Appointment Time : "; cin >> time;
	app1->Appointment(appid, date, time, Owner *pown);
	app1->Display();
	app1->DisplayOwner();
	app1->DisplayAppointment();
	
	
	cout << "\n\n***DayCare Class***\n";
	cout << "-------------------------------------------\n";
	dcr1 = new DayCare
	cout << "Enter DayCare No : "; cin >> careid;
	cout << "Enter Place : "; cin >> place;
	cout << "Enter ContactNo : "; cin >> contactno;
	dcr1->DayCare(careid, place, contactno);
	dcr1->DisplayDayCare();
	
	
	cout << "\n\n***Owner Class***\n";
	cout << "-------------------------------------------\n";
	own1 = new Owner();
	own1->Display();
	cout << "Enter Owner Id : "; cin >> ownerid;
	cout << "Enter Owner Name : "; cin >> name;
	cout << "Enter Owner Email : "; cin >> email;
	cout << "Enter Owner ContactNo : "; cin >> contactno;
  	own1->Owner(pet1, pay1, ownerid, name, email, contactno);
	own1->DisplayPet();
	own1->DisplayPayment();
	own1->DisplayOwner();
	own1->AddItem();
	own1->AddAppointment();
	
	
	cout << "\n\n***Doctor Class***\n";
	cout << "-------------------------------------------\n";
	doc1 = new Doctor();
	doc1->Display();
	cout << "Enter Doctor Id : "; cin >> doctorid;
	cout << "Enter Doctor Name : "; cin >> name;
	cout << "Enter Doctor Email : "; cin >> email;
	cout << "Enter Doctor ContactNo : "; cin >> contactno;
	Doctor(doctorid, name, email, contactno, app1);
        doc1->DisplayDoctor();
        doc1->DisplayAppointment();
	
	
	cout << "\n\n***Staff Class***\n";
	cout << "-------------------------------------------\n";
	st1 = new Staff();
	st1->Display();
	cout << "Enter Staff Id : "; cin >> staffid;
	cout << "Enter Staff Name : "; cin >> name;
	cout << "Enter Staff Email : "; cin >> email;
	cout << "Enter Staff ContactNo : "; cin >> contactno;
	st1->Staff(staffid, name, email, contactno);
	st1->AddItem();
        st1->AddDayCare();
        st1->AddAppointment();
        st1->AddDoctor();
        st1->DisplayStaff();
	
	delete pet1;
	delete pay1;
	delete odr1;
	delete app1;
	delete dcr1;
	delete own1;
	delete doc1;
	delete st1;
	
	return 0;

}
