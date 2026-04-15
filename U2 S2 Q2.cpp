/*Q2 – Copy Constructor

When a product is added to a shopping cart, the product details must be copied into the cart object.

Write a C++ program that implements a copy constructor in the class Product to copy the product price from one object to another.*/

#include <iostream>
using namespace std;
class Product {
private:
    float price;
public:
    Product(float p) {
        price = p;
    }
    Product(const Product &p) {
        price = p.price;
    }
    void display() {
        cout << "\nPrice: " << price << endl;
    }
};
int main() {
    Product p1(50);
    Product p2 = p1;
    cout << "\nOriginal Product:";
    p1.display();
    cout << "\nCopied Product:";
    p2.display();
    return 0;
}
