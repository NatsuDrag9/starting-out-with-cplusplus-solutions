#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <fstream>
using namespace std;

class AbstractFilter
{
protected:
    ifstream inFile;
    ofstream outFile;

public:
    AbstractFilter();
    AbstractFilter(char *inFileName, char *outFileName);
    ~AbstractFilter();
    // Pure virtual function
    virtual char transform(char ch) = 0;
    // File Filter
    void file_filter();
};

// The subclass simply overides the virtual
// transformation function.
class DoubleSpace : public AbstractFilter
{
public:
    DoubleSpace(char *inFileName, char *outFileName);
    virtual char transform(char ch);
};

#endif /* ENCRYPTION_H */