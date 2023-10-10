#include <iostream>
using namespace std;

int main(){
    int costPrice = 52;
    float ssTaxFraction = 0.04;
    float csTaxFraction = 0.02;

    cout << "Purchase price: " << costPrice << endl;
    cout << "State sales tax: " << ssTaxFraction*costPrice << endl;
    cout << "County sales tax: " << csTaxFraction*costPrice << endl;
    cout << "Total tax: " << costPrice*(ssTaxFraction + csTaxFraction) << endl;
    return 0;
}