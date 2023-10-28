#include <iostream>
#include <string>
#include "./inc/BCheckString.h"
using namespace std;

int main(void)
{
    string userInp;
    int pos = 0;
    cout << "Enter a string: ";
    cin >> userInp;
    cout << "Enter position of the string: ";
    cin >> pos;

    try{
        BCheckString bcsObj(userInp);
        cout << "Character at " << pos << ": " << bcsObj[pos] << endl;
    }
    catch (BCheckString::BoundsException ex){
        cout << "The value " << ex.value << " is out of range\n";
    }
    cout << "End of program." << endl;

    return 0;
}