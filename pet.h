//IT21212390
#pragma once
#include <cstring>
#include <string>

using namespace std;

class pet
{
private:
	int petId;
	string petName;
	string DOB;
	string Breed;

public:
	pet();
	pet(int cpetId, string cpetName, string cDOB, string cBreeed);
	void setpetDetails(string cpetName, string cDOB, string cBreeed);
	string getpetName();
	string getpetDob();
	string getpetBreed();
	void setpetId(int cpetId);
	int getpetId();
	~pet();


};

