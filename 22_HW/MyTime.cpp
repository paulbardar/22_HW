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

void MyTime::setFormat(bool format)
{
	this->format = format;
}

bool MyTime::getFormat() const
{
	return format;
}

bool MyTime::valid() const
{
	return (this->hour >= 0 && this->hour < 24) &&
		(this->minutes >= 0 && this->minutes < 60) &&
		(this->seconds >= 0 && this->seconds < 60);
}

void MyTime::tickTime()
{
	this->seconds++;
	if (this->seconds >= 60) {
		this->seconds = 0;
		this->minutes++;
		if (this->minutes >= 60) {
			this->minutes = 0;
			this->hour++;
			if (this->hour >= 24) {
				this->hour = 0;
			}
		}
	}
}

void MyTime::untickTime()
{
	this->seconds--;
	if (this->seconds < 0) {
		this->seconds = 59;
		this->minutes--;
		if (this->minutes < 0) {
			this->minutes = 59;
			this->hour--;
			if (this->hour < 0) {
				this->hour = 23;
			}
		}
	}
}

void MyTime::setHour(int hour)
{
	if (hour >= 0 && hour < 24) {
		this->hour = hour;
	}
	else {
		int total_hours = this->hour + hour;
		this->hour = total_hours % 24;
	}
}

int MyTime::getHour() const
{
	return hour;
}

void MyTime::setMinutes(int minutes)
{
	if (minutes >= 0 && minutes < 60) {
		this->minutes = minutes;
	}
	else {
		int total_minutes = this->minutes + minutes;
		int extra_hours = total_minutes / 60;
		this->minutes = total_minutes % 60;
		if (extra_hours > 0) {
			setHour(extra_hours);
		}
		
	}
}

int MyTime::getMinutes() const
{
	return minutes;
}

void MyTime::setSeconds(int seconds)
{
	if (seconds >= 0 && seconds < 60) {
		this->seconds = seconds;
	}
	else {
		int total_seconds = this->seconds + seconds;

		int extra_minutes = total_seconds / 60; 
		this->seconds = total_seconds % 60;     

		if (extra_minutes > 0) {
			setMinutes(this->minutes + extra_minutes); 
		}
	}
}

int MyTime::getSeconds() const
{
	return seconds;
}

void MyTime::showTime() const
{
	cout << setfill('0');
	if (this->format) {
		cout << hour / 10 << hour % 10  << ":" << minutes / 10 << minutes % 10 << ":" 
			<< seconds / 10 << seconds % 10 << endl;
	}
	else {
		string period = (hour < 12) ? "AM" : "PM";
		cout << hour % 12 << ":" << minutes / 10 << minutes % 10 << ":"
			<< seconds / 10 << seconds % 10 << " " << period << endl;
		//cout  << hour << ":" << minutes << ":" << seconds << " " << period << endl;
	}
}

bool MyTime::operator==(const MyTime& obj) const&
{
	return this->hour == obj.hour && this->minutes == obj.minutes && this->seconds == obj.seconds;
}

bool MyTime::operator!=(const MyTime& obj) const&
{
	return !(*this == obj);
}

bool MyTime::operator>(const MyTime& obj) const&
{
	if (this->hour > obj.hour) return true;
	else if (this->hour == obj.hour && this->minutes > obj.minutes) return true;
	else if (this->hour == obj.hour && this->minutes > obj.minutes && this->seconds > obj.seconds) return true;
	else return false;
}

bool MyTime::operator<(const MyTime& obj) const&
{
	return !(*this > obj) && *this != obj;
}

bool MyTime::operator>=(const MyTime& obj) const&
{
	return (*this > obj) || (*this == obj);;
}

bool MyTime::operator<=(const MyTime& obj) const&
{
	return !(*this > obj);;
}


