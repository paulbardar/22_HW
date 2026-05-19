
#include <iostream>
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

    MyTime d(25, 61, 10, false);
    cout << "Does d time is valid?: " << (d.valid() ? "Valid" : "Unvalid") << endl;

    b.tickTime();
    b.showTime();

    b.untickTime();
    b.showTime();

    return 0;
}


