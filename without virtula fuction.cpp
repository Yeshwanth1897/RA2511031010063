#include <iostream>
using namespace std;

class Animal {
public:
    void show() {
        cout << "This is Animal class" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.show();   
    d.bark();   

    c.show();   
    c.meow();   

    return 0;
}
