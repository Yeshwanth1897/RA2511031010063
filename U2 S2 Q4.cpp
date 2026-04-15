/*Q4 – Operator Overloading

Two product objects can be combined to calculate the total price of both products.

Write a C++ program to overload the + operator to add the prices of two Product objects.*/

#include <iostream>
using namespace std;
class Product {
private:
    float price;
public:
    Product(float p=0) {
        price = p;
    }
    Product operator+(Product p) {
        return Product(price + p.price);
    }
    void display() {
        cout << "\nTotal Price: " << price << endl;
    }
};
int main() {
    Product p1(50), p2(100), p3;
    p3 = p1 + p2;
    p3.display();
    return 0;
}
