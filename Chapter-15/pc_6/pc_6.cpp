#include <iostream>
#include "./inc/AbstractFilter.h"
using namespace std;

int main()
{
    char inFileName[80], outFileName[80];
    cout << "Enter name of file to add a blank line: ";
    cin >> inFileName;
    cout << "Enter name of output file ";
    cin >> outFileName;
    
    DoubleSpace newLine(inFileName, outFileName);
    newLine.file_filter();
    return 0;
}