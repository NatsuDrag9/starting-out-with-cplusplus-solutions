#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 20;
    string names[ARRAY_LENGTH] = {""};
    ifstream inputFile;
    inputFile.open("pc_13.txt");
    if(inputFile.fail()){
        cout << "Error opening file. Exiting..." << endl;
        return 0;
    }
    else{
        int i = 0;
        while(!inputFile.eof()){
            if(i >= ARRAY_LENGTH){
                break;
            }
            getline(inputFile, names[i]);
            i++;
        }
    }
    
    // Selection sort
    int i, minIndex;
    string minName;
    for(i = 0; i < ARRAY_LENGTH - 1; i++){
        minIndex = i;
        minName = names[i];
        for(int j = i+1; j < ARRAY_LENGTH; j++){
            if(names[j] < minName){
                minName = names[j];
                minIndex = j;
            }
        }
        names[minIndex] = names[i];
        names[i] = minName;
    }

    // Print the sorted array
    for(int i = 0; i < ARRAY_LENGTH; i++){
        cout << names[i] << endl;
    }

    inputFile.close();

    return 0;
}