// IT21168468

#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include "Appointment.h"
#include <cstring>

using namespace std;

Doctor :: Doctor() {
  DoctorId = "";
  Name = "";
  Email = "";
  ContactNo = "";
}

Doctor :: Doctor(string doctorid, string name, string email, string contactno, int app1) {
  
}

void Doctor :: Display() {
  cout << "This is Doctor Class >> Derived from Person\n\n";
}

void Doctor :: DisplayAppointment() {
	
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
