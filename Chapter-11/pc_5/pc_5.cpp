#include <iostream>
#include "./inc/PString.h"
using namespace std;

int main(void){
    string userInput;
    cout << "This program tests for a palindrome" << endl;
    cout << "Enter a string: ";
    getline(cin, userInput);
    PString psObj(userInput);
    cout << "Is \"" << userInput << "\" a palindrome: " << psObj.is_palindrome() << endl;
    return 0;
}