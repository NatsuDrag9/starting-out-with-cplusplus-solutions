#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 20;
    string names[ARRAY_LENGTH] =
        {"Collins, Bill", "Smith, Bart", "Sanchez, Manny", "Rubin, Sarah",
         "Allison, Jeff", "Moreno, Juan", "Moretti, Bella", "Wu, Hong",
         "Smith, Cathy", "Conroy, Pat", "Michalski, Joe", "Taylor, Tyrone",
         "Wolfe, Bill", "Patel, Renee", "Kelly, Sean", "Griffin, Jim",
         "Johnson, Jill", "Whitman, Jean", "Harrison, Rose", "Holland, Beth"};
    
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

    return 0;
}