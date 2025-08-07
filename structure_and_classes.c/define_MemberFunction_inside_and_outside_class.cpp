//Write a C++ program to create a Book class with title, author, and price. Define inputData() inside the class and displayData() outside the class.
#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    float price;

public:
    // Function defined INSIDE the class
    void inputData() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); // Clear newline for future getline if needed
    }

    // Function declared inside, defined OUTSIDE
    void displayData();
};

// Function definition OUTSIDE the class
void Book::displayData() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Title : " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price : Rs. " << price << endl;
}

int main() {
    Book b;

    b.inputData();
    b.displayData();

    cout << "\nSamriddhi Gautam : BIT28 : Member Functions Inside & Outside Class" << endl;

    return 0;
}

