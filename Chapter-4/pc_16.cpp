#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    const float SOUND_WAVE_SPEED_AIR = 1100; // ft/s
    const float SOUND_WAVE_SPEED_WATER = 4900; // ft/s
    const float SOUND_WAVE_SPEED_STEEL = 16400; // ft/s
    int userChoice;
    float feet, time;

    // Fetch input from user
    cout << "Select medium" << endl;
    cout << setw(3) << "1.) Air" << endl;
    cout << setw(3) << "2.) Water" << endl;
    cout << setw(3) << "3.) Steel" << endl;
    cout << "Enter choice (1-3): ";
    cin >> userChoice;

    // Input validation
    if((userChoice < 1) || (userChoice > 3)){
        cout << "Invalid input! Enter choice between 1 through 3. Exiting..." << endl;
        return 0;
    }

    // Fetching distance travelled in feet from user
    cout << "Enter number of feet the sound wave travels in selected medium: ";
    cin >> feet;

    if(userChoice == 1){
        time = feet / SOUND_WAVE_SPEED_AIR;
        cout << "Time taken in air: " << fixed << setprecision(4) << time << " s" << endl;
    }
    else if (userChoice == 2){
        time = feet / SOUND_WAVE_SPEED_WATER;
        cout << "Time taken in water: " << fixed << setprecision(4) << time << " s" << endl;
    }
    else if (userChoice == 3){
        time = feet / SOUND_WAVE_SPEED_STEEL;
        cout << "Time taken in steel: " << fixed << setprecision(4) << time << " s" << endl;
    }

    return 0;
}