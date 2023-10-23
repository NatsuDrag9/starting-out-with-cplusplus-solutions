#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    const string contacts[11] = {
        "Becky Warren, 678-1223",
        "Joe Looney, 586-0097",
        "Geri Palmer, 223-8787",
        "Lynn Presnell, 887-1212",
        "Holly Gaddis, 223-8878",
        "Sam Wiggins, 486-0998",
        "Bob Kain, 586-8712",
        "Tim Haynes, 586-7676",
        "Warren Gaddis, 223-9037",
        "Jean James, 678-4939",
        "Ron Palmer, 486-2783",
    };

    string name;
    cout << "Enter a name or partial name to query: ";
    getline(cin, name);

    for(size_t i = 0; i < 11; i++){
        if(contacts[i].find(name) != string::npos){
            cout << contacts[i] << endl;
        }
    }

    return 0;
}