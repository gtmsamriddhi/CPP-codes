#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
   
    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }


    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    
    void modifyByValue(Distance d) {
        d.feet += 10;
        d.inches += 5.5;
        cout << "Inside modifyByValue (copied object): ";
        d.display();
    }

    void modifyByReference(Distance &d) {
        d.feet += 10;
        d.inches += 5.5;
        cout << "Inside modifyByReference (actual object): ";
        d.display();
    }
};

int main() {
    Distance d1;

    cout << "Input original distance:" << endl;
    d1.input();

    cout << "\nOriginal distance before any function call: ";
    d1.display();

    d1.modifyByValue(d1);
    cout << "After modifyByValue, original distance: ";
    d1.display();
   
    d1.modifyByReference(d1);
    cout << "After modifyByReference, original distance: ";
    d1.display();

    cout << "\nSamriddhi Gautam : BIT28 : Pass by Value and Reference" << endl;

    return 0;
}
