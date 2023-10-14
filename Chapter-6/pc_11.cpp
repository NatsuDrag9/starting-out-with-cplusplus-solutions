#include <iostream>
using namespace std;

float calculate_profit(int nShares, float pp, float pc, float sp, float sc);

/**
 * @brief Computes the profit or loss from the sale of a stock
 * Profit = ((nshares * sellPrice) - sellCommission) - ((nshares * purchasePrice) + purchaseCommission)
 *
 * @param nShares - number of shares of the stock
 * @param pp - purchase price
 * @param pc - purchase commission
 * @param sp - sell price
 * @param sc - sell commission
 * @return float - returns profit (+ve value) or loss (-ve value)
 */
float calculate_profit(int nShares, float pp, float pc, float sp, float sc)
{
    float profitLoss = ((nShares * sp) - sc) - ((nShares * pp) + pc);
    return profitLoss;
}

int main(void)
{
    int inp1 = 0;
    float inp2 = 0.0, inp3 = 0.0, inp4 = 0.0, inp5 = 0.0;
    cout << "Enter number of shares: ";
    cin >> inp1;
    if (inp1 < 0)
    {
        cout << "Invalid input! Number of shares must be a positive number. Exiting..." << endl;
        return 0;
    }
    cout << "Enter purchase price (in ₹): ";
    cin >> inp2;
    if (inp2 < 0)
    {
        cout << "Invalid input! Purchase price must be greater than 0. Exiting..." << endl;
        return 0;
    }
    cout << "Enter purchase commission (in ₹): ";
    cin >> inp3;
    if (inp3 < 0)
    {
        cout << "Invalid input! Purchase commission must be greater than 0. Exiting..." << endl;
        return 0;
    }
    cout << "Enter sell price (in ₹): ";
    cin >> inp4;
    if (inp4 < 0)
    {
        cout << "Invalid input! Sell price must be greater than 0. Exiting..." << endl;
        return 0;
    }
    cout << "Enter Sell commission (in ₹): ";
    cin >> inp5;
    if (inp5 < 0)
    {
        cout << "Invalid input! Sell commission must be greater than 0. Exiting..." << endl;
        return 0;
    }

    float value = calculate_profit(inp1, inp2, inp3, inp4, inp5);
    value > 0 ? cout << "Profit (in ₹): " << value << endl : cout << "Loss (in ₹): " << value << endl;

    return 0;
}