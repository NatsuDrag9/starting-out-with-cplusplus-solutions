#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    const int upperLimit = 50;
    const int lowerLimit = 10;
    int num1, num2, userResult, programResult;

    unsigned seed = time(0);
    srand(seed);

    num1 = rand() % upperLimit + lowerLimit;
    num2 = rand() % upperLimit + lowerLimit;
    programResult = num1 + num2;

    cout << num1 << " + " << num2 << endl;
    cout << "Enter answer: ";
    cin >> userResult;
    if(userResult == programResult){
        cout << "Congratulations, it is the correct answer!" << endl;
    }
    else {
        cout << "Incorrect answer. The correct answer is: " << programResult << endl;
    }

    return 0;
}