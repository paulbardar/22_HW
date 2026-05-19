
#include <iostream>
#include "MyTime.h"

int main()
{
    cout << "====================================\n" << endl;

    MyTime a;
    MyTime b(19, 51, 12, true);
    MyTime c(19, 51, 12, false);
    MyTime d(7, 51, 12, false);

    a.showTime();
    b.showTime();
    c.showTime();
    d.showTime();

    return 0;
}


