#include <iostream>
#include <iomanip>
using namespace std;

float calcualte_retail(float wholesaleCost, float markup);

/**
 * @brief calculates the retail price of an item from the wholesale cost and markup
 *
 * @param wholesaleCost
 * @param markup
 * @return retail price of the item
 */
float calculate_retail(float wholesaleCost, float markup)
{
    float retailPrice = wholesaleCost * (1.0 + markup);
    return retailPrice;
}

int main(void)
{

    float inp1, inp2;

    cout << "Enter wholesale cost: ";
    cin >> inp1;
    if (inp1 < 0.0)
    {
        cout << "Invalid input! Wholesale cost must be a positive number. Exiting..." << endl;
        return 0;
    }
    cout << "Etner markup percentage: ";
    cin >> inp2;
    inp2 = inp2 / 100.0;
    if (inp2 < 0.0)
    {
        cout << "Invalid input! Markup percentatge must be a positive number. Exiitng..." << endl;
        return 0;
    }

    // Calculate retail price
    cout << "The retail price is: " << fixed << setprecision(2) << calculate_retail(inp1, inp2) << endl;

    return 0;
}