#include <iostream>
#include <iomanip>
#include "./inc/NumDays.h"
using namespace std;

int main(void)
{
    int userInput1, userInput2;
    cout << "Enter number of work hours for worker one: ";
    cin >> userInput1;
    NumDays n1(userInput1);
    cout << "Enter number of work hours for worker two: ";
    cin >> userInput2;
    NumDays n2(userInput2);
    n1.calculate_days();
    n2.calculate_days();
    n1.print();
    n2.print();

    cout << endl;
    cout << "Testing unary operators" << endl;
    cout << "Prefix increment" << endl;
    n1.operator++();
    n2.operator++();
    cout << "Work hours 1: " << n1.get_hours() << setw(7) << "Work" << " hours 2: " << n2.get_hours() << endl;
    cout << "Postfix increment" << endl;
    n1.operator++(2);
    n2.operator++(1);
    cout << "Work hours 1: " << n1.get_hours() << setw(7) << "Work" << " hours 2: " << n2.get_hours() << endl;
    cout << "Prefix decrement" << endl;
    n1.operator--();
    n2.operator--();
    cout << "Work hours 1: " << n1.get_hours() << setw(7) << "Work" << " hours 2: " << n2.get_hours() << endl;
    cout << "Postfix decrement" << endl;
    n1.operator--(2);
    n2.operator--(3);
    cout << "Work hours 1: " << n1.get_hours() << setw(7) << "Work" << " hours 2: " << n2.get_hours() << endl;

    cout << endl;
    cout << "Testing binary operators" << endl;
    cout << "Work hours one + work hours two : " << (n1 + n2).get_hours() << endl;
    cout << "Work hours one - work hours two : " << (n1 - n2).get_hours() << endl;

    return 0;
}