#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void count_letters(const char *strPtr);

/**
 * @brief Counts the number of letters in each word of the received C-string and displays it.
 * Assuming that any two words are separated by a single space
 *
 * @param strPtr - C-stirng
 */
void count_letters(const char *strPtr)
{
    int letters = 0, words = 1;
    for (size_t i = 0; i < strlen(strPtr); i++)
    {
        letters++;
        if (*(strPtr + i) == ' ')
        {
            // Subtracting one from letters to remove the space character
            cout << "Length of word " << words << ": " << letters - 1 << endl;
            words++;
            letters = 0;
        }
    }
    cout << "Length of word " << words << ": " << letters << endl;
}

int main(void)
{
    const int ARRAY_LENGTH = 50;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string (max length is 50 characters): ";
    cin.getline(strArr, ARRAY_LENGTH);
    cout << "Number of letters in each word " << endl;
    count_letters(strArr);
    return 0;
}