#include <iostream>
using namespace std;

int main(void)
{
    int month, day, year;

    cout << "Enter month (in numeric): ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter two-digit year: ";
    cin >> year;

    if((year / 100) != 0){
        cout << "Year is not in two-digit form. Please enter year in two-digit form." << endl;
        return 0;
    }

    if((day < 1) || (day > 31)){
        cout << day << " is not a valid numeric day of a month" << endl;
        return 0;
    }

    if((month < 1) || (month > 12)){
        cout << month << " is not a valid numeric corresponding to one of the twelve months in a calendar year." << endl;
        return 0;
    }

    if(year == month*day){
        cout << "Date is magic" << endl;
    }
    else {
        cout << "Date is not magic" << endl;
    }

    return 0;
}