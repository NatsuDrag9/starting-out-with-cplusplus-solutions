#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> names;
    ifstream inputFile;
    inputFile.open("pc_13.txt");
    if(inputFile.fail()){
        cout << "Error opening file. Exiting..." << endl;
        return 0;
    }
    else{
        while(!inputFile.eof()){
            string str = "";
            getline(inputFile, str);
            names.push_back(str);
        }
    }
    
    // Selection sort
    size_t i, minIndex;
    string minName;
    for(i = 0; i < names.size() - 1; i++){
        minIndex = i;
        minName = names.at(i);
        for(size_t j = i+1; j < names.size(); j++){
            if(names[j] < minName){
                minName = names.at(j);
                minIndex = j;
            }
        }
        names.at(minIndex) = names.at(i);
        names.at(i) = minName;
    }

    // Print the sorted vector
    for(size_t i = 0; i < names.size(); i++){
        cout << names.at(i) << endl;
    }

    names.clear();
    inputFile.close();

    return 0;
}