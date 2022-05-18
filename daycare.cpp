/*IT21212390*/

#include "daycare.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

daycare::daycare()
{
	careId = "";
	place = "";
	contactNo = "";
}
daycare::daycare(string dcareId, string dplace, string dcontactNo)
{
	careId = dcareId;
	place = dplace;
	contactNo = dcontactNo;
}

void daycare::setpetcaredetails(string dcareId, string dplace, string dcontactNo)
{
	careId = dcareId;
	place = dplace;
	contactNo = dcontactNo;
}
string daycare::getpetcarePlace()
{
	return place;
}
string daycare::getpetcareID()
{
	return careId;
}
string daycare::getpetcareContactNo()
{
	return contactNo;
}
daycare::daycare::~daycare()
{
	cout << "Destructor Called\n";
}