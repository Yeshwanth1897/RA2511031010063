#include <iostream>
using namespace std;
int main() {
    int num;
    try {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0) {
            throw "Number is negative";
        }
        cout << "Number is positive";
    }
    catch (const char* msg) {
        cout << "Exception: " << msg;
    }
    catch (...) {
        cout << "Invalid input";
    }
    return 0;
}
