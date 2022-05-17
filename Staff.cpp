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

Staff :: Staff(string staffid, string name, string email, string contactno, Item *pitm, DayCare *pdcr, Doctor *pdoc, Appointment *paap) {
  	
}

void Staff :: Display() {
  cout << "This is Staff Class >> Derived from Person\n\n";
}

void Staff :: DisplayItem() {
	
}

void Staff :: DisplayDayCare(){
	
}

void Staff :: DisplayAppointment() {
	
}

void Staff :: DisplayDoctor() {
	
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
