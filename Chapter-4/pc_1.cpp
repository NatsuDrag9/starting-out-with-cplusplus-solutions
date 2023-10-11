#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    num1 > num2 ? cout << num1 << " is greater than " << num2 << endl : cout << num2 << " is greater than " << num1 << endl;

    return 0;
}