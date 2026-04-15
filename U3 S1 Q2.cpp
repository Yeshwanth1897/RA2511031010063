/*2. A home loan is a specialized form of loan account, and a loan account itself is a specialized form of a general account. 
Design a three-level hierarchy to model account, loan account and home loan, and write a program to calculate a simple EMI 
for a home loan customer.*/

#include <iostream>
using namespace std;
class Account {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
};
class LoanAccount : public Account {
protected:
    float loanAmount;
public:
    void setLoan(float l) {
        loanAmount = l;
    }
};
class HomeLoan : public LoanAccount {
public:
    float calculateEMI() {
        return loanAmount / 12;
    }
    void display() {
        cout << " Customer: " << name << endl;
        cout << " Loan Amount: " << loanAmount << endl;
        cout << " Monthly EMI:" << calculateEMI() << endl;
    }
};
int main() {
    HomeLoan h;
    h.setName("Divya");
    h.setLoan(600000);
    h.display();
    return 0;
}
