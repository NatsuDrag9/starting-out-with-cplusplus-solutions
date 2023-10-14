#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

double get_sales(string divName);
void find_highest(double sales1, double sales2, double sales3, double sales4);

/**
 * @brief Asks the user for a division's quarterly sales figure, validates the input and returns it. This function is called once for each division
 * 
 * @param divName 
 * @return double - returns the quarterly sales figure of the division
 */
double get_sales(string divName){
    double divSales;
    cout << "Enter quarterly sales figure for the " << divName << " division (in ₹): ";
    cin >> divSales;
    if(divSales < 0.0){
        cout << "Invalid input! Quarterly sales must be a positive number. Exiting..." << endl;
        exit(0);
    }
    return divSales;
}

/**
 * @brief Determines the largest sales and prints the name of the corresponding division along with its sales figure
 * 
 * @param sales1 
 * @param sales2 
 * @param sales3 
 * @param sales4 
 */
void find_highest(double sales1, double sales2, double sales3, double sales4){
    if((sales1 >= sales2) && (sales1 >= sales3) && (sales1 >= sales4)){
        cout << "Northeast division has the largest quarterly sales (in ₹): " << sales1 << endl;
    }
    else if((sales2 >= sales1) && (sales2 >= sales3) && (sales2 >= sales4)){
        cout << "Southeast division has the largest quarterly sales (in ₹): " << sales2 << endl;
    }
    else if((sales3 >= sales1) && (sales3 >= sales2) && (sales3 >= sales4)){
        cout << "Northwest division has the largest quarterly sales (in ₹): " << sales3 << endl;
    }
    else if((sales4 >= sales1) && (sales4 >= sales2) && (sales4 >= sales3)){
        cout << "Southwest division has the largest quarterly sales (in ₹): " << sales4 << endl;
    }
}

int main(void)
{
    double sales1 = get_sales("Northeast");
    double sales2 = get_sales("Southeast");
    double sales3 = get_sales("Northwest");
    double sales4 = get_sales("Southwest");
    find_highest(sales1, sales2, sales3, sales4);
    return 0;
}