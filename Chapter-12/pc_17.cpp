#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const char* username = getenv("USER");
    if (username) {
        cout << "Hello, " << username << "!" << endl;
    } else {
        cout << "Unable to determine your login name." << endl;
    }
    return 0;
}
