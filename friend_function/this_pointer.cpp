#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    float price;

public:
    void setData(int productID, float price) {
        this->productID = productID;
        this->price = price;
    }

    void display() {
        cout << "Product ID: " << productID << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Product p;
    p.setData(101, 499.99);
    p.display();

    cout << "\nSamriddhi Gautam : BIT28 : This Pointer Example" << endl;

    return 0;
}
