#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// Function prototype
int count_vowels(const char *strPtr);
int count_consonants(const char *strPtr);

/**
 * @brief Accepts a C-string and counts the number of vowels in the string regardless of its case and returns the count.
 *
 * @param strPtr - C-stirng
 * @return int - number of vowels
 */
int count_vowels(const char *strPtr)
{
    int vowels = 0;
    for (size_t i = 0; i < strlen(strPtr); i++)
    {
        char c = *(strPtr + i);
        if (isalpha(c) && ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U')))
        {
            vowels++;
        }
    }
    return vowels;
}

/**
 * @brief Accepts a C-string and counts the number of consonants in the string regardless of its case and returns the count.
 *
 * @param strPtr - C-stirng
 * @return int - number of consonants
 */
int count_consonants(const char *strPtr)
{
    int vowels = count_vowels(strPtr);
    int letters = 0;
    for (size_t i = 0; i < strlen(strPtr); i++)
    {
        if (isalpha(*(strPtr + i)))
        {
            letters++;
        }
    }
    return letters - vowels;
}

int main(void)
{
    char userInput = '\0';
    const int ARRAY_LENGTH = 50;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string: ";
    cin.getline(strArr, ARRAY_LENGTH);
    cout << setw(3) << "To"
         << " count the number of vowels in the string enter 'A' " << endl;
    cout << setw(3) << "To"
         << " count the number of consonants in the string enter 'B' " << endl;
    cout << setw(3) << "To"
         << " count the number of vowels and consonants in the string enter 'C' " << endl;
    cout << setw(3) << "To"
         << " enter another string enter 'D' " << endl;
    cout << setw(3) << "To"
         << " enter exit the program enter 'E' " << endl;
    cout << "Enter your choice: ";
    cin >> userInput;
    while (userInput != 'E')
    {
        if (userInput == 'A')
        {
            cout << "Number of vowels in \"" << strArr << "\" is: " << count_vowels(strArr) << endl;
        }
        else if (userInput == 'B')
        {
            cout << "Number of consonants in \"" << strArr << "\" is: " << count_consonants(strArr) << endl;
        }
        else if (userInput == 'C')
        {
            cout << "Number of vowels and consonants in \"" << strArr << "\" is: " << count_vowels(strArr) + count_consonants(strArr) << endl;
        }
        else if (userInput == 'D')
        {
            cout << "Enter another string: ";
            cin.ignore();   // Clears the newline character left in the buffer
            cin.getline(strArr, ARRAY_LENGTH);
        }
        cout << "\n"
             << setw(3) << "To"
             << " count the number of vowels in the string enter 'A' " << endl;
        cout << setw(3) << "To"
             << " count the number of consonants in the string enter 'B' " << endl;
        cout << setw(3) << "To"
             << " count the number of vowels and consonants in the string enter 'C' " << endl;
        cout << setw(3) << "To"
             << " enter another string enter 'D' " << endl;
        cout << setw(3) << "To"
             << " enter exit the program enter 'E' " << endl;
        cout << "Enter your choice: ";
        cin >> userInput;
    }

    return 0;
}