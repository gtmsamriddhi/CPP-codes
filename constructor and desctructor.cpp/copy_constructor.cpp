#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    float price;

public:
    
    Book(string t, float p) {
        title = t;
        price = p;
    }
    Book(const Book &b) {
        title = b.title;
        price = b.price;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    
    Book book1("C++ Programming", 599.99);

    Book book2 = book1;

    cout << "Original Book Details:\n";
    book1.display();

    cout << "\nCopied Book Details:\n";
    book2.display();

    cout << "\nSamriddhi Gautam : BIT28 :  Copy constructor" << endl;

    return 0;
}
