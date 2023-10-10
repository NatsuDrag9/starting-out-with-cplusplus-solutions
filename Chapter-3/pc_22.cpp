#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int nShares = 100;
    float buyPricePerShare = 32.87, commissionFraction = 0.02, sellPricePerShare = 33.92;

    float totalBuyPrice = buyPricePerShare * nShares;
    float buyCommission = commissionFraction * buyPricePerShare;
    float totalSellPrice = sellPricePerShare * nShares;
    float sellCommission = commissionFraction * sellPricePerShare;
    float net = totalSellPrice - totalBuyPrice - buyCommission - sellCommission;

    cout << "Amount paid to buy 100 shares: " << totalBuyPrice << endl;
    cout << "Amount of commission paid on buy: " << buyCommission << endl;
    cout << "Amount paid to sell 100 shares: " << totalSellPrice << endl;
    cout << "Amount of commission paid on sell: " << sellCommission << endl;
    cout << "Net profit(+) or loss(-) made: " << net << endl;
    
    return 0;
}