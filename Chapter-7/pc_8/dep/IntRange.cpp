#include <iostream>
#include "../inc/IntRange.h"
using namespace std;

/**
 * @brief Default constructor that sets a default range
 *
 */
IntRange::IntRange()
{
    // Set default range between 0 and 5 if no inputs are provided
    lower = 0;
    upper = 5;
}

/**
 * @brief Constructor to set the range
 *
 */
IntRange::IntRange(int l, int u)
{
    lower = l;
    upper = u;
}

/**
 * @brief Gets input from the user and checks whether it lies within the specified range or not
 *
 */
int IntRange::getData()
{
    cout << "Enter a number: ";
    cin >> userInput;

    while ((userInput < lower) || (userInput > upper))
    {
        cout << "Invalid input! Number should lie between " << lower << " and " << upper << "." << endl << "Enter again: ";
        cin >> userInput;
    }
    return userInput;
}