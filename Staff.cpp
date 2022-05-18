//IT21168468

#include <iostream>
#include "Person.h"
#include "Staff.h"
#include "Doctor.h"
#include "Appointment.h"
#include "DayCare.h"
#include "Item.h"
#include <cstring>

using namespace std;

Staff :: Staff() {
  StaffId = "";
  Name = "";
  Email = "";
  ContactNo = "";
}

Staff :: Staff(string staffid, string name, string email, string contactno) {
   	StaffId = staffid;
  	Name = name;
  	Email = email;
  	ContactNo = contactno; 		
}

void Staff :: Display() {
  cout << "This is Staff Class >> Derived from Person\n\n";
}

void Staff :: AddItem(Item *itm1) {
	itm[0] = itm1;
}

void Staff :: AddDayCare(DayCare *dcr1) {
	dcr[0] = dcr1;
}

void Staff :: AddAppointment(Appointment *app1) {
	app[0] = app1;
}

void Staff :: AddDoctor(Doctor *doc1) {
	doc[0] = doc1;
}

void Staff :: DisplayStaff() {
	cout << "Staff Id	: " << StaffId << "\n";
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

Staff :: ~Staff() {
	cout << "Deleting Staff\n";
}
