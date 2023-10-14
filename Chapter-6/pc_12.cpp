#include <iostream>
#include <cstdlib>
using namespace std;

float calculate_stock_profit(int nShares, float pp, float pc, float sp, float sc);
void get_stock_data(int &nShares, float &pp, float &pc, float &sp, float &sc, int stockNumber);

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
float calculate_stock_profit(int nShares, float pp, float pc, float sp, float sc)
{
    float profitLoss = ((nShares * sp) - sc) - ((nShares * pp) + pc);
    return profitLoss;
}

/**
 * @brief Get the data for each stock
 *
 * @param nShares - number of shares
 * @param pp - purchase price
 * @param pc - purchase commission
 * @param sp - sell price
 * @param sc - sell commission
 * @param stockNumber - data collected for this stock
 */
void get_stock_data(int &nShares, float &pp, float &pc, float &sp, float &sc, int stockNumber)
{
    cout << "\nEnter number of shares for stock "<< stockNumber <<": ";
    cin >> nShares;
    if (nShares < 0)
    {
        cout << "Invalid input! Number of shares must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter purchase price (in ₹) for stock "<< stockNumber <<": ";
    cin >> pp;
    if (pp < 0)
    {
        cout << "Invalid input! Purchase price must be greater than 0. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter purchase commission (in ₹) for stock "<< stockNumber <<": ";
    cin >> pc;
    if (pc < 0)
    {
        cout << "Invalid input! Purchase commission must be greater than 0. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter sell price (in ₹) for stock "<< stockNumber <<": ";
    cin >> sp;
    if (sp < 0)
    {
        cout << "Invalid input! Sell price must be greater than 0. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter Sell commission (in ₹) for stock "<< stockNumber <<": ";
    cin >> sc;
    if (sc < 0)
    {
        cout << "Invalid input! Sell commission must be greater than 0. Exiting..." << endl;
        exit(0);
    }
}

int main(void)
{
    int nStocks = 0;

    cout << "Enter number of stocks: ";
    cin >> nStocks;
    if (nStocks < 0)
    {
        cout << "Ivalid input! Number of stocks must be a positive number. Exiting..." << endl;
        return 0;
    }
    else
    {
        for (int i = 1; i <= nStocks; i++)
        {
            int nShares = 0;
            float pp = 0.0, pc = 0.0, sp = 0.0, sc = 0.0;
            get_stock_data(nShares, pp, pc, sp, sc, i);
            float value = calculate_stock_profit(nShares, pp, pc, sp, sc);
            value > 0 ? cout << "Profit (in ₹): " << value << endl : cout << "Loss (in ₹): " << value << endl;
        }
    }

    return 0;
}