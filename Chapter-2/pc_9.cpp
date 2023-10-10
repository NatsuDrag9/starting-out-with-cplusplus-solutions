#include <iostream>
using namespace std;

int main(){
    float profitFraction = 0.4;
    float costPrice = 12.67;
    float sellingPrice = costPrice*(1+profitFraction);

    cout << "Selling price: $" << sellingPrice << endl;

    return 0;
}