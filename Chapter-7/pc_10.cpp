#include <iostream>
#include "inc/Heading.h"
#include <string>
using namespace std;

int main(void)
{
    Heading h1;
    Heading h2("Pets Pals", "Payroll Report");

    h1.print_heading_one_line();
    h1.print_heading_four_lines();

    cout << endl;
    h2.print_heading_one_line();
    h2.print_heading_four_lines();

    return 0;
}