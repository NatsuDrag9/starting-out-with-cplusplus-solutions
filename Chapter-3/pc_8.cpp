#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string movieName;
    float adultTicketCost = 6.00, childTicketCost = 3.00, grossProfit, netProfit, profitFraction = 0.2;
    int nAdultTicketsSold, nChildTicketsSold;

    cout << "Enter name of the movie: ";
    getline(cin, movieName);
    cout << "Enter number of adult tickets sold: ";
    cin >> nAdultTicketsSold;
    cout << "Enter number of child tickets sold: ";
    cin >> nChildTicketsSold;

    grossProfit = adultTicketCost*nAdultTicketsSold + childTicketCost*nChildTicketsSold;
    netProfit = profitFraction*grossProfit;
    float distributorAmt = grossProfit - netProfit;

    cout << left << setw(25) << "Movie Name: " << right << setw(10) << "\"" << movieName << "\"" << endl;
    cout << left << setw(25) << "Adult Tickets Sold: " << right << setw(14) << nAdultTicketsSold << endl;
    cout << left << setw(25) << "Child Tickets Sold: " << right << setw(14) << nChildTicketsSold << endl;
    cout << left << setw(25) << "Gross Box Office profit: " << right << setw(12) << fixed << setprecision(2) << "$ " << grossProfit << endl;
    cout << left << setw(25) << "Amount Paid to Distributor: " << right << setw(9) << fixed << setprecision(2) << "-$ " << distributorAmt << endl;
    cout << left << setw(25) << "Net Box Office Profit: " << right << setw(12) << fixed << setprecision(2) << "$ " << netProfit << endl;

    return 0;
}