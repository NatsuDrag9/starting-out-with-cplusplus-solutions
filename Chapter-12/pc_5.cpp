#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void sentence_capitalizer(const char *strPtr);

/**
 * @brief Accepts a C-string and capitalizes the first character of each sentence in the string.
 * Assuming that the sentence ends with a fullstop (.), exclamation (!) or question mark (?)
 *
 * @param strPtr - C-stirng
 */
void sentence_capitalizer(const char *strPtr)
{
    char* tempArr = new char[strlen(strPtr)+1];
    strcpy(tempArr, strPtr);
    for (size_t i = 0; tempArr[i] != '\0'; i++)
    {
        if(i == 0){
            tempArr[i] = toupper(tempArr[i]); 
        }
        else if ((tempArr[i] == '.') || (tempArr[i] == '?') || (tempArr[i] == '!')){
            // Ignoring the space immediately after the punctuation
            tempArr[i+2] = toupper(tempArr[i+2]);
        }
    }

    cout << "Capitalized sentence: " << tempArr << endl;
    delete [] tempArr;
}

int main(void)
{
    const int ARRAY_LENGTH = 50;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string (max length is 50 characters): ";
    cin.getline(strArr, ARRAY_LENGTH);
    sentence_capitalizer(strArr);
    return 0;
}