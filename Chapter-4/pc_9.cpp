#include <iostream>
using namespace std;

int main(void)
{
    int sellPrice = 99, nUnits;
    float discountFraction;

    cout << "Enter number of units: ";
    cin >> nUnits;

    if (nUnits < 0)
    {
        cout << "Invalid input! Units should be a positive number" << endl;
    }

    if((nUnits >=10) && (nUnits <= 19)){
        discountFraction = 0.2;
    }
    else if((nUnits >= 20) && (nUnits <= 49)){
        discountFraction = 0.3;
    }
    else if((nUnits >= 50) && (nUnits <= 99)){
        discountFraction = 0.4;
    }
    else if (nUnits >= 100){
        discountFraction = 0.5;
    }

    float totalCost = nUnits*(sellPrice - sellPrice*discountFraction);

    cout << "For " << nUnits << " units the total purchase cost is: $" << totalCost << endl;

    return 0;
}