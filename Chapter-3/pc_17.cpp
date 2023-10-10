#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    float principal, annualRate;
    int T;

    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> annualRate;
    cout << "Enter number of times interest is compunded annually: ";
    cin >> T;

    // Converts from percentage to fraction
    annualRate = annualRate / 100.0;

    float amount = principal * pow((1 + (annualRate / static_cast<float>(T))), T);
    float interest = principal * (pow((1 + (annualRate / static_cast<float>(T))), T) - 1);

    cout << left << setw(25) << "Interest Rate: " << right << setw(9) << fixed << setprecision(2) << annualRate*100 << "%" << endl;
    cout << left << setw(25) << "Times Compunded: " << right << setw(10) << T << endl;
    cout << left << setw(25) << "Principal: " << "$ " << right << setw(10) << fixed << setprecision(2) << principal << endl;
    cout << left << setw(25) << "Interest: " << "$ " << right << setw(10) << fixed << setprecision(2) << interest << endl;
    cout << left << setw(25) << "Final Balance: " << "$ " << right << setw(10) << fixed << setprecision(2) << amount << endl;

    return 0;
}