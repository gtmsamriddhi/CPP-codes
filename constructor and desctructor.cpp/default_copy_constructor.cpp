#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string company;
    float price;

   
    void display() {
        cout << "Company: " << company << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
   
    Car car1;
    car1.company = "Toyota";
    car1.price = 30000;

    Car car2 = car1;

    cout << "Original Car Details:\n";
    car1.display();

    cout << "\nCopied Car Details:\n";
    car2.display();

    cout << "\nSamriddhi Gautam : BIT28 :  Default Copy Constructor" << endl;

    return 0;
}
