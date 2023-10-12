#include <iostream>
using namespace std;

int main(void)
{
    float length1, width1, length2, width2;

    cout << "Dimensions can be of floating-point type." << endl;
    cout << "Enter length of rectangle 1: ";
    cin >> length1;
    cout << "Enter width of rectangle 1: ";
    cin >> width1;
    cout << "Enter length of rectangle 2: ";
    cin >> length2;
    cout << "Enter width of rectangle 2: ";
    cin >> width2;

    float rectArea1 = length1*width1;
    float rectArea2 = length2*width2;

    if(rectArea1 > rectArea2){
        cout << "Rectangle 1 has greater area" << endl;
    }
    else if (rectArea1 < rectArea2){
        cout << "Rectangle 2 has greater area" << endl;
    }
    else if (rectArea1 == rectArea2){
        cout << "Rectangle 1 and rectangle 2 have equal area" << endl;
    }

    return 0;
}