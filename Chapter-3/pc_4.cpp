#include <iostream>
using namespace std;

int main(void)
{
    float replacementCost = 0.0, insuranceFraction = 0.8, minInsurance = 0.0;

    cout << "Enter replacement cost: ";
    cin >> replacementCost;
    
    minInsurance = insuranceFraction * replacementCost;

    cout << "Minimum insurance amount: " << minInsurance << endl;

    return 0;
}