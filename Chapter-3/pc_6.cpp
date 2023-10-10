#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float subject1, subject2, subject3, subject4, subject5, avgScore;
    int nSubjects = 5;

    cout << "Enter test score of subject 1: ";
    cin >> subject1;
    cout << "Enter test score of subject 2: ";
    cin >> subject2;
    cout << "Enter test score of subject 3: ";
    cin >> subject3;
    cout << "Enter test score of subject 4: ";
    cin >> subject4;
    cout << "Enter test score of subject 5: ";
    cin >> subject5;

    avgScore = (subject1 + subject2 + subject3 + subject4 + subject5) / static_cast<float> (nSubjects);

    cout << fixed << setprecision(1) << "Average test score of 5 subjects: " << avgScore << endl;


    return 0;
}