#include <iostream>
#include <string>
#include "./inc/Numbers.h"
using namespace std;

int main(void){
    int userInput;

    cout << "Enter a number between 0 and 9999: ";
    cin >> userInput;
    Numbers numObj(userInput);

    numObj.print();

    return 0;
}