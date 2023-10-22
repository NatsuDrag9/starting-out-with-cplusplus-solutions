#include <iostream>
#include <cstdlib>
#include "../inc/DayOfYear.h"

// Defining static member variable
MonthAndDays DayOfYear::months[] = {{"January", 31}, {"February", 28}, {"March", 31}, {"April", 30}, {"May", 31}, {"June", 30}, {"July", 31}, {"August", 31}, {"September", 30}, {"October", 31}, {"November", 30}, {"December", 31}};

/**
 * @brief Default constructor
 *
 */
DayOfYear::DayOfYear()
{
    this->monthName = "";
    this->day = 0;
}

/**
 * @brief Initialization constructor to initialize the member variable
 *
 * @param _day - received integer value for intitialization
 * @param _name - received month name for inititalization
 */
DayOfYear::DayOfYear(string _name, int _day)
{
    for (int i = 0; i < 12; i++)
    {
        if (months[i].monthName == _name)
        {
            if ((_day < 1) || (_day > months[i].days))
            {
                error("Day is outside range for the specified month.");
            }
            else
            {
                set_day(_day);
                set_month(_name);
            }
            break;
        }
        else if (i == 11)
        {
            error("Month not found");
        }
    }
}

/**
 * @brief Prints an error when input received is outside range
 *
 */
void DayOfYear::error(string err)
{
    cout << "Invalid input! " << err << " Exiting..." << endl;
    exit(0);
}

/**
 * @brief Sets the month name to str
 *
 * @param str - input string variable holding the name of the month
 */
void DayOfYear::set_month(string str)
{
    this->monthName = str;
}

/**
 * @brief Sets the day to d
 *
 * @param str - input integer variable holding the day
 */
void DayOfYear::set_day(int d)
{
    this->day = d;
}

/**
 * @brief Gets the month name
 *
 * @return string
 */
string DayOfYear::get_month()
{
    return this->monthName;
}

/**
 * @brief Gets the day
 *
 * @return int
 */
int DayOfYear::get_day()
{
    return this->day;
}

/**
 * @brief Overloading prefix increment operator
 * Three cases:
 * (i) Day = 31 and month is not December, then set day = 1 and increment month. If month is December then set 1st January
 * (ii) Day = 30 then increment month and set day to 1 (first day of next month)
 * (iii) Day = 28 and month is February then set day to 1 and increment month
 * (iv) Else, increment day keeping the same month
 *
 * @return DayOfYear
 */
DayOfYear DayOfYear::operator++()
{
    if (this->get_day() == 31)
    {
        this->set_day(1);
        if (this->get_month() == months[11].monthName)
        {
            this->set_month(months[0].monthName);
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                // Find the current month and increment it
                if (months[i].monthName == this->get_month())
                {
                    this->set_month(months[i + 1].monthName);
                    break;
                }
            }
        }
    }
    else if (this->get_day() == 30)
    {
        this->set_day(1);
        for (int i = 0; i < 11; i++)
        {
            // Find the current month and increment it
            if (months[i].monthName == this->get_month())
            {
                this->set_month(months[i + 1].monthName);
                break;
            }
        }
    }
    else if ((this->get_month() == months[1].monthName) && (this->get_day() == months[1].days))
    {
        // Month is February and day is 28
        this->set_day(1);
        this->set_month(months[2].monthName);
    }
    else
    {
        // Increment day keeping the same month
        this->set_day(this->get_day() + 1);
    }
    return *this;
}

/**
 * @brief Overloading postfix increment operator by first storing this into temp
 * Three cases:
 * (i) Day = 31 and month is not December, then set day = 1 and increment month. If month is December then set 1st January
 * (ii) Day = 30 then increment month and set day to 1 (first day of next month)
 * (iii) Day = 28 and month is February then set day to 1 and increment month
 * (iv) Else, increment day keeping the same month
 *
 * @param - int is dummy paramter
 * @return DayOfYear
 */
DayOfYear DayOfYear::operator++(int)
{
    DayOfYear temp = *this;
    if (this->get_day() == 31)
    {
        this->set_day(1);
        if (this->get_month() == months[11].monthName)
        {
            this->set_month(months[0].monthName);
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                // Find the current month and increment it
                if (months[i].monthName == this->get_month())
                {
                    this->set_month(months[i + 1].monthName);
                    break;
                }
            }
        }
    }
    else if (this->get_day() == 30)
    {
        this->set_day(1);
        for (int i = 0; i < 11; i++)
        {
            // Find the current month and increment it
            if (months[i].monthName == this->get_month())
            {
                this->set_month(months[i + 1].monthName);
                break;
            }
        }
    }
    else if ((this->get_month() == months[1].monthName) && (this->get_day() == months[1].days))
    {
        // Month is February and day is 28
        this->set_day(1);
        this->set_month(months[2].monthName);
    }
    else
    {
        // Increment day keeping the same month
        this->set_day(this->get_day() + 1);
    }
    return temp;
}

/**
 * @brief Overloading prefix decrement operator
 * Two cases:
 * (i) Day = 1 and month is not January, then set day = 30 or 31 (last day of previous month) and decrement month. If month is January then set day = 31 and month = December
 * (iii) Else, decrement day keeping the same month
 *
 * @return DayOfYear
 */
DayOfYear DayOfYear::operator--()
{
    if (this->get_day() == 1)
    {
        if (this->get_month() == months[0].monthName)
        {
            this->set_month(months[11].monthName);
            this->set_day(months[11].days);
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                // Find the current month and decrement it
                // Set day to last day of previous month
                if (months[i].monthName == this->get_month())
                {
                    this->set_month(months[i - 1].monthName);
                    this->set_day(months[i - 1].days);
                    break;
                }
            }
        }
    }
    else
    {
        // Decrement day keeping same month
        this->set_day(this->get_day() - 1);
    }
    return *this;
}

/**
 * @brief Overloading postfix decrement operator by first storing this into temp
 * Two cases:
 * (i) Day = 1 and month is not January, then set day = 30 or 31 (last day of previous month) and decrement month. If month is January then set day = 31 and month = December
 * (ii) Else, decrement day keeping the same month
 *
 * @param - int is dummy paramter
 * @return DayOfYear
 */
DayOfYear DayOfYear::operator--(int)
{
    DayOfYear temp = *this;
    if (this->get_day() == 1)
    {
        if (this->get_month() == months[0].monthName)
        {
            this->set_month(months[11].monthName);
            this->set_day(months[11].days);
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                // Find the current month and decrement it
                // Set day to last day of previous month
                if (months[i].monthName == this->get_month())
                {
                    this->set_month(months[i - 1].monthName);
                    this->set_day(months[i - 1].days);
                    break;
                }
            }
        }
    }
    else
    {
        // Decrement day keeping same month
        this->set_day(this->get_day() - 1);
    }
    return temp;
}

/**
 * @brief Prints the month and day of the received object
 *
 */
void DayOfYear::print()
{
    cout << "Day: " << this->get_day() << endl;
    cout << "Month: " << this->get_month() << endl;
}