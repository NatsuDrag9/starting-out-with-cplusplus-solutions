#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

void get_score(int &score);
int find_lowest(int score1, int score2, int score3, int score4, int score5);
void calc_average(int score1, int score2, int score3, int score4, int score5);

/**
 * @brief Gets the test score from the user and validates it. This function is called once for each course.
 *
 * @param score
 */
void get_score(int &score)
{
    cout << "Enter test score: ";
    cin >> score;
    if ((score < 0) || (score > 100))
    {
        cout << "Invalid input! Test score must be between 0 and 100" << endl;
        exit(0);
    }
}

/**
 * @brief Finds the lowest of the five scores passed to it
 *
 * @param score1
 * @param score2
 * @param score3
 * @param score4
 * @param score5
 * @return int - returns the lowest score
 */
int find_lowest(int score1, int score2, int score3, int score4, int score5)
{
    if ((score1 <= score2) && (score1 <= score3) && (score1 <= score4) && (score1 <= score5))
    {
        return score1;
    }
    else if ((score2 <= score1) && (score2 <= score3) && (score2 <= score4) && (score2 <= score5))
    {
        return score2;
    }
    else if ((score3 <= score1) && (score3 <= score2) && (score3 <= score4) && (score3 <= score5))
    {
        return score3;
    }
    else if ((score4 <= score1) && (score4 <= score2) && (score4 <= score3) && (score3 <= score5))
    {
        return score4;
    }
    // else returns score5
    return score5;
}

/**
 * @brief Determines the average of the four highest scores
 *
 * @param score1
 * @param score2
 * @param score3
 * @param score4
 * @param score5
 */
void calc_average(int score1, int score2, int score3, int score4, int score5)
{
    float average;
    if (score1 == find_lowest(score1, score2, score3, score4, score5))
    {
        average = static_cast<float>(score2 + score3 + score4 + score5) / 4.0;
    }
    else if (score2 == find_lowest(score1, score2, score3, score4, score5))
    {
        average = static_cast<float>(score1 + score3 + score4 + score5) / 4.0;
    }
    else if (score3 == find_lowest(score1, score2, score3, score4, score5))
    {
        average = static_cast<float>(score1 + score2 + score4 + score5) / 4.0;
    }
    else if (score5 == find_lowest(score1, score2, score3, score4, score5))
    {
        average = static_cast<float>(score1 + score2 + score3 + score4) / 4.0;
    }
    cout << "Average of four highest scores: " << average << endl;
}

int main(void)
{
    int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;

    // Getting five scores from user
    get_score(score1);
    get_score(score2);
    get_score(score3);
    get_score(score4);
    get_score(score5);

    // Calculating average
    calc_average(score1, score2, score3, score4, score5);
    return 0;
}