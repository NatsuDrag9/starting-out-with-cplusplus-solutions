#ifndef ESTRING_H
#define ESTRING_H

#include <string>
using namespace std;

class EncryptableString : public string{
    public:
        EncryptableString();
        void encrypt();
};

#endif /* ESTRING_H */