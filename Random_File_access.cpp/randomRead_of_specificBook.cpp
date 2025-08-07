#include <iostream>
#include <fstream>
using namespace std;

class Book {
    int bookID;
    char title[50];
    float price;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore(); // flush newline
        cout << "Enter Title: ";
        cin.getline(title, 50);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() const {
        cout << "Book ID: " << bookID << "\n";
        cout << "Title: " << title << "\n";
        cout << "Price: " << price << "\n";
    }
};

int main() {
    fstream file;
    Book book;
    int n;

    // Writing multiple books to binary file
    file.open("books.dat", ios::out | ios::binary);
    if (!file) {
        cerr << "Error creating file.\n";
        return 1;
    }

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details of book " << i + 1 << ":\n";
        book.input();
        file.write(reinterpret_cast<char*>(&book), sizeof(book));
    }
    file.close();

    // Read a specific book using random access
    file.open("books.dat", ios::in | ios::binary);
    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    int recordNo;
    cout << "\nEnter record number to read (starting from 1): ";
    cin >> recordNo;

    file.seekg((recordNo - 1) * sizeof(book), ios::beg);
    file.read(reinterpret_cast<char*>(&book), sizeof(book));

    cout << "\nBook Record " << recordNo << ":\n";
    book.display();

    file.close();
    cout << "Samriddhi Gautam : BIT28 : Access book record without sequential reading";
    return 0;
}
