#include <iostream>
#include <cstdlib>
#include "../inc/DayOfYear.h"

// Defining static member variable
MonthAndDays DayOfYear::months[] = {{"Januray", 31}, {"February", 28}, {"March", 31}, {"April", 30}, {"May", 31}, {"June", 30}, {"July", 31}, {"August", 31}, {"September", 30}, {"October", 31}, {"November", 30}, {"December", 31}};

/**
 * @brief Default constructor
 *
 */
DayOfYear::DayOfYear()
{
    date = 0;
}

/**
 * @brief Initialization constructor to initialize the member variable
 *
 * @param _date - received integer value for intitialization
 */
DayOfYear::DayOfYear(int _date)
{
    date = _date;
}

/**
 * @brief Prints an when input received is less than 0
 *
 */
void DayOfYear::error()
{
    if (date < 0)
    {
        cout << "Invalid input! Date must be a positive number. Exiting..." << endl;
        exit(0);
    }
}

/**
 * @brief Prints the English description of the DayOfYear object
 * Ignoring leap year for this calculation
 */
void DayOfYear::print()
{
    error();
    int d = date % 365;
    int sum = 0, i = 0;
    while (sum < d)
    {
        sum += months[i].days;
        i++;
    }
    cout << "Day " << date << ": " << months[i].monthName << " " << sum - d << endl;

}