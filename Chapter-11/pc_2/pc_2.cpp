#include <iostream>
#include <string>
#include "./inc/DayOfYear.h"
using namespace std;

int main(void){
    int userInput;

    cout << "Enter a date: ";
    cin >> userInput;
    DayOfYear dayObj(userInput);

    dayObj.print();

    return 0;
}