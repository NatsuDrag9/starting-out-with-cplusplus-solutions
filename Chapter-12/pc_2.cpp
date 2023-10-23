#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void reverse_string (const char* strPtr);

/**
 * @brief Reverses the received C-string and displays the contents backwards
 * 
 * @param strPtr - C-stirng to be reversed 
 */
void reverse_string (const char* strPtr){
    
    for(int i = strlen(strPtr)-1; i >= 0; i--){
        cout << *(strPtr+i);
    }
}

int main(void){
    const int ARRAY_LENGTH = 30;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string: ";
    cin.getline(strArr, ARRAY_LENGTH);
    cout << "Reversed string: ";
    reverse_string(strArr);
    cout << endl;
    return 0;
}