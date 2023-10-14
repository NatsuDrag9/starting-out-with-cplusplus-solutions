#include <iostream>
#include <cstdlib>
#include <cstdbool>
using namespace std;

bool is_prime(int num);

/**
 * @brief Determines whether the number received is prime or not.
 * 
 * @param num 
 * @return true - if the number is prime
 * @return false - if the number is not prime
 */
bool is_prime(int num){

    // Input validation
    if(num <= 1){
        cout << "Invalid input! Number should be greater than 1. Exiting..." << endl;
        exit(0);
    }

    // Loop to check whether the number is prime or not
    for(int i = 2; i <= num/2; i++){
        if(num%i == 0){
            return false;
        }
    }
    // Else return true
    return true;
}

int main(void)
{
    // Test the invalid input condition
    // cout << "Number provided: 1" << is_prime(1) << endl;


    cout << "Number provided: 10. Is it prime: ";
    is_prime(10) ? cout << "true\n" : cout << "false" << endl;
    cout << "Number provided: 11. Is it prime: ";
    is_prime(11) ? cout << "true\n" : cout << "false" << endl;
    cout << "Number provided: 7. Is it prime: ";
    is_prime(7) ? cout << "true\n" : cout << "false" << endl;
    cout << "Number provided: 100. Is it prime: ";
    is_prime(100) ? cout << "true\n" : cout << "false" << endl;
    return 0;
}