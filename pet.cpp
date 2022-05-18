//IT21212390
#include "pet.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

pet::pet()
{
	petId = 0;
	petName = "";
	DOB = "";
	Breed = "";
}

pet::pet(int cpetId, string cpetName, string cDOB, string cBreeed)
{
	petName = cpetName;
	petId = cpetId;
	DOB = cDOB;
	Breed = cBreeed;
}

void pet::setpetDetails(string cpetName, string cDOB, string cBreeed)
{
	petName = cpetName;
	DOB = cDOB;
	Breed = cBreeed;
}

void pet::setpetId(int cpetId)
{
	petId = cpetId;
}

int pet::getpetId()
{
	return petId;
}

pet::~pet()
{
	cout << "Destructor Called\n";
}

string pet::getpetName()
{
	return petName;
	return Breed;
}

string pet::getpetDob()
{
	return DOB;
}
string pet::getpetBreed()
{
	return Breed;
}
