/*Q1 – Constructor Overloading

A product object can be created in two ways:

· Without providing product details.

· With product name and price given during creation.

Write a C++ program that demonstrates constructor overloading for the class Product.*/

#include <iostream>
using namespace std;
class Product {
private:
    string name;
    float price;
public:
    Product() {
        name = "Unknown";
        price = 0;
    }
    Product(string n, float p) {
        name = n;
        price = p;
    }
    void display() {
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price << endl;
    }
};
int main() {
    Product p1;
    Product p2("Laptop", 500);
    cout << "\nDefault Constructor:";
    p1.display();
    cout << "\nParameterized Constructor:";
    p2.display();
    return 0;
}
