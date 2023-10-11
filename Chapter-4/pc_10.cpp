#include <iostream>
using namespace std;

int main(void)
{
    float monthlyFee = 10;
    int nChecks;

    cout << "Enter number of checks: ";
    cin >> nChecks;

    // Input validation
    if (nChecks < 0)
    {
        cout << "Invalid input! Number of checks should be a positive number" << endl;
        return 0;
    }

    if (nChecks < 20)
    {
        monthlyFee += nChecks * 0.1;
    }
    else if ((nChecks >= 20) && (nChecks <= 39))
    {
        monthlyFee += nChecks * 0.08;
    }
    else if ((nChecks >= 40) && (nChecks <= 59))
    {
        monthlyFee += nChecks * 0.06;
    }
    else if (nChecks >= 60)
    {
        monthlyFee += nChecks * 0.04;
    }

    cout << "Bank's fee for the month: " << monthlyFee << endl;

    return 0;
}