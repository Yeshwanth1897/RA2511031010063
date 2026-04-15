/*Q2. Control Statements, Arrays, and Type Conversion

Write a C++ program that:

1. Reads n student marks using an array.

2. Calculates:

o Total marks

o Average marks (use explicit type conversion).

3. Displays:

o Grade using conditional statements

§ Average = 80 ? Grade A

§ Average = 60 ? Grade B

§ Average = 40 ? Grade C

§ Else ? Fail

(Focus: Arrays, Looping, Conditional Statements, Type Conversion)*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[n], total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    float average = (float)total / n;
    cout << "\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << average;
    if (average >= 80)
        cout << "\nGrade: A";
    else if (average >= 60)
        cout << "\nGrade: B";
    else if (average >= 40)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";
    return 0;
}
