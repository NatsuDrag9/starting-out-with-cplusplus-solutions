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

    cout << "Enter name of file to store uppercase output: ";
    cin >> outFileName;
    UpperCase upper(inFileName, outFileName);
    upper.encrypt();

    cout << "Enter name of unchanged output file: ";
    cin >> outFileName;
    KeepOriginal copy(inFileName, outFileName);
    copy.encrypt();
    return 0;
}