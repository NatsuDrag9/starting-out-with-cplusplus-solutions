#include <iostream>
using namespace std;

int main(void)
{
    float monthlyRent = 0.0, monthlyPhone = 0.0, monthlyUtilities = 0.0, monthlyCable = 0.0, netMonthlyExpenditure = 0.0, netAnnualExpenditure = 0.0;

    cout << "Enter monthly rent: ";
    cin >> monthlyRent;
    cout << "Enter monthly phone bill: ";
    cin >> monthlyPhone;
    cout << "Enter monthly utilities bill: ";
    cin >> monthlyUtilities;
    cout << "Enter monthly cable: ";
    cin >> monthlyCable;

    netMonthlyExpenditure = monthlyRent + monthlyPhone + monthlyCable + monthlyUtilities;
    netAnnualExpenditure = netMonthlyExpenditure * 12.0;

    cout << "Total monthly expenditure: " << netMonthlyExpenditure << endl;
    cout << "Total annual expenditure: " << netAnnualExpenditure << endl;
    return 0;
}