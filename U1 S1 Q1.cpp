/*Q1. Class, Objects, and Encapsulation

Write a C++ program to create a class Employee with the following details:

· Employee ID

· Employee Name

· Basic Salary

Requirements:

1. Declare data members as private.

2. Use public member functions to:

o Read employee details

o Calculate gross salary

Gross Salary=Basic Salary+20%HRA+10%DA

o Display employee details and gross salary.

3. Create at least two objects of the class.

(Focus: Class, Object, Encapsulation, Access Specifiers)*/

#include <iostream>
using namespace std;
class Employee {
private:
    int empID;
    string empName;
    float basicSalary;
    float grossSalary;
public:
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        float hra = 0.20 * basicSalary;
        float da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }
    void displayDetails() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};
int main() {
    Employee emp1, emp2;
    cout << "Enter details for Employee 1:\n";
    emp1.readDetails();
    emp1.calculateSalary();
    cout << "\nEnter details for Employee 2:\n";
    emp2.readDetails();
    emp2.calculateSalary();
    cout << "\n--- Employee Details ---\n";
    cout << "\nEmployee 1:";
    emp1.displayDetails();
    cout << "\nEmployee 2:";
    emp2.displayDetails();
    return 0;
}
