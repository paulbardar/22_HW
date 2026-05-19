#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
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

	void setHour(int hour);
	int getHour()const;
	void setMinutes(int minutes);
	int getMinutes()const;
	void setSeconds(int seconds);
	int getSeconds()const;
	bool getFormat()const;

	bool valid() const;
	void tickTime();
	void untickTime();

	void showTime()const;

	//--------- Comparison operators ---------
	bool operator == (const Time_& obj)const&;
	bool operator != (const Time_& obj)const&;
	bool operator > (const Time_& obj)const&;
	bool operator < (const Time_& obj)const&;
	bool operator >= (const Time_& obj)const&;
	bool operator <= (const Time_& obj)const&;



};

