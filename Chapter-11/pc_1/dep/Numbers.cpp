#include <iostream>
#include <cstdlib>
#include "../inc/Numbers.h"

// Defining static member variables
string Numbers::lessThan20[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

// Leaving first two elements blank to match indices of ten's place
string Numbers::tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

/**
 * @brief Default constructor
 *
 */
Numbers::Numbers()
{
    number = 0;
}

/**
 * @brief Initialization constructor to initialize the member variable
 *
 * @param _number - received integer value for intitialization
 */
Numbers::Numbers(int _number)
{
    number = _number;
}

/**
 * @brief Prints an when input received is out of range
 * Accepted range - between 0 and 9999
 *
 */
void Numbers::error()
{
    if ((number < 0) || (number > 9999))
    {
        cout << "Invalid input! Number must lie between 0 and 9999. Exiting..." << endl;
        exit(0);
    }
}

/**
 * @brief Prints the English description of the Numbers object if number is within accepted range
 * else prints error
 */
void Numbers::print()
{
    if ((number >= 0) && (number <= 19))
    {
        cout << lessThan20[number] << endl;
    }
    else if ((number >= 20) && (number <= 99))
    {
        cout << tens[number / 10] << " " << lessThan20[number % 10] << endl;
    }
    else if ((number >= 100) && (number <= 999))
    {
        int temp = number / 100;
        cout << lessThan20[temp] << " " << hundred << " ";
        temp = number % 100;
        cout << tens[temp / 10] << " " << lessThan20[temp % 10] << endl;
    }
    else if ((number >= 1000) && (number <= 9999))
    {
        int temp = number / 1000;
        cout << lessThan20[temp] << " " << thousand << " ";
        temp = number % 1000;
        cout << lessThan20[temp / 100] << " " << hundred << " ";
        temp = temp % 100;
        cout << tens[temp / 10] << " " << lessThan20[temp % 10] << endl;
    }
    else {
        error();
    }
}