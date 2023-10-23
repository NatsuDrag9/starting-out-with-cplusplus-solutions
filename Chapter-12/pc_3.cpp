#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
int count_words(const char *strPtr);

/**
 * @brief Counts the number of words in the received C-string and returns it
 * Assuming that any two words are separated by a single space
 *
 * @param strPtr - C-stirng
 * @return int - number of words
 */
int count_words(const char *strPtr)
{
    int words = 1;
    for (size_t i = 0; i < strlen(strPtr); i++)
    {
        if (*(strPtr + i) == ' ')
        {
            words++;
        }
    }
    return words;
}

int main(void)
{
    const int ARRAY_LENGTH = 50;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string (max length is 50 characters): ";
    cin.getline(strArr, ARRAY_LENGTH);
    cout << "Number of words in the string: " << count_words(strArr) << endl;
    return 0;
}