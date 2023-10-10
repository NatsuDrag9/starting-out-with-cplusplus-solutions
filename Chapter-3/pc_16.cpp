#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    const int maxRange = 9;
    int num1, num2, userResult, programResult;

    unsigned seed = time(0);
    srand(seed);

    num1 = 1 + rand() % maxRange;
    num2 = 1 + rand() % maxRange;
    programResult = num1 + num2;

    cout << num1 << " + " << num2 << endl;
    cout << "Enter answer: ";
    cin >> userResult;
    cout << "Correct answer: " << programResult << endl;

    return 0;
}