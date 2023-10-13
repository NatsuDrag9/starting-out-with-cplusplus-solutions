#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    float annualInflationRate = 0.01, initialAmt = 1000, annualAdjustedAmt = 0.0;
    int years = 10;

    cout << "Enter annual inflation rate (in %): ";
    cin >> annualInflationRate;
    annualInflationRate = annualInflationRate / 100.0;

    // Input validation
    if (annualInflationRate < 0.01)
    {
        cout << "Invalid input! Inflation rate must be greater than 1%. Exiting..." << endl;
        return 0;
    }

    // Money value after first year
    annualAdjustedAmt = initialAmt / (1 + annualInflationRate);
    cout << "Value of $" << initialAmt << "after year 1: " << annualAdjustedAmt << endl;

    // Money value from 2nd year to 10th year
    for (int i = 2; i <= years; i++)
    {
        annualAdjustedAmt = annualAdjustedAmt / (1 + annualInflationRate);
        cout << "Value of $" << initialAmt << "after year " << i << ": " << annualAdjustedAmt << endl;
    }

    return 0;
}