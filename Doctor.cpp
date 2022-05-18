// IT21168468

#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include "Appointment.h"
#include <cstring>
#define SIZE 1

using namespace std;

Doctor :: Doctor() {
	DoctorId = "";
	Name = "";
	Email = "";
	ContactNo = "";
	app[1] = new Appointment(101);
}

Doctor :: Doctor(string doctorid, string name, string email, string contactno, int app1) {
	DoctorId = doctorid;
	Name = name;
	Email = email;
	ContactNo = contactno;
	app[1] = new Appointment(app1);
}

void Doctor :: Display() {
	cout << "This is Doctor Class >> Derived from Person\n\n";
}

void Doctor :: DisplayAppointment() {
	for(int i = 0; i < SIZE; i++){
		app[i]->Display();
	}
}

void Doctor :: DisplayDoctorData() {
	cout << "Doctor Id	: " << DoctorId << "\n";
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

Doctor :: ~Doctor() {
	for(int i = 0; i < size; i++){
		delete app[i];
	}
	cout << "Deleting Doctor\n";
}
