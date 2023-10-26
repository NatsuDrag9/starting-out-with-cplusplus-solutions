#include <iostream>
using namespace std;

// Function prototype
int sign(int n);

/**
 * @brief Recursive function that prints the string "no parking" whenever the received parameter is a positive number.
 * Base case: n <= 1
 * Recursive call parameter: n - 1
 * 
 * @param n - integer used to print the string
 * @return int - n-1
 */
int sign(int n){
    
    if(n <= 0){
        return 0;
    }
    cout << "No parking" << endl;
    return sign(n-1);
}

int main(void)
{
    int userInput = 0;
    cout << "Enter number to print sign: ";
    cin >> userInput;
    if (userInput < 0)
    {
        cout << "Invalid input! Input must be a positive number. Exiting..." << endl;
        return 0;
    }
    sign(userInput);

    return 0;
}