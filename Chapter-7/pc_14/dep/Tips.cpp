#include <iostream>
#include <cstdlib>
#include "../inc/Tips.h"

using namespace std;

/**
 * @brief Default constructor that sets the tax rate to 6.5%
 *
 */
Tips::Tips()
{
    taxRate = 0.065;
}

/**
 * @brief Constructor that accepts a parameter to set the tax rate
 *
 */
Tips::Tips(float rate)
{
    rate = rate / 100.0;
    if (rate < 0)
    {
        taxRate = 0.065;
    }
    else
    {
        taxRate = rate;
    }
}

float Tips::compute_tip(float totalBill, float tipRate)
{
    if (totalBill < 0)
    {
        cout << "Invalid input! Total bill must be a positive number. Exiting..." << endl;
        exit(0);
    }
    tipRate = tipRate/100.0;
    if (tipRate < 0)
    {
        cout << "Invalid input! Tip rate must be between 1 and 100%. Exiting..." << endl;
        exit(0);
    }
    float mealCost = totalBill * (1-taxRate);
    float tip = mealCost * (1-tipRate);
    return tip;
}