#include "MyTime.h"

MyTime::MyTime()
{
	tm* info = new tm;
	auto current = time(0);
	localtime_s(info, &current);

	hour = info->tm_hour;
	minutes = info->tm_min;
	seconds = info->tm_sec;

	format = true;
	delete info;

}

MyTime::MyTime(int hour, int minutes, int seconds, bool format = true)
{
	this->hour = hour;
	this->minutes = minutes;
	this->seconds = seconds;
	this->format = format;
}

void MyTime::setFormat(bool format24)
{
	this->format = format24;
}

void MyTime::showTime() const
{

	if (this->format) {
		cout << this->hour << ":" << this->minutes << ":" << this->seconds << endl;
	}
	else {
		string period = (this->hour < 12) ? "AM" : "PM";
		cout  << this->hour % 12 << ":" << this->minutes << ":" << this->seconds << " " << period << endl;
	}
}


