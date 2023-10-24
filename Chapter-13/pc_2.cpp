#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main(void){
    string fileName;
    cout << "Enter file name: ";
    cin >> fileName;

    ifstream inputFile;
    inputFile.open(fileName.c_str());
    if(!inputFile){
        cout << "Error opening " << fileName << ". Exiting..." << endl;
        exit(1);
    }

    const int linesPerPage = 24;
    int linesDisplayed = 0;
    string line;

    while(getline(inputFile, line)){
        cout << line << endl;
        linesDisplayed++;

        if(linesDisplayed >= linesPerPage){
            cout << "Press enter key to continue...";
            cin.get();
            cin.ignore();
            linesDisplayed = 0;
        }
    }

    inputFile.close();
    cout << "End of file" << endl;
    
    return 0;
}