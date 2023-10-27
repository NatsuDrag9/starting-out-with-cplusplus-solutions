#include <iostream>
#include "./inc/Encryption.h"
using namespace std;

int main()
{
    int key = 0;
    char inFileName[80], outFileName[80];
    cout << "Enter name of file to encrypt: ";
    cin >> inFileName;
    cout << "Enter name of file to receive "
         << "the encrypted text: ";
    cin >> outFileName;
    cout << "Enter encryption key: ";
    cin >> key;
    SimpleEncryption obfuscate(inFileName, outFileName, key);
    obfuscate.encrypt();
    return 0;
}