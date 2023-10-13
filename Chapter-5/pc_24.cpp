#include <iostream>
using namespace std;

int main(void)
{
    int empNumber = 1, grossPay, stateTax, federalTax, fica;

    // Fetching inputs from user
    while (empNumber != 0)
    {
        cout << endl << "Enter employee number (or 0 to end input menu): ";
        cin >> empNumber;
        if(empNumber == 0){
            break;
        }
        cout << "Enter gross pay (in $): ";
        cin >> grossPay;
        cout << "Enter state tax (in $): ";
        cin >> stateTax;
        cout << "Enter federal tax (in $): ";
        cin >> federalTax;
        cout << "Enter fica with holdings (in $): ";
        cin >> fica;
        if (stateTax + federalTax + fica > grossPay)
        {
            cout << "Sum of state tax, federal tax and fica with holdings cannot exceed gross pay. Reenter data for employee: " << empNumber << endl;
        }
    }

    // Input validation
    if (empNumber < 0)
    {
        cout << "Invalid input! Employee number must be a positive number. Exiting..." << endl;
        return 0;
    }
    if (grossPay < 0)
    {
        cout << "Invalid input! Gross pay must be a positive number. Exiting..." << endl;
        return 0;
    }
    if (stateTax < 0)
    {
        cout << "Invalid input! State tax must be a positive number. Exiting..." << endl;
        return 0;
    }
    if (federalTax < 0)
    {
        cout << "Invalid input! Federal tax must be a positive number. Exiting..." << endl;
        return 0;
    }
    if (fica < 0)
    {
        cout << "Invalid input! Fica with holdings must be a positive number. Exiting..." << endl;
        return 0;
    }

    // Payroll calculation
    cout << endl << "Gross pay: $" << grossPay << endl;
    cout << "State tax: $" << stateTax << endl;
    cout << "Federal tax: $" << federalTax << endl;
    cout << "FICA with holdings: $" << fica << endl;
    cout << "Net pay: $" << grossPay - (stateTax + federalTax + fica) << endl;

    return 0;
}