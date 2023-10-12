#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string customerName;
    char packageName;
    float hours, billA, billB, billC, savingsA, savingsB, savingsC;

    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Select the purchased package" << endl;
    cout << setw(5) << "Package A" << endl;
    cout << setw(5) << "Package B" << endl;
    cout << setw(5) << "Package C" << endl;
    cout << "Enter package name (A, B or C): ";
    cin >> packageName;
    cout << "Enter number of hours: ";
    cin >> hours;

    // Input validation
    if (((packageName == 'A') || (packageName == 'a')) || ((packageName == 'B') || (packageName == 'b')) || ((packageName == 'C') || (packageName == 'c')))
    {
        // do nothing
    }
    else
    {
        cout << "Invalid input! Package name should be A, B or C. Exiting..." << endl;
        return 0;
    }
    if (hours > 744)
    {
        cout << "Invalid input! Hours cannot exceed 744. Exiting.." << endl;
        return 0;
    }

    // Calculating bill
    billA = 9.95 * 10 + (hours - 10) * 2.0;
    billB = 14.92 * 20 + (hours - 19) * 1.0;
    billC = 19.95;

    cout << "Customer name: " << customerName << endl;
    cout << "No. of hours: " << hours << endl;
    cout << "Selected package: " << packageName << endl;
    if ((packageName == 'A') || (packageName == 'a'))
    {
        savingsB = billB - billA;
        savingsC = billC - billA;
        cout << "Selected package bill: " << billA << endl;
        cout << "Savings if package B was selected (-ve value indicates no savings): " << savingsB << endl;
        cout << "Savings if package C was selected (-ve value indicates no savings): " << savingsC << endl;
    }
    else if ((packageName == 'B') || (packageName == 'b'))
    {
        savingsA = billA - billB;
        savingsC = billC - billB;
        cout << "Selected package bill: " << billB << endl;
        cout << "Savings if package A was selected (-ve value indicates no savings): " << savingsA << endl;
        cout << "Savings if package C was selected (-ve value indicates no savings): " << savingsC << endl;
    }
    else if ((packageName != 'C') || (packageName != 'c'))
    {
        savingsB = billB - billC;
        savingsA = billA - billC;
        cout << "Selected package bill: " << billC << endl;
        cout << "Savings if package B was selected (-ve value indicates no savings): " << savingsB << endl;
        cout << "Savings if package A was selected (-ve value indicates no savings): " << savingsA << endl;
    }

    return 0;
}