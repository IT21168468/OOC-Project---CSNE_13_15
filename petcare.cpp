// petcare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//IT21212390

#include "pet.h"
#include "appoiment.h"
#include "daycare.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	pet *p1, *p2, *p3, *p4;

	p1 = new pet(111, "wolly", "09/03/2019", "dog");
	p2 = new pet(112, "blacky", "29/07/2018", "dog");
	p3 = new pet(113, "chichi", "26/11/2021", "cat");
	p4 = new pet(114, "wiky", "04/09/2020", "cat");

	cout << "....abc pet care center...." << endl;
	cout << "Pet Id" << "\t\t" << "Pet Name" << "\t" << "DOB" << "\t\t" << "Pet Breed" << endl;

	cout  << p1->getpetId() << "\t\t" << p1->getpetName() <<"\t\t"<< p1->getpetDob()
		<< "\t"<< p1->getpetBreed()
		<< endl;
	cout << p2->getpetId() << "\t\t" << p2->getpetName() << "\t\t" << p2->getpetDob()
		<< "\t" << p2->getpetBreed()
		<< endl;
	cout << p3->getpetId() << "\t\t" << p3->getpetName() << "\t\t" << p3->getpetDob()
		<< "\t" << p3->getpetBreed()
		<< endl;
	cout << p4->getpetId() << "\t\t" << p4->getpetName() << "\t\t" << p4->getpetDob()
		<< "\t" << p4->getpetBreed()
		<< endl<<endl<<endl;

	appoiment *a1, *a2, *a3, *a4;

	a1 = new appoiment("A001","01/07/2022", "03:30 PM");
	a2 = new appoiment("A002", "09/07/2022", "02:30 PM");
	a3 = new appoiment("A003", "21/08/2022", "10:30 AM");
	a4 = new appoiment("A004", "11/06/2022", "03:30 PM");

	cout << ".....Appoiment......" << endl
		<< "Owner Id" << "\t" << "Pet Id" << "\t\t" <<"Appoiment Id"<< "\t\t" << "Date" << "\t\t" << "Time" << endl;

	cout << "ownerId"/*owner.h*/ << "\t\t" << p1->getpetId() << "\t\t" << a1->getappoimentId() << "\t\t\t" << a1->getappoimentdate() << "\t" <<
		a1->getappoimentTime() << endl;
	cout << "ownerId"/*owner.h*/ << "\t\t" << p2->getpetId() << "\t\t" << a2->getappoimentId() << "\t\t\t" << a2->getappoimentdate() << "\t" <<
		a2->getappoimentTime() << endl;
	cout << "ownerId"/*owner.h*/ << "\t\t" << p3->getpetId() << "\t\t" << a3->getappoimentId() << "\t\t\t" << a3->getappoimentdate() << "\t" <<
		a3->getappoimentTime() << endl;
	cout << "ownerId"/*owner.h*/ << "\t\t" << p4->getpetId() << "\t\t" << a4->getappoimentId() << "\t\t\t" << a4->getappoimentdate() << "\t" <<
		a4->getappoimentTime() << endl << endl << endl;

	daycare *d1, *d2, *d3;

	d1 = new daycare("C101", "Colombo", "0311234567");
	d2 = new daycare("C102", "Kurunegala", "0379234567");
	d3 = new daycare("C103", "Gampaha", "0311284567");

	delete p1;
	delete p2;
	delete p3;
	delete p4;
	cout << endl;
	delete a1;
	delete a2;
	delete a3;
	delete a4;
	cout << endl;
	delete d1;
	delete d2;
	delete d3;

	

	return 0;
}
