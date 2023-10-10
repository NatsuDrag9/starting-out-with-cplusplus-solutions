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
    float distributorAmt = netProfit - grossProfit;

    cout << left << setw(20) << "Movie Name: " << right << setw(15) << movieName << endl;
    cout << left << setw(20) << "Adult Tickets Sold: " << right << setw(15) << nAdultTicketsSold << endl;
    cout << left << setw(20) << "Child Tickets Sold: " << right << setw(15) << nChildTicketsSold << endl;
    cout << left << setw(20) << "Gross Box Office profit: " << right << setw(8) << fixed << setprecision(2) << "$ " << grossProfit << endl;
    cout << left << setw(20) << "Amount Paid to Distributor: " << right << setw(8) << fixed << setprecision(2) << "$ " << distributorAmt << endl;
    cout << left << setw(20) << "Net Box Office Profit: " << right << setw(10) << fixed << setprecision(2) << "$ " << netProfit << endl;

    return 0;
}