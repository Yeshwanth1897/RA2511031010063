#include <iostream>
using namespace std;
int main() {
    int marks;
    try {
        cout << "Enter marks: ";
        cin >> marks;
        if (marks < 0 || marks > 100) {
            throw "Marks should be between 0 and 100.";
        }
        cout << "Valid marks entered: " << marks;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg;
    }
    catch (...) {
        cout << "Invalid input.";
    }
    return 0;
}
