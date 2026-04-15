/*Q3 – Method Overloading

The shopping system calculates the total cost of a product in two different ways:

· Price × Quantity

· Price × Quantity + Delivery Charge

Write a C++ program that demonstrates method overloading using a function calculateCost().*/

#include <iostream>
using namespace std;
class Product {
public:
    float calculateCost(float price, int quantity) {
        return price * quantity;
    }
    float calculateCost(float price, int quantity, float delivery) {
        return price * quantity + delivery;
    }
};
int main() {
    Product p;
    cout << "\nCost without delivery: " << p.calculateCost(100, 2);
    cout << "\nCost with delivery: " << p.calculateCost(100, 2, 20);
    return 0;
}
