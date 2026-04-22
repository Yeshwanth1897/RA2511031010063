#include <iostream>
using namespace std;
int main()
{
    int pin, balance = 5000, amount;
    cout << "Enter ATM PIN: ";
    cin >> pin;
    try
    {
        if(pin != 1234)
            throw pin;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if(amount > balance)
            throw amount;
        cout << "Transaction Successful\n";
        cout << "Remaining Balance = " << balance - amount;
    }
    catch(int x)
    {
        if(x == pin)
            cout << "Error: Invalid PIN";
        else
            cout << "Error: Insufficient Balance";
    }
    return 0;
}
