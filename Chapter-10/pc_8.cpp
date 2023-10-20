#include <iostream>
#include <string>
#include <cstdbool>
using namespace std;

struct CurrentMonth
{
    int month;
    string name;
    int days;

    CurrentMonth(int m = 0, string str = "", int d = 0)
    {
        month = m;
        name = str;
        days = d;
    }
};

// Function prototype
int get_days(CurrentMonth *ptrCurrentMonth, int *ptrYear);
void set_month_and_days(CurrentMonth *ptrMonth);

/**
 * @brief Calculates the number of days in a month for a specified year
 *
 * @param ptrCurrentMonth - pointer to structure CurrentMonth
 * @param ptrYear - pointer to the year
 * @return int - number of days in the month
 */
int get_days(CurrentMonth *ptrCurrentMonth, int *ptrYear)
{
    if ((*ptrYear % 100 == 0) && (*ptrYear % 400 == 0))
    {
        if(ptrCurrentMonth->month == 2){
            return 29;
        }
    }
    else if ((*ptrYear % 100 != 0) && (*ptrYear % 4 == 0))
    {
        if(ptrCurrentMonth->month == 2){
            return 29;
        }
    }
    return ptrCurrentMonth->days;
}

/**
 * @brief Returns the corresponding month name as a string for the received input
 *
 * @param ptrCurrentMonth - pointer to current month array
 * @return string - name of the month
 */
void set_month_and_days(CurrentMonth *ptrMonth)
{
    if (ptrMonth->month == 1)
    {
        ptrMonth->name = "January";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 2)
    {
        ptrMonth->name = "February";
        ptrMonth->days = 28;
    }
    else if (ptrMonth->month == 3)
    {
        ptrMonth->name = "March";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 4)
    {
        ptrMonth->name = "April";
        ptrMonth->days = 30;
    }
    else if (ptrMonth->month == 5)
    {
        ptrMonth->name = "May";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 6)
    {
        ptrMonth->name = "June";
        ptrMonth->days = 30;
    }
    else if (ptrMonth->month == 7)
    {
        ptrMonth->name = "July";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 8)
    {
        ptrMonth->name = "August";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 9)
    {
        ptrMonth->name = "September";
        ptrMonth->days = 30;
    }
    else if (ptrMonth->month == 10)
    {
        ptrMonth->name = "October";
        ptrMonth->days = 31;
    }
    else if (ptrMonth->month == 11)
    {
        ptrMonth->name = "November";
        ptrMonth->days = 30;
    }
    else if (ptrMonth->month == 12)
    {
        ptrMonth->name = "December";
        ptrMonth->days = 31;
    }
}

int main(void)
{
    int ARRAY_LENGTH = 12;
    CurrentMonth *monthArr = new CurrentMonth[ARRAY_LENGTH];

    // Initializing the array
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        monthArr[i].month = i + 1;
        set_month_and_days(&monthArr[i]);
    }

    // User input
    int month = 0, year = 0, prevMonthInput = month, prevYearInput = year;
    cout << "Enter month and year (separated by a space): ";
    cin >> month >> year;
    while (month != 0 && year != 0)
    {
        if (month < 0)
        {
            cout << "Invlaid input! Month must be a positive number between 1 and 12." << endl;
            cout << "Enter month again: ";
            cin >> month;
        }
        if (year < 0)
        {
            cout << "Invalid input! Year must be a positive number." << endl;
            cout << "Enter year again: ";
            cin >> year;
        }
        cout << get_days(&monthArr[month - 1], &year) << " days" << endl;
        prevMonthInput = month, prevYearInput = year;
        cout << "Enter month and year (separated by a space): ";
        cin >> month >> year;
    }

    cout << "The current month, " << monthArr[prevMonthInput - 1].name << " " << prevYearInput << ", has " << monthArr[prevMonthInput - 1].days << " days." << endl;

    delete[] monthArr;
    monthArr = NULL;
    return 0;
}