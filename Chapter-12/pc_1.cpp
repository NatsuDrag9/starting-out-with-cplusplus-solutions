#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
size_t calculate_length (const char* strPtr);

/**
 * @brief Calculates and returns the length of the received C-string
 * 
 * @param strPtr - pointer to the string literal
 * @return size_t - length of the string
 */
size_t calculate_length (const char* strPtr){
    // return strlen(strPtr);
    size_t count = 0;
    while(*strPtr != '\0'){
        count++;
        strPtr++;
    }
    return count;
}

int main(void){
    const int ARRAY_LENGTH = 30;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string: ";
    cin.getline(strArr, ARRAY_LENGTH);
    cout << "Length: " << calculate_length(strArr) << endl;
    return 0;
}