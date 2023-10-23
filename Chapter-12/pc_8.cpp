#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 30;
    char digitArr[ARRAY_LENGTH];
    int sum = 0;
    cout << "Enter a series of single-digit numbers (max length 30 characters): ";
    cin.getline(digitArr, ARRAY_LENGTH);

    for(size_t i = 0; i < strlen(digitArr); i++){
        if(isdigit(digitArr[i])){
            sum += (digitArr[i] - '0');
        }
        else{
            cout << "Invalid input! Not a digit. Exiting..." << endl;
            return 0;
        }
    }
    cout << "Sum of digits: " << sum << endl;

    return 0;
}