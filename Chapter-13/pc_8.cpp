#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

/*
Tested the program with .txt files in the current directory
*/
int main(void)
{
    const int ARRAY_LENGTH = 30;
    char inputFileName[ARRAY_LENGTH];
    char outputFileName[ARRAY_LENGTH];
    fstream inputFile, outputFile;

    // Asking the user for the filename
    cout << "Enter input file name: ";
    cin.getline(inputFileName, ARRAY_LENGTH);
    cout << "Enter output file name: ";
    cin.getline(outputFileName, ARRAY_LENGTH);

    // Opening the files
    inputFile.open(inputFileName, ios::in);
    if (inputFile.fail())
    {
        cout << "Error opening " << inputFileName << ". Exiting..." << endl;
        exit(1);
    }

    outputFile.open(outputFileName, ios::out);
    if (outputFile.fail())
    {
        cout << "Error opening " << outputFileName << ". Exiting..." << endl;
        exit(1);
    }

    // Decryption algorithm
    char ch = inputFile.get();
    while (!inputFile.eof())
    {
        ch = ch - 1;
        outputFile.write(&ch, sizeof(ch));
        ch = inputFile.get();
    }

    inputFile.close();
    outputFile.close();
    return 0;
}
