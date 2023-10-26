#include <iostream>
using namespace std;

// Function prototype
int calculate_product(int x, int y);

/**
 * @brief Accepts multiplicand and multiplier and computes the product recursively using addition
 * Base case: multiplier == 0 i.e. y == 0, return 0
 * 
 * @param x - multiplicand
 * @param y - multiplier
 * @return int - product
 */
int calculate_product(int x, int y)
{
    if(y == 0){
        return 0;
    }
    return x + calculate_product(x, y-1);
}

int main(void)
{
    int x = 0, y = 0;
    cout << "Enter multiplicand: ";
    cin >> x;
    cout << "Enter multiplier: ";
    cin >> y;
    
    cout << x << " x " << y << ": " << calculate_product(x, y) << endl;

    return 0;
}