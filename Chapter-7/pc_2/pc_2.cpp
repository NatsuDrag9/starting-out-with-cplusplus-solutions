#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string movieTitle;
    string movieDirector;
    int yearReleased;
    int runTimeInMin;
    float prodCosts;
    float firstYearRev;

    MovieData(string title = "ABC", string director = "director", int year = 1990, int runTime = 10, float costs = 0.0, float revenue = 0.0)
    {
        movieTitle = title;
        movieDirector = director;
        yearReleased = year;
        runTimeInMin = runTime;
        prodCosts = costs;
        firstYearRev = revenue;
    }
};

void display_movie_data(MovieData &m1, MovieData &m2);

/**
 * @brief Displays data of the movie provided
 *
 * @param m1 - movie one
 * @param m2 - movie two
 */
void display_movie_data(MovieData &m1, MovieData &m2)
{
    cout << "First movie data" << endl;
    cout << "Movie title: " << m1.movieTitle << endl;
    cout << "Movie director: " << m1.movieDirector << endl;
    cout << "Release year: " << m1.yearReleased << endl;
    cout << "Duration (in min): " << m1.runTimeInMin << endl;
    m1.firstYearRev - m1.prodCosts >= 0 ? cout << "Profits (in ₹): " << m1.firstYearRev - m1.prodCosts << endl : cout << "Loss (in ₹): " << -1 * (m1.firstYearRev - m1.prodCosts) << endl;

    cout << "Second movie data" << endl;
    cout << "\nMovie title: " << m2.movieTitle << endl;
    cout << "Movie director: " << m2.movieDirector << endl;
    cout << "Release year: " << m2.yearReleased << endl;
    cout << "Duration (in min): " << m2.runTimeInMin << endl;
    m2.firstYearRev - m2.prodCosts >= 0 ? cout << "Profits (in ₹): " << m2.firstYearRev - m2.prodCosts << endl : cout << "Loss (in ₹): " << -1 * (m2.firstYearRev - m2.prodCosts) << endl;
}

int main(void)
{

    MovieData movie1("Fairy Tail", "Shinji Ishihira", 2009, 100, 5000, 3000), movie2("Some movie", "Some director", 1991, 50, 1000.0, 2000.0);
    display_movie_data(movie1, movie2);
    return 0;
}