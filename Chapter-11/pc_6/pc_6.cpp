#include <iostream>
#include "./inc/EString.h"
using namespace std;

int main(void){
    EncryptableString esObj;
    cout << "This program encrypts a string" << endl;
    cout << "Enter a string: ";
    getline(cin, esObj);
    esObj.encrypt();
    cout << "Encrypted string: " << esObj << endl;
    
    return 0;
}