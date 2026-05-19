
#include <iostream>
#include <iomanip>
#include "MyTime.h"

int main()
{
    cout << "====================================\n" << endl;

    MyTime a;
    MyTime b(19, 51, 12, true);
    MyTime c(19, 51, 12, false);


    a.showTime();
    b.showTime();
    c.showTime();

    a.setFormat(false);
    a.showTime();

    cout << "====================================\n" << endl;

    a.setFormat(false);
    a.showTime();
   
    a.setMinutes(120);
    b.setSeconds(99);
    c.setHour(29);


    a.showTime();
    b.showTime();
    c.showTime();

    //MyTime d(25, 61, 10, false);
    //cout << "Does d time is valid?: " << (d.valid() ? "Valid" : "Unvalid") << endl;

    b.tickTime();
    b.showTime();

    b.untickTime();
    b.showTime();

    cout << "================================" << endl;

    MyTime d(18, 11, 7, true);
    MyTime f(8, 21, 18, false);

    d.showTime();
    f.showTime();

    cout << " d == f: " << boolalpha << (d == f) << endl;
    cout << " d != f: " << boolalpha << (d != f) << endl;
    cout << " d > f: " << boolalpha << (d > f) << endl;
    cout << " d < f: " << boolalpha << (d < f) << endl;
    cout << " d <= f: " << boolalpha << (d <= f) << endl;
    cout << " d >= f: " << boolalpha << (d >= f) << endl;

    cout << "================================" << endl;
    cout << "Assignment operators\n\n" << endl;

    MyTime t1(10, 15, 30, true);
    cout << "Start time: "; t1.showTime(); 
    t1 += 50.0f;
    cout << "time + 50 seconds: "; t1.showTime();

    t1 -= 30.0f;
    cout << "time - 30 seconds: "; t1.showTime();

    t1 += 10;
    cout << "time + 10 minutes: "; t1.showTime();

    t1 -= 23;
    cout << "time - 23 minutess: "; t1.showTime();

    t1 += 5l;
    cout << "time + 5 hours: "; t1.showTime();

    t1 -= 3l;
    cout << "time - 3 hours: "; t1.showTime();



    cout << "================================" << endl;
    cout << "--------- Arithmetic operators ---------\n\n" << endl;

    MyTime t2(12, 01, 02, true);
    cout << "Start time: "; t2.showTime();

    MyTime result1 = t2 + 30;    // + 30 minutes
    MyTime result2 = t2 + 2L;    // + 2 hour
    MyTime result3 = t2 - 15.0f; // - 15 seconds

    cout << "start + 30 minutes:    "; result1.showTime(); // 12:31:02
    cout << "start + 2 hour:    "; result2.showTime(); // 14:01:02
    cout << "start - 15 seconds:   "; result3.showTime(); // 12:00:47

    std::cout << "Start after:   "; t2.showTime(); // 12:01:02 



    return 0;
}


