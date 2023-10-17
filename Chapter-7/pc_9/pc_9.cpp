#include <iostream>
#include "inc/Date.h"
using namespace std;

int main(void)
{
    Date newDate1;
    Date newDate2(15, 3, 2010);

    newDate1.print_numeric_date();
    newDate1.print_date_format1();
    newDate1.print_date_format2();

    cout << endl;
    newDate2.print_numeric_date();
    newDate2.print_date_format1();
    newDate2.print_date_format2();

    return 0;
}