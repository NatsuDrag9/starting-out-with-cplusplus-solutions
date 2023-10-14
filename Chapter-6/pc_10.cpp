#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

float present_value(float futureValue, float annualInterestRate, int nYears);

/**
 * @brief Calculates the present value of a given future value.
 * P = F/(1+r)^n
 * F = futureValue
 * r = annualInterestRate
 * n = number of years
 *
 * @param futureValue
 * @param annualInterestRate
 * @param nYears
 * @return float - returns the present value
 */
float present_value(float futureValue, float annualInterestRate, int nYears)
{
    float presentValue = futureValue / pow(1 + annualInterestRate, nYears);
    return presentValue;
}

int main(void)
{
    float inp1 = 0.0, inp2 = 0.0;
    int inp3 = 0;
    cout << "Enter future value (in ₹): ";
    cin >> inp1;
    if (inp1 < 0.0)
    {
        cout << "Invalid input! Future value must be greater than 0. Exiting..." << endl;
        return 0;
    }
    cout << "Enter annual interest rate (in %): ";
    cin >> inp2;
    inp2 = inp2 / 100.0;
    if (inp2 < 0.01)
    {
        cout << "Invalid input! Annual interest rage must be greater than 1%. Exiting..." << endl;
        return 0;
    }
    cout << "Enter number of years: ";
    cin >> inp3;
    if (inp3 < 0)
    {
        cout << "Invalid input! Number of years must be a positive number. Exiting..." << endl;
        return 0;
    }

    cout << "The present value is (in ₹): " << present_value(inp1, inp2, inp3) << endl;

    return 0;
}