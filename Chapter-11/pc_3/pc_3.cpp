#include <iostream>
#include <string>
#include "./inc/DayOfYear.h"
using namespace std;

int main(void)
{
    int userInput;
    string month;

    cout << "Enter month name: ";
    cin >> month;
    cout << "Enter day of the month: ";
    cin >> userInput;
    DayOfYear dayObj(month, userInput);

    ++dayObj;
    cout << "Date prefix increment " << endl;
    dayObj.print();
    cout << endl;

    cout << "Date postfix increment " << endl;
    dayObj++;
    dayObj.print();
    cout << endl;

    --dayObj;
    cout << "Date prefix decrement " << endl;
    dayObj.print();
    cout << endl;

    cout << "Date postfix decrement " << endl;
    dayObj--;
    dayObj.print();
    cout << endl;

    return 0;
}