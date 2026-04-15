/*5. All banking services such as deposit service and loan service must follow a common structure called process(), but each service executes it differently.
The general BankService class should only define the interface and must force all derived services to implement the function. Design the required C++ program.*/

#include <iostream>
using namespace std;
class BankService {
public:
    virtual void process() = 0;
};
class DepositService : public BankService {
public:
    void process() {
        cout << "Deposit Service Processed" << endl;
    }
};
class LoanService : public BankService {
public:
    void process() {
        cout << "Loan Service Processed" << endl;
    }
};
int main() {
    BankService *b;
    DepositService d;
    LoanService l;
    b = &d;
    b->process();
    b = &l;
    b->process();
    return 0;
}
