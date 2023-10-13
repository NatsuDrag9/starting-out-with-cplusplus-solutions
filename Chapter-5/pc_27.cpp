#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    float startingBalance = 0.0, annualInterestRate = 0.01, monthlyDeposit = 0.0, monthlyWithdrawl = 0.0;

    cout << "Enter starting balance in the bank account (in ₹): ";
    cin >> startingBalance;
    if (startingBalance < 0)
    {
        cout << "Invalid input! Starting balance must be a positive number. Exiting..." << endl;
        return 0;
    }

    cout << "Enter annual interest rate (in %): ";
    cin >> annualInterestRate;
    annualInterestRate = annualInterestRate / 100.0;
    if ((annualInterestRate < 0.01) || (annualInterestRate > 1.0))
    {
        cout << "Invalid input! Annual interest rate must be between 1% and 100%. Exiting..." << endl;
        return 0;
    }

    // Inputs for monthly transactions
    float balance = startingBalance;
    float depositMonth1 = 0.0, depositMonth2 = 0.0, depositMonth3 = 0.0, withdrawlMonth1 = 0.0, withdrawlMonth2 = 0.0, withdrawlMonth3 = 0.0, interestMonth1 = 0.0, interestMonth2 = 0.0, interestMonth3 = 0.0;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter total amount deposited in month " << i << " (in ₹): ";
        cin >> monthlyDeposit;
        if (monthlyDeposit < 0)
        {
            cout << "Invalid input! Deposit must be a positive number. Exiting..." << endl;
            return 0;
        }
        balance += monthlyDeposit;
        float monthylStartingBalance = balance;

        cout << "Enter total amount withdrawn in month " << i << " (in ₹): ";
        cin >> monthlyWithdrawl;
        if (monthlyWithdrawl < 0)
        {
            cout << "Invalid input! Amount withdrawn must be a positive number. Exiting..." << endl;
            return 0;
        }
        if (monthlyWithdrawl > balance)
        {
            cout << "Invalid input! Amount withdrawn must be less than " << balance << ". Exiting..." << endl;
            return 0;
        }
        balance -= monthlyWithdrawl;
        float monthlyEndingBalance = balance;

        if (i == 1)
        {
            depositMonth1 = monthlyDeposit;
            withdrawlMonth1 = monthlyWithdrawl;
            interestMonth1 = (annualInterestRate / 12.0) * ((monthylStartingBalance + monthlyEndingBalance) / 2.0);
        }
        else if (i == 2)
        {
            depositMonth2 = monthlyDeposit;
            withdrawlMonth2 = monthlyWithdrawl;
            interestMonth2 = (annualInterestRate / 12.0) * ((monthylStartingBalance + monthlyEndingBalance) / 2.0);
        }
        else if (i == 3)
        {
            depositMonth3 = monthlyDeposit;
            withdrawlMonth3 = monthlyWithdrawl;
            interestMonth3 = (annualInterestRate / 12.0) * ((monthylStartingBalance + monthlyEndingBalance) / 2.0);
        }
    }

    // Printing report to file
    ofstream outputFile;
    outputFile.open("pc_27_report.txt");
    outputFile
        << "Starting balance at the beginning of three-month period (in ₹): " << startingBalance << endl;
    outputFile << "Total deposits made during three months (in ₹): " << depositMonth1 + depositMonth2 + depositMonth3 << endl;
    outputFile << "Total withdrawls made during three months (in ₹): " << withdrawlMonth1 + withdrawlMonth2 + withdrawlMonth3 << endl;
    outputFile << "Total interest posted to the account during three months (in ₹): " << interestMonth1 + interestMonth2 + interestMonth3 << endl;
    outputFile << "Final balance (in ₹): " << balance << endl;

    outputFile.close();

    return 0;
}