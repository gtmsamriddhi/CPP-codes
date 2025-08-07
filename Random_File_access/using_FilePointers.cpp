#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Product {
    int productID;
    char name[30];
    float price;

public:
    void inputData() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        cin.getline(name, 30);
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayData() const {
        cout << fixed << setprecision(2);
        cout << "Product ID: " << productID << ", Name: " << name << ", Price: " << price << endl;
    }

    void updatePrice() {
        cout << "Enter new price: ";
        cin >> price;
    }
};

int main() {
    fstream file;
    Product prod;
    int n;

    file.open("products.dat", ios::out | ios::binary);
    if (!file) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for product " << i + 1 << ":\n";
        prod.inputData();
        file.write(reinterpret_cast<char*>(&prod), sizeof(prod));
    }

    file.close();

    file.open("products.dat", ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int choice;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Display a specific record (random access)\n";
        cout << "2. Update price of a specific product\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int recordNo;
        switch (choice) {
            case 1:
                cout << "Enter record number to read (starting from 1): ";
                cin >> recordNo;
                file.seekg((recordNo - 1) * sizeof(prod), ios::beg);
                file.read(reinterpret_cast<char*>(&prod), sizeof(prod));
                cout << "--- Product Details ---\n";
                prod.displayData();
                break;

            case 2:
                cout << "Enter record number to update (starting from 1): ";
                cin >> recordNo;
                file.seekg((recordNo - 1) * sizeof(prod), ios::beg);
                file.read(reinterpret_cast<char*>(&prod), sizeof(prod));

                cout << "--- Existing Product Details ---\n";
                prod.displayData();
                prod.updatePrice();

                file.seekp((recordNo - 1) * sizeof(prod), ios::beg);
                file.write(reinterpret_cast<char*>(&prod), sizeof(prod));
                cout << "Price updated successfully.\n";
                break;

            case 3:
                break; // Simply exit the loop
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    file.close();
    cout << "Samriddhi Gautam : BIT28 : Random FIle access using file pointers";
    return 0;
}
