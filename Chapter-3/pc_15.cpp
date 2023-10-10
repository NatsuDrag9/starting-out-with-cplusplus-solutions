#include <iostream>
// #include <string>
using namespace std;

/* For senior citizens */
int main(void)
{
    float propertyTaxFraction = 0.6,senCitizenExemption = 5000, currTaxRateForEvery100USD, actualValue;

    cout << "Enter actual value of property: ";
    cin >> actualValue;
    cout << "Enter current year tax rate for every $100: ";
    cin >> currTaxRateForEvery100USD;

    float assessedValue = actualValue*propertyTaxFraction - senCitizenExemption;
    float annualPropertyTax = assessedValue*currTaxRateForEvery100USD/100;
    float quarterlyTax = annualPropertyTax / 4.0;

    cout << "Annual property tax (in USD): " << annualPropertyTax << endl;
    cout << "Quarterly tax bill (in USD): " << quarterlyTax << endl;

    return 0;
}