#include <iostream>
using namespace std;

int main(void)
{
    int priceClassA = 15, priceClassB = 12, priceClassC = 9;
    int nTicketsClassA, nTicketsClassB, nTicketsClassC, ticketSalesIncome;

    cout << "Enter sold tickets for class A: ";
    cin >> nTicketsClassA;
    cout << "Enter sold tickets for class B: ";
    cin >> nTicketsClassB;
    cout << "Enter sold tickets for class C: ";
    cin >> nTicketsClassC;

    ticketSalesIncome = nTicketsClassA*priceClassA + nTicketsClassB*priceClassB + nTicketsClassC*priceClassC;

    cout << "Total income: " << ticketSalesIncome << endl;
    return 0;
}