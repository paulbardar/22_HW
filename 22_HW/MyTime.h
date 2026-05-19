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
	bool operator == (const MyTime& obj)const&;
	bool operator != (const MyTime& obj)const&;
	bool operator > (const MyTime& obj)const&;
	bool operator < (const MyTime& obj)const&;
	bool operator >= (const MyTime& obj)const&;
	bool operator <= (const MyTime& obj)const&;


	//--------- Assignment operators ---------	
	MyTime& operator += (float s);	// add seconds
	MyTime& operator -= (float s);
	MyTime& operator += (int m);		// add minutes
	MyTime& operator -= (int m);
	MyTime& operator += (long h);	// add hours
	MyTime& operator -= (long h);


	//--------- Arithmetic operators ---------
	MyTime operator + (float s)const&;	// add seconds
	MyTime operator - (float s)const&;
	MyTime operator + (int m)const&; // add minutes
	MyTime operator - (int m)const&;
	MyTime operator + (long h)const&; // add hours
	MyTime operator - (long h)const&;





};

