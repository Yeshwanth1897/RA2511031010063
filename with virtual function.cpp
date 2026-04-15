#include <iostream>
using namespace std;

class Animal {
public:
    virtual void show() {
        cout << "This is Animal class" << endl;
    }
};

class Dog : public Animal {
public:
    void show() {
        cout << "Dog class function" << endl;
    }
};

class Cat : public Animal {
public:
    void show() {
        cout << "Cat class function" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->show();   

    a = &c;
    a->show();   

    return 0;
}
