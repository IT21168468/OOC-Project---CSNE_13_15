//IT21212390
#pragma once
#include <cstring>
#include <string>

using namespace std;

class appoiment
{
private:
	string appId;
	string time;
	string date;

public:
	
	appoiment();
	appoiment(string aappId, string adate, string atime);
	void setappoimentdetails(string aappId, string adate, string atime);
	string getappoimentId();
	string getappoimentTime();
	string getappoimentdate();
	~appoiment();
};

