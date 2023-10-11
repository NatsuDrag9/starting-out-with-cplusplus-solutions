#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    const float SOUND_WAVE_SPEED_CO2 = 258.0; // in m/s
    const float SOUND_WAVE_SPEED_AIR = 331.5; // in m/s
    const float SOUND_WAVE_SPEED_HELIUM = 972.0; // in m/s
    const float SOUND_WAVE_SPEED_HYDROGEN = 1270.0; // in m/s
    int userChoice;
    float dist, time;

    // Fetch input from user
    cout << "Select medium" << endl;
    cout << setw(3) << "1.) CO2" << endl;
    cout << setw(3) << "2.) Air" << endl;
    cout << setw(3) << "3.) Helium" << endl;
    cout << setw(3) << "4.) Hydrogen" << endl;
    cout << "Enter choice (1-4): ";
    cin >> userChoice;

    // Input validation
    if((userChoice < 1) || (userChoice > 4)){
        cout << "Invalid input! Enter choice between 1 through 4. Exiting..." << endl;
        return 0;
    }

    // Fetching distance travelled in dist from user
    cout << "Enter time taken for the sound wave's travel in selected medium (in sec): ";
    cin >> time;

    if(userChoice == 1){
        dist = time * SOUND_WAVE_SPEED_CO2;
        cout << "Distance travelled in CO2: " << fixed << setprecision(2) << dist << " m" << endl;
    }
    else if (userChoice == 2){
        dist = time * SOUND_WAVE_SPEED_AIR;
        cout << "Distance travelled in air: " << fixed << setprecision(2) << dist << " m" << endl;
    }
    else if (userChoice == 3){
        dist = time * SOUND_WAVE_SPEED_HELIUM;
        cout << "Distance travelled in helium: " << fixed << setprecision(2) << dist << " m" << endl;
    }
    else if (userChoice == 4){
        dist = time * SOUND_WAVE_SPEED_HYDROGEN;
        cout << "Distance travelled in hydrogen: " << fixed << setprecision(2) << dist << " m" << endl;
    }

    return 0;
}