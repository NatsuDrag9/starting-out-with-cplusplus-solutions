#include <iostream>
using namespace std;

int main(void)
{
    int num, sum = 0;

    cout << "Enter any positive integer: ";
    cin >> num;

    // Input validation
    if(num < 1){
        cout << "Invalid input! Program does not accept integer values less than 1. Exiting...";
        return 0;
    }

    for(int i = 1; i <= num; i++){
        sum += i;
    }

    cout << "Sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}