#include "../inc/Date.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/**
 * @brief Default constructor that sets date to January 1, 2001
 * 
 */
Date::Date()
{
    day = 1;
    month = 1;
    year = 2001;
}

/**
 * @brief Constructor that accepts values to set the date
 *
 * @param d - sets the day
 * @param m - sets the month
 * @param y - sets the year
 */
Date::Date(int d = 1, int m = 1, int y = 2001)
{
    if ((d < 1) || (d > 31))
    {
        cout << "Invalid input! Day must lie between 1 and 30. Exiting..." << endl;
        exit(0);
    }
    day = d;

    if ((m < 1) || (m > 12))
    {
        cout << "Invalid input! Month must lie between 1 and 12. Exiting..." << endl;
        exit(0);
    }
    month = m;

    if ((y < 1950) || (y > 2020))
    {
        cout << "Invalid input! Year must lie between 1950 and 2020. Exiting..." << endl;
        exit(0);
    }
    year = y;
}

/**
 * @brief - Displays date in m/d/y format
 *
 */
void Date::print_numeric_date()
{
    cout << "Date: " << month << "/" << day << "/" << year << endl;
}

/**
 * @brief - Displays date in d month, year
 *
 */
void Date::print_date_format1()
{
    switch (month)
    {
    case 1:
        cout << day << " January " << year << endl;
        break;
    case 2:
        cout << day << " February " << year << endl;
        break;
    case 3:
        cout << day << " March " << year << endl;
        break;
    case 4:
        cout << day << " April " << year << endl;
        break;
    case 5:
        cout << day << " May " << year << endl;
        break;
    case 6:
        cout << day << " June " << year << endl;
        break;
    case 7:
        cout << day << " July " << year << endl;
        break;
    case 8:
        cout << day << " August " << year << endl;
        break;
    case 9:
        cout << day << " September " << year << endl;
        break;
    case 10:
        cout << day << " October " << year << endl;
        break;
    case 11:
        cout << day << " November " << year << endl;
        break;
    case 12:
        cout << day << " December " << year << endl;
        break;
    default:
        cout << 1 << " January " << 2001 << endl;
        break;
    }
}

/**
 * @brief - Displays date in month day, year
 *
 */
void Date::print_date_format2()
{
    switch (month)
    {
    case 1:
        cout << "January " << day << ", " << year << endl;
        break;
    case 2:
        cout << "February " << day << ", " << year << endl;
        break;
    case 3:
        cout << "March " << day << ", " << year << endl;
        break;
    case 4:
        cout << "April " << day << ", " << year << endl;
        break;
    case 5:
        cout << "May " << day << ", " << year << endl;
        break;
    case 6:
        cout << "June " << day << ", " << year << endl;
        break;
    case 7:
        cout << "July " << day << ", " << year << endl;
        break;
    case 8:
        cout << "August " << day << ", " << year << endl;
        break;
    case 9:
        cout << "September " << day << ", " << year << endl;
        break;
    case 10:
        cout << "October " << day << ", " << year << endl;
        break;
    case 11:
        cout << "November " << day << ", " << year << endl;
        break;
    case 12:
        cout << "December " << day << ", " << year << endl;
        break;
    default:
        cout << "January " << 1 << ", " << 2001 << endl;
        break;
    }
}