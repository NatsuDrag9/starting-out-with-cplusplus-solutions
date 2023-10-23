#include <iostream>
#include <cstring>
#include <cstdbool>
using namespace std;

// Function prototype
char* check_password(char *str);

/**
 * @brief Checks whether the password satisfies the following criteria:
 * The password should be at least six characters long.
 * The password should contain at least one uppercase and at least one lowercase letter.
 * The password should have at least one digit.
 *
 * and returns the issue if it doesn't
 * @param str - password string
 * @return char* - failed criteria string
 */
char* check_password(char *str)
{
    const int LENGTH = 6;
    char *err1 = "The password should be at least six characters long";
    char *err2 = "The password should contain at least one uppercase and at least one lowercase letter";
    char *err3 = "The password should have at least one digit";
    char * okStr = "Password accepted";

    if (strlen(str) >= LENGTH)
    {
        bool lowerCase = false;
        bool upperCase = false;
        bool digit = false;
        for (size_t i = 0; i < strlen(str); i++)
        {
            if (islower(str[i]))
            {
                lowerCase = true;
                break;
            }
            if(isdigit(str[i])){
                digit = true;
            }
        }
        for (size_t i = 0; i < strlen(str); i++)
        {
            if (isupper(str[i]))
            {
                upperCase = true;
                break;
            }
        }
        if(!(lowerCase && upperCase)){
            return err2;
        }
        if(!digit){
            return err3;
        }
    }
    else
    {
        return err1;
    }
    return okStr;
}

int main(void)
{
    const int ARRAY_LENGTH = 30;
    char strArr[ARRAY_LENGTH];
    cout << "Enter a string: ";
    cin.getline(strArr, ARRAY_LENGTH);

    cout << check_password(strArr) << endl;

    return 0;
}