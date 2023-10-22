#include <iostream>
#include <cstdlib>
#include "../inc/DivSales.h"

/**
 * @brief Default constructor that initializes data members to 0
 *
 */
DivSales::DivSales()
{
    this->set_sales(0, 0, 0, 0);
}

/**
 * @brief Initialization constructor to initialize the quarterly sales
 *
 * @param q1 - sales for quarter 1
 * @param q2 - sales for quarter 2
 * @param q3 - sales for quarter 3
 * @param q4 - sales for quarter 4
 */
DivSales::DivSales(int q1, int q2, int q3, int q4)
{
    if ((q1 < 0) || (q2 < 0) || (q3 < 0) || (q4 < 0))
    {
        this->error("Quarterly sales must be a positive number.");
    }
    this->set_sales(q1, q2, q3, q4);
}

/**
 * @brief Initializing static variable to 0
 *
 */
int DivSales::totalAnnualSales = 0;

/**
 * @brief Copies the received quarterly sales to the sales array and the total of the four arguments is set to the static member totalAnnualSales
 *
 * @param q1 - sales for quarter 1
 * @param q2 - sales for quarter 2
 * @param q3 - sales for quarter 3
 * @param q4 - sales for quarter 4
 */
void DivSales::set_sales(int q1, int q2, int q3, int q4)
{
    if ((q1 < 0) || (q2 < 0) || (q3 < 0) || (q4 < 0))
    {
        this->error("Quarterly sales must be a positive number.");
    }
    this->quarterlySales[0] = q1;
    this->quarterlySales[1] = q2;
    this->quarterlySales[2] = q3;
    this->quarterlySales[3] = q4;

    totalAnnualSales += q1 + q2 + q3 + q4;
}

/**
 * @brief Takes an integer between 0 and 3 to return the corresponding quarterly sales
 * 
 * @param index - index of quarterSales array
 */
int DivSales::get_sales(int index){
    if((index < 0) || (index > 3)){
        this->error("Index outside range. Accepted range is between 0 and 3.");
    }
    return this->quarterlySales[index];
}

/**
 * @brief Returns the total annual sales
 * 
 * @return int 
 */
int DivSales::get_total_sales(){
    return totalAnnualSales;
}

/**
 * @brief Prints the received error string
 * 
 * @param str - error string
 */
void DivSales::error(string str)
{
    cout << "Invalid input! " << str << " Exiting..." << endl;
    exit(0);
}