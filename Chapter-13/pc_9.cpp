#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/*
Tested the program with .txt files in the current directory
*/
int main(void)
{
    const int ARRAY_LENGTH = 30;
    char fileName[ARRAY_LENGTH];
    ifstream inputFile;

    // Asking the user for the filename
    cout << "Enter file name: ";
    cin.getline(fileName, ARRAY_LENGTH);

    // Opening the file
    inputFile.open(fileName);
    if (inputFile.fail())
    {
        cout << "Error opening " << fileName << ". Exiting..." << endl;
        exit(1);
    }

    // Count each letter of English alphabet including case
    const int LC_ARRAY_LENGTH = 128;
    int letterCountArr[LC_ARRAY_LENGTH] = {0};
    char ch = inputFile.get();
    while(!inputFile.eof()){
        letterCountArr[int(ch)]++;
        ch = inputFile.get();
    }

    // Print the count of each letter
    for(int i = 0; i < LC_ARRAY_LENGTH; i++){
        if(isalpha(char(i))){
            cout << "Count of '" << char(i) << "': " << letterCountArr[i] << endl;
        }
        if(i == 90){
            cout << '\n';
        }
    }

    inputFile.close();
    return 0;
}
