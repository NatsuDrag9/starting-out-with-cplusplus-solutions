#ifndef PSTRING_H
#define PSTRING_H

#include <cstdbool>
#include <string>
using namespace std;

class PString : public string {
    public:
        PString();
        PString(const string str);
        bool is_palindrome();
};

#endif /* PSTRING_H */