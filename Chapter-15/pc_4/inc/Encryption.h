#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>
using namespace std;

class Encryption
{
protected:
    ifstream inFile;
    ofstream outFile;
    int key;

public:
    Encryption();
    Encryption(char *inFileName, char *outFileName, int _key);
    ~Encryption();
    // Pure virtual function
    virtual char transform(char ch) = 0;
    // Encrypt
    void encrypt();
    void set_key(int _key);
};

// The subclass simply overides the virtual
// transformation function.
class SimpleEncryption : public Encryption
{
public:
    SimpleEncryption(char *inFileName, char *outFileName, int _key);
    virtual char transform(char ch);
};

#endif /* ENCRYPTION_H */