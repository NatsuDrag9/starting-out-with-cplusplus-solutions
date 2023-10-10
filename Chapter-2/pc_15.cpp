#include <iostream>
using namespace std;

int main(){
    int nShares = 600;
    float buyPrice = 21.77;
    float sellPrice = 16.44;
    float totalBuyPrice = nShares * buyPrice;
    float totalSellPrice = nShares * sellPrice;
    float loss = totalBuyPrice - totalSellPrice;    // avoiding negative value

    cout << "Total buying price: $" << totalBuyPrice << endl;
    cout << "Total selling price: $" << totalSellPrice << endl;
    cout << "Loss incurred: $" << loss << endl;

    return 0;
}