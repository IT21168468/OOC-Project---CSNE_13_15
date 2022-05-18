//IT21212390
#include "appoiment.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

appoiment::appoiment()
{
	appId = "";
	time = "";
	date = "";
}
appoiment::appoiment(string aappId, string adate, string atime )
{
	appId = aappId;
	time = atime;
	date = adate;
}
void appoiment::setappoimentdetails(string aappId, string adate, string atime)
{
	appId = aappId;
	time = atime;
	date = adate;
}
string appoiment::getappoimentId()
{
	return appId;
}
string appoiment::getappoimentTime()
{
	return time;
}
string appoiment::getappoimentdate()
{
	return date;
}

appoiment::~appoiment()
{
	cout << "Destructor Called\n";
}