
#include <iostream>
#include "MyTime.h"

int main()
{
    cout << "====================================\n" << endl;

    MyTime a;
    MyTime b(19, 51, 12, true);

    a.showTime();
    b.showTime();

    return 0;
}


