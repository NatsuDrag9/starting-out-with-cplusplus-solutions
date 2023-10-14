#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

void get_judge_data(float &score);
double calc_score(float score1, float score2, float score3, float score4, float score5);
float find_lowest(float score1, float score2, float score3, float score4, float score5);
float find_highest(float score1, float score2, float score3, float score4, float score5);

/**
 * @brief Gets the judge's score from user, validates it and stores it in a reference parameter variable
 *
 * @param score
 */
void get_judge_data(float &score)
{
    cout << "Enter score: ";
    cin >> score;
    if ((score < 0) || (score > 10))
    {
        cout << "Invalid input! Judge's score must lie between 0 and 10. Exiting..." << endl;
        exit(0);
    }
}

/**
 * @brief Determines the highest score from the parameters received. If the scores are equal, it returns the first occurance.
 *
 * @param score1
 * @param score2
 * @param score3
 * @param score4
 * @param score5
 * @return float - returns the highest score
 */
float find_highest(float score1, float score2, float score3, float score4, float score5)
{
    if ((score1 >= score2) && (score1 >= score3) && (score1 >= score4) && (score1 >= score5))
    {
        return score1;
    }
    else if ((score2 >= score1) && (score2 >= score3) && (score2 >= score4) && (score2 >= score5))
    {
        return score2;
    }
    else if ((score3 >= score1) && (score3 >= score2) && (score3 >= score4) && (score3 >= score5))
    {
        return score3;
    }
    else if ((score4 >= score1) && (score4 >= score2) && (score4 >= score3) && (score4 >= score5))
    {
        return score4;
    }
    // else return score5
    return score5;
}

/**
 * @brief Determines the lowest score from the parameters received. If the scores are equal, it returns the first occurance.
 *
 * @param score1
 * @param score2
 * @param score3
 * @param score4
 * @param score5
 * @return float - returns the lowest score
 */
float find_lowest(float score1, float score2, float score3, float score4, float score5)
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
    else if ((score4 <= score1) && (score4 <= score2) && (score4 <= score3) && (score4 <= score5))
    {
        return score4;
    }
    // else return score5
    return score5;
}

/**
 * @brief Calculates the average of the threee scores that remain after dropping the highest and lowest scores.
 *
 * @param score1
 * @param score2
 * @param score3
 * @param score4
 * @param score5
 * @return double - returns the average of the three scores
 */
double calc_score(float score1, float score2, float score3, float score4, float score5)
{
    float lowestScore = find_lowest(score1, score2, score3, score4, score5);
    float highestScore = find_highest(score1, score2, score3, score4, score5);
    float average = 0.0;

    if (lowestScore == score1)
    {
        if (highestScore == score2)
        {
            average = static_cast<float>(score3 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score3)
        {
            average = static_cast<float>(score2 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score4)
        {
            average = static_cast<float>(score3 + score2 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score5)
        {
            average = static_cast<float>(score3 + score2 + score4) / 3.0;
            return average;
        }
    }
    else if (lowestScore == score2)
    {
        if (highestScore == score1)
        {
            average = static_cast<float>(score3 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score3)
        {
            average = static_cast<float>(score1 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score4)
        {
            average = static_cast<float>(score3 + score1 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score5)
        {
            average = static_cast<float>(score3 + score1 + score4) / 3.0;
            return average;
        }
    }
    else if (lowestScore == score3)
    {
        if (highestScore == score1)
        {
            average = static_cast<float>(score2 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score2)
        {
            average = static_cast<float>(score1 + score4 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score4)
        {
            average = static_cast<float>(score1 + score2 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score5)
        {
            average = static_cast<float>(score1 + score2 + score4) / 3.0;
            return average;
        }
    }
    else if (lowestScore == score4)
    {
        if (highestScore == score1)
        {
            average = static_cast<float>(score3 + score2 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score2)
        {
            average = static_cast<float>(score1 + score3 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score3)
        {
            average = static_cast<float>(score1 + score2 + score5) / 3.0;
            return average;
        }
        else if (highestScore == score5)
        {
            average = static_cast<float>(score3 + score2 + score1) / 3.0;
            return average;
        }
    }
    else if (lowestScore == score5)
    {
        if (highestScore == score1)
        {
            average = static_cast<float>(score3 + score4 + score2) / 3.0;
            return average;
        }
        else if (highestScore == score2)
        {
            average = static_cast<float>(score1 + score4 + score3) / 3.0;
            return average;
        }
        else if (highestScore == score3)
        {
            average = static_cast<float>(score4 + score2 + score1) / 3.0;
            return average;
        }
        else if (highestScore == score4)
        {
            average = static_cast<float>(score3 + score2 + score1) / 3.0;
            return average;
        }
    }
    // else
    return average;
}

int main(void)
{
    float score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0;
    get_judge_data(score1);
    get_judge_data(score2);
    get_judge_data(score3);
    get_judge_data(score4);
    get_judge_data(score5);
    cout << "Average of 3 scores after dropping highest and lowest: " << calc_score(score1, score2, score3, score4, score5) << endl;
    return 0;
}