#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string customerName;
    char packageName;
    float hours, totalBill;

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
    if ((packageName == 'A') || (packageName == 'a'))
    {
        totalBill = 9.95 * 10 + (hours - 10) * 2.0;
    }
    else if ((packageName == 'B') || (packageName == 'b'))
    {
        totalBill = 14.92 * 20 + (hours - 19) * 1.0;
    }
    else if ((packageName != 'C') || (packageName != 'c'))
    {
        totalBill = 19.95;
    }

    cout << left << "Customer name: " << customerName << endl;
    cout << left << "No. of hours: " <<  hours << endl;
    cout << left << "Selected package: " << packageName << endl;
    cout << left << "Total Bill: $"  << totalBill << endl;

    return 0;
}