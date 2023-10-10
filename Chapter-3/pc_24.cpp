#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream outputFile;
    string month;
    int year;
    float stateSalesTaxFraction = 0.04, countySalesTaxFraction = 0.02, totalSalesTaxFraction = 0.06, totalAmtCollected, totalSales, countySalesTax, stateSalesTax;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter total amount collected at cash register (sales + sales tax): ";
    cin >> totalAmtCollected;

    totalSales = totalAmtCollected / (1 + totalSalesTaxFraction);
    countySalesTax = totalSales * countySalesTaxFraction;
    stateSalesTax = totalSales * stateSalesTaxFraction;
    float totalSalesTax = countySalesTax + stateSalesTax;

    outputFile.open("pc_24.txt");
    outputFile << left << "Month: " << month << " " << setw(30) << year << endl;
    outputFile << left << setw(30) << "------------------------------" << endl;
    outputFile << left << setw(30) << "Total Collected: " << "$ " << right << setw(10) << fixed << setprecision(2) << totalAmtCollected << endl;
    outputFile << left << setw(30) << "Sales: " << "$ " << right << setw(10) << fixed << setprecision(2) << totalSales << endl;
    outputFile << left << setw(30) << "County Sales Tax: " << "$ " << right << setw(10) << fixed << setprecision(2) << countySalesTax << endl;
    outputFile << left << setw(30) << "State Sales Tax: " << "$ " << right << setw(10) << fixed << setprecision(2) << stateSalesTax << endl;
    outputFile << left << setw(30) << "Total Sales Tax: " << "$ " << right << setw(10) << fixed << setprecision(2) << totalSalesTax << endl;
    outputFile.close();

    return 0;
}