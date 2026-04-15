/*1. A bank manages common account details such as account number, account holder name and balance. From this common account, 
different account types such as savings account and current account are derived. Design a program to show how multiple account 
types can share common features while implementing their own interest calculation.*/

#include <iostream>
using namespace std;
class Account {
protected:
    int accNo;
    string name;
    float balance;
public:
    void setData(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
    }
};
class SavingsAccount : public Account {
public:
    float calculateInterest() {
        return balance * 0.04;
    }
    void display() {
        cout << "Savings Account Holder: " << name << " Interest: " << calculateInterest() << endl;
    }
};
class CurrentAccount : public Account {
public:
    float calculateInterest() {
        return 0;
    }
    void display() {
        cout << "Current Account Holder: " << name << " Interest: " << calculateInterest() << endl;
    }
};
int main() {
    SavingsAccount s;
    CurrentAccount c;
    s.setData(1,"Meena",20000);
    c.setData(2,"Arun",15000);
    s.display();
    c.display();
    return 0;
}
