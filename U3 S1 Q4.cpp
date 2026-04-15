/*4. Withdrawal rules are different for savings and current accounts. A savings account must maintain a minimum balance, whereas a current account may allow overdraft. 
Design a program with a common withdraw() function so that the correct rule is applied at runtime depending on the account object referenced by the base-class pointer.*/

#include <iostream>
using namespace std;
class Account {
protected:
    float balance;
public:
    Account(float b) {
        balance = b;
    }
    virtual void withdraw(float amount) {
        cout << "Withdraw function\n";
    }
};
class SavingsAccount : public Account {
public:
    SavingsAccount(float b) : Account(b) {}
    void withdraw(float amount) {
        if(balance - amount >= 1000)
            cout << "Savings Account Withdrawal Allowed: " << amount << " (Minimum balance rule applied)" << endl;
        else
            cout << "Savings Account Withdrawal Denied" << endl;
    }
};
class CurrentAccount : public Account {
public:
    CurrentAccount(float b) : Account(b) {}
    void withdraw(float amount) {
        cout << "Current Account Withdrawal Allowed: " << amount << " (Overdraft facility available)" << endl;
    }
};
int main() {
    Account *acc;
    SavingsAccount s(5000);
    CurrentAccount c(2000);
    acc = &s;
    acc->withdraw(3000);
    acc = &c;
    acc->withdraw(3000);
    return 0;
}
