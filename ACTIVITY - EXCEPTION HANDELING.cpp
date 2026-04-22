#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    try {
        if (password.length() < 8) {
            throw "Password must be at least 8 characters long!";
        }
        cout << "Password accepted." << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
