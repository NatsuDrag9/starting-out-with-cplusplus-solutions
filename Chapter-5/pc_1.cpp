#include <iostream>
using namespace std;

int main(void)
{
    char x = 32;
    cout << "Displaying characters from ASCII code 32 through 127" << endl;
    cout << x;
    x++;

    for(int i = 33; i <= 127; i++){
        if(i % 16 == 0){
            cout << endl;
        }
        cout << " " << x;
        x++;
    }
    cout << endl;

    return 0;
}