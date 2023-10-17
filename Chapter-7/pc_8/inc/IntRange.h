#ifndef INT_RANGE_H
#define INT_RANGE_H

class IntRange
{
private:
    int userInput; // User input
    int lower;     // Lower value of the range
    int upper;     // Upper value of the range

public:
    IntRange();
    IntRange(int l, int u);
    int getData();
};

#endif /* INT_RANGE_H */