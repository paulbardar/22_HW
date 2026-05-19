
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

    return 0;
}


