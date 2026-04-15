/*Q4. Pointers and Objects

Write a C++ program that:

1. Defines a class Book with:

o Book ID

o Book Title

o Price

2. Dynamically allocates memory for an object using a pointer to object.

3. Accesses class members using the pointer.

4. Displays the book details.

(Focus: Pointers, Dynamic Memory, Object Access)*/

#include <iostream>
using namespace std;
class Book {
private:
    int bookID;
    string title;
    float price;
public:
    void read() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }
    void display() {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Title: " << title;
        cout << "\nPrice: " << price << endl;
    }
};
int main() {
    Book *b;
    b = new Book;
    b->read();
    cout << "\n--- Book Details ---\n";
    b->display();
    delete b;
    return 0;
}
