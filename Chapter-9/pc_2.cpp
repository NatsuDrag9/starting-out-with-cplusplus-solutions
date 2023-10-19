#include <iostream>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 18;
    int winningNum[ARRAY_LENGTH] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int userInput = 0, isNumInArray = 0;

    cout << "Enter ticket number: ";
    cin >> userInput;

    for(int i = 0; i < ARRAY_LENGTH; i++){
        if(winningNum[i] == userInput){
            isNumInArray = 1;
            cout << "You won the lottery!" << endl;
            break;
        }
        isNumInArray = 0;
    }

    if(!isNumInArray){
        cout << "You lost..." << endl;
    }

    return 0;
}