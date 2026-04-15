/*Q5 – Destructor

When a product object goes out of scope, the system should display the message:

Product object destroyed

Write a C++ program that demonstrates the use of a destructor in the class Product.*/

#include <iostream>
using namespace std;
class Product {
public:
    Product() {
        cout << "Product created\n";
    }
    ~Product() {
        cout << "Product object destroyed\n";
    }
};
int main() {
    Product p1;
    return 0;
}
