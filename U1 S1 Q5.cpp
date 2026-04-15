/*Q5. Menu-Driven Program

Write a menu-driven C++ program using a class BankAccount to perform:

1. Deposit

2. Withdraw

3. Balance Enquiry

Use:

· Private data members

· Public member functions

· do–while loop*/

#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }
    void withdraw(float amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }
    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};
int main() {
    BankAccount b;
    int choice;
    float amount;
    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Balance Enquiry\n4.Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amount;
                b.deposit(amount);
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                b.withdraw(amount);
                break;
            case 3:
                b.display();
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice";
        }
    } while(choice != 4);
    return 0;
}
