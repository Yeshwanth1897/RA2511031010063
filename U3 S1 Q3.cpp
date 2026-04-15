/*3. In a banking application, customer details and transaction details are stored in two independent modules. The main banking system 
screen must show both sets of details together while processing a transaction. Design a C++ program in which one class combines both
modules and displays the consolidated information.*/

#include <iostream>
using namespace std;
class Customer {
protected:
    string name;
public:
    void setCustomer(string n) {
        name = n;
    }
};
class Transaction {
protected:
    int transID;
    float amount;
public:
    void setTransaction(int id, float amt) {
        transID = id;
        amount = amt;
    }
};
class BankSystem : public Customer, public Transaction {
public:
    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Transaction ID: " << transID << endl;
        cout << "Amount: " << amount << endl;
    }
};
int main() {
    BankSystem b;
    b.setCustomer("Karthik");
    b.setTransaction(1001, 2500);
    b.display();
    return 0;
}
