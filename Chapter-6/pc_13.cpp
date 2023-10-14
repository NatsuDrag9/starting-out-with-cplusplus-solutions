#include <iostream>
#include <cstdlib>
using namespace std;

void get_spool_data(int &inp1, int &inp2, float &inp3);
void calculate_order_status(int nSpoolsOrdered, int nSpoolsInStock, float additionalCharges);

/**
 * @brief Gets spool data from user
 *
 * @param inp1 - no. of spools ordered
 * @param inp2 - no. of spools in stock
 * @param inp3 - any special shipping and handling charge (above regular ₹10)
 */
void get_spool_data(int &inp1, int &inp2, float &inp3)
{
    cout << "Enter number of spools ordered: ";
    cin >> inp1;
    if (inp1 < 1)
    {
        cout << "Invalid input! Number of spools ordered must be greater than 1. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter number of spools in stock: ";
    cin >> inp2;
    if (inp2 < 0)
    {
        cout << "Invalid input! Number of spools in stock must be greater than 0. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter special shipping and handling charges (above regular ₹10): ";
    cin >> inp3;
    if (inp3 < 1)
    {
        cout << "Invalid input! Charges must be greater than 0. Exiting..." << endl;
        exit(0);
    }
}

/**
 * @brief Computes the order status and displays the following data:
 * No. of ordered spools ready to ship from current stock
 * No. of ordered spools on backorder(if the number ordered is greater than what is in stock).
 * Total selling price of the portion ready to ship (the number of spools ready to ship times ₹100).
 * Total shipping and handling charges on the portion ready to ship.
 * Total of the order ready to ship.
 *
 *
 * @param nSpoolsOrdered
 * @param nSpoolsInStock
 * @param additionalCharges
 */
void calculate_order_status(int nSpoolsOrdered, int nSpoolsInStock, float additionalCharges)
{
    int nSpoolsReadyToShip = (nSpoolsOrdered < nSpoolsInStock) ? nSpoolsOrdered : nSpoolsInStock;
    int nSpoolsOnBackorder = (nSpoolsOrdered < nSpoolsInStock) ? 0 : nSpoolsOrdered - nSpoolsInStock;
    float sellPrice = nSpoolsReadyToShip*100;
    float shippingPrice = nSpoolsReadyToShip*10 + additionalCharges;

    cout << "\nNumber of ordered spools ready to ship from current stock: " << nSpoolsReadyToShip << endl;
    cout << "Number of ordered spools on backorder: " << nSpoolsOnBackorder << endl;
    cout << "Total selling price of portion ready to ship (in ₹): " << sellPrice << endl;
    cout << "Total shipping and handling charges on the portion ready to ship (in ₹): " << shippingPrice << endl;
    cout << "Total of the order ready to ship (in ₹): " << sellPrice + shippingPrice << endl;
}

int main(void)
{
    int inp1 = 0, inp2 = 0;
    float inp3 = 0.0;

    get_spool_data(inp1, inp2, inp3);
    calculate_order_status(inp1, inp2, inp3);
    return 0;
}