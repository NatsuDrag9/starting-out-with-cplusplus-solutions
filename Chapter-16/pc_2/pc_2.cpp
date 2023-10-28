#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int square_root(int num);

/**
 * @brief Calculates the square root of the received paramter
 *
 * @param num - number whose square root needs to be calculated
 * @return int - square root of the number
 */
int square_root(int num)
{
    int sqrtNum = sqrt(num);
    return num == sqrtNum * sqrtNum ? sqrtNum : throw "ERROR: Not a perfect square";
}

int main(void)
{
    int userInput = 0;
    cout << "Enter number: ";
    cin >> userInput;
    if (userInput < 0)
    {
        cout << "Invalid input! Square root of negative number is not defined. Exiting..." << endl;
        return 1;
    }

    try
    {
        cout << "Square root of " << userInput << " is: " << square_root(userInput) << endl;
    }
    catch (const char *exceptionString)
    {
        cout << exceptionString << endl;
    }

    return 0;
}