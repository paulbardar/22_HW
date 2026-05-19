#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class MyTime
{
	int hour;
	int minutes;
	int seconds;
	bool format;// true = utc (24-hours), false = am/pm (12-hours),
	
public:
	MyTime(); // Current local time
	MyTime(int hour, int minutes, int seconds, bool format);

	void setFormat(bool format24);



	//--------- АКСЕСОРИ ---------
	void showTime()const;


};

