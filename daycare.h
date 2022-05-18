//IT21212390
#pragma once
#include <cstring>
#include <string>

using namespace std;

class daycare
{
	string careId;
	string place;
	string contactNo;

public:
	daycare();
	daycare(string dcareId, string dplace, string dcontactNo);
	void setpetcaredetails(string dcareId, string dplace, string dcontactNo);
	string getpetcareID();
	string getpetcarePlace();
	string getpetcareContactNo();
	~daycare();
};

