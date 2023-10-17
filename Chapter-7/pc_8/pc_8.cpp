#include <iostream>
#include "inc/IntRange.h"
using namespace std;

int main(void)
{
    IntRange range(-10, 20);
    int result = range.getData();
    cout << "You entered: " << result << endl;    

    return 0;
}