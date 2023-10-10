#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream outputFile;
    float num1, num2, num3, num4, num5;

    cout << "Enter floating-point number 1: ";
    cin >> num1;
    cout << "Enter floating-point number 2: ";
    cin >> num2;
    cout << "Enter floating-point number 3: ";
    cin >> num3;
    cout << "Enter floating-point number 4: ";
    cin >> num4;
    cout << "Enter floating-point number 5: ";
    cin >> num5;

    outputFile.open("pc_23.txt");
    outputFile << "Floating-point number 1: " << num1 << "\n";
    outputFile << "Floating-point number 2: " << num2 << "\n";
    outputFile << "Floating-point number 3: " << num3 << "\n";
    outputFile << "Floating-point number 4: " << num4 << "\n";
    outputFile << "Floating-point number 5: " << num5 << "\n";

    outputFile.close();
    cout << "Writing complete!" << endl;
    
    return 0;
}