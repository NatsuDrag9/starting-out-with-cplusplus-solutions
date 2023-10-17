#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string movieTitle;
    string movieDirector;
    int yearReleased;
    int runTimeInMin;

    MovieData(string title = "ABC", string director = "director", int year = 1990, int runTime = 10)
    {
        movieTitle = title;
        movieDirector = director;
        yearReleased = year;
        runTimeInMin = runTime;
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

    cout << "Second movie data" << endl;
    cout << "\nMovie title: " << m2.movieTitle << endl;
    cout << "Movie director: " << m2.movieDirector << endl;
    cout << "Release year: " << m2.yearReleased << endl;
    cout << "Duration (in min): " << m2.runTimeInMin << endl;
}

int main(void)
{

    MovieData movie1("Fairy Tail", "Shinji Ishihira", 2009, 100), movie2("Some movie", "Some director", 1991, 50);
    display_movie_data(movie1, movie2);
    return 0;
}