#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int score;

    Student(string str = "ABC", int s = 90)
    {
        name = str;
        score = s;
    }
};

// Function prototypes
void sort_array(Student *arr, int size);
float calculate_avg(Student *arr, int size);
void display_array(Student *arr, int size);

/**
 * @brief - Using selection sort to sort the array in ascending order based on scores
 *
 * @param arr - pointer to address of first element of the Student array
 * @param size - length of the array
 */
void sort_array(Student *arr, int size)
{
    int tempScore = 0, minIndex = 0;
    string tempName = "";
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        tempScore = (arr + i)->score;
        tempName = (arr + i)->name;
        for (int j = i + 1; j < size; j++)
        {
            if ((arr + j)->score < (arr + i)->score)
            {
                (arr + i)->score = (arr + j)->score;
                (arr + i)->name = (arr + j)->name;
                minIndex = j;
            }
        }
        (arr + minIndex)->score = tempScore;
        (arr + minIndex)->name = tempName;
    }
}

/**
 * @brief - Calcualtes and returns the average of the received interger array containg test scores
 *
 * @param arr - pointer to address of first element of the Student array
 * @param size - size of the array
 * @return float - average of the test scores
 */
float calculate_avg(Student *arr, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (arr + i)->score;
    }
    float avg = sum / (static_cast<float>(size));
    return avg;
}

/**
 * @brief - Displays the contents of the received array
 *
 * @param arr - pointer to address of first element of the Student array
 * @param size - length of the array
 */
void display_array(Student *arr, int size)
{
    cout << "{\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Name: "<< (arr+i)->name << setw(10) << "Score: " << (arr+i)->score << ", " << endl;
    }
    cout << "}" << endl;
}

int main(void)
{
    int arrayLength = 0;
    cout << "Enter number of students: ";
    cin >> arrayLength;
    if (arrayLength < 0)
    {
        cout << "Invalid input! Number of students must be a positive number. Exiting..." << endl;
        return 0;
    }

    Student *students = new Student[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        int userInput = 0;
        string name = "";
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> name;
        cout << "Enter student " << i + 1 << "'s test score: ";
        cin >> userInput;
        if ((userInput < 0) || (userInput > 100))
        {
            cout << "Invalid input! Test score must lie between 0 and 100. Exiting..." << endl;
            return 0;
        }
        students[i].name = name;
        students[i].score = userInput;
    }

    sort_array(students, arrayLength);
    cout << "\nDisplaying sorted array based on marks" << endl;
    display_array(students, arrayLength);
    cout << "Average of " << arrayLength << " test scores: " << fixed << setprecision(2) << calculate_avg(students, arrayLength) << endl;

    delete[] students;
    students = NULL;

    return 0;
}