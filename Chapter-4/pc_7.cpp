#include <iostream>
using namespace std;

int main(void)
{
    const int SECONDS_IN_A_DAY = 86400;
    const int SECONDS_IN_AN_HOUR = 3600;
    const int SECONDS_IN_A_MINUTE = 60;
    int nSec;

    cout << "Enter the number of seconds: ";
    cin >> nSec;

    if(nSec >= SECONDS_IN_A_DAY){
        cout << nSec << " seconds are " << nSec / SECONDS_IN_A_DAY << " days and " << nSec % SECONDS_IN_A_DAY << " seconds." << endl;
    }
    else if((nSec >= SECONDS_IN_AN_HOUR) && (nSec < SECONDS_IN_A_DAY)){
        cout << nSec << " seconds are " << nSec / SECONDS_IN_AN_HOUR << " hours and " << nSec % SECONDS_IN_AN_HOUR << " seconds." << endl;
    }
    else if((nSec >= SECONDS_IN_A_MINUTE) && (nSec < SECONDS_IN_AN_HOUR)){
        cout << nSec << " seconds are " << nSec / SECONDS_IN_A_MINUTE << " minutes and " << nSec % SECONDS_IN_A_MINUTE << " seconds." << endl;
    }
    else {
        cout << nSec << " seconds." << endl;
    }

    return 0;
}