#ifndef BCHECK_STRING_H
#define BCHECK_STRING_H

#include <string>
using namespace std;

class BCheckString : public string
{
    private:
        string str;
public:
    class BoundsException
    {
    public:
        int value;
        BoundsException(int val)
        {
            value = val;
        }
    };
    BCheckString();
    BCheckString(string s);
    void set_string(string s);
    char operator[](int k);
};

#endif