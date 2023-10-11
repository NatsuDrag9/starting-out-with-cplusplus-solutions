#include <iostream>
using namespace std;

int main(void)
{
    int nBooksPurchased, points;

    cout << "Enter number of books purchased: ";
    cin >> nBooksPurchased;

    if(nBooksPurchased < 0){
        cout << "Invalid input. Number of books purchased has to be positive" << endl;
    }

    if(nBooksPurchased == 0){
        points = 0;
    }
    else if(nBooksPurchased == 1){
        points = 5;
    }
    else if(nBooksPurchased == 2){
        points = 15;
    }
    else if(nBooksPurchased == 3){
        points = 30;
    }
    else if(nBooksPurchased >= 4){
        points = 60;
    }

    cout << "Points awarded: " << points << endl;

    return 0;
}