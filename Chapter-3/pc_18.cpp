#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    float loan, annualRate, monthlyRate, monthlyPayment, interest, netAmtPaid;
    int N;

    cout << "Enter loan amount: ";
    cin >> loan;
    cout << "Enter annual interest rate (in %): ";
    cin >> annualRate;
    cout << "Enter number of payments: ";
    cin >> N;

    // Converts from percentage to fraction
    annualRate = annualRate / 100.0;
    monthlyRate = annualRate / 12;

    monthlyPayment = loan * ((monthlyRate * pow((1 + monthlyRate), N)) / (pow((1 + monthlyRate), N) - 1));
    netAmtPaid = monthlyPayment * N;
    interest = netAmtPaid - loan;

    cout << endl;
    cout << left << setw(25) << "Loan amount: " << "$ " << right << setw(10) << fixed << setprecision(2) << loan << endl;
    cout << left << setw(25) << "Monthly Interest Rate: " << right << setw(11) << monthlyRate * 100 << "%" << endl;
    cout << left << setw(25) << "Number of Payments: " << right << setw(12) << N << endl;
    cout << left << setw(25) << "Monthly Payment: " << "$ " << right << setw(10) << fixed << setprecision(2) << monthlyPayment << endl;
    cout << left << setw(25) << "Amount Paid Back: " << "$ " << right << setw(10) << fixed << setprecision(2) << netAmtPaid << endl;
    cout << left << setw(25) << "Interest Paid: " << "$ " << right << setw(10) << fixed << setprecision(2) << interest << endl;

    return 0;
}