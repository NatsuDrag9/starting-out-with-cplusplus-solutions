#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
char *upper(char str[]);
char *lower(char *str);
char *reverse_case(char str[]);

/**
 * @brief Accepts a C-string as an argument, converts each lower case character in it to upper case and returns the new string
 *
 * @param str - C - string
 * @return char* - pointer to the new string with upper case characters
 */
char *upper(char str[])
{
    char *tempStr = new char[strlen(str) + 1];
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            tempStr[i] = toupper(*(str + i));
        }
        else
        {
            tempStr[i] = *(str + i);
        }
    }
    return tempStr;
}

/**
 * @brief Accepts a C-string as an argument, converts each upper case character in it to lower case and returns the new string
 *
 * @param str - C - string
 * @return char* - pointer to the new string with lower case characters
 */
char *lower(char *str)
{
    char *tempStr = new char[strlen(str) + 1];
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (isupper(*(str + i)))
        {
            tempStr[i] = tolower(*(str + i));
        }
        else
        {
            tempStr[i] = *(str + i);
        }
    }
    return tempStr;
}

/**
 * @brief Accepts a C-string as an argument, reverses the case of each character in it and returns the new string
 *
 * @param str - C - string
 * @return char* - pointer to the new string with reversed case
 */
char *reverse_case(char str[])
{
    char *tempStr = new char[strlen(str) + 1];
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            tempStr[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            tempStr[i] = tolower(str[i]);
        }
    }
    return tempStr;
}

int main(void)
{
    int ARRAY_LENGTH = 30;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string: ";
    cin.getline(strArr, ARRAY_LENGTH);
    char *reverseStr = reverse_case(strArr);
    char *lowerStr = lower(strArr);
    char *upperStr = upper(strArr);

    cout << "Reversed case: " << reverseStr << endl;
    cout << "Lower case: " << lowerStr << endl;
    cout << "Upper case: " << upperStr << endl;

    delete[] reverseStr;
    delete[] lowerStr;
    delete[] upperStr;
    return 0;
}