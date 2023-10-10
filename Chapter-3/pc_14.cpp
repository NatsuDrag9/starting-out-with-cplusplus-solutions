#include <iostream>
// #include <string>
using namespace std;

int main(void)
{
    float propertyTaxFraction = 0.6, currTaxRateForEvery100USD, actualValue;

    cout << "Enter actual value of property: ";
    cin >> actualValue;
    cout << "Enter current year tax rate for every $100: ";
    cin >> currTaxRateForEvery100USD;

    float assessedValue = actualValue*propertyTaxFraction;
    float annualPropertyTax = assessedValue*currTaxRateForEvery100USD/100;

    cout << "Annual property tax (in USD): " << annualPropertyTax << endl;

    return 0;
}