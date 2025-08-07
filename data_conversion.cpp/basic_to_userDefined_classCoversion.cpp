#include <iostream>
using namespace std;

class Length {
private:
    float meters;

public:
   
    Length() {
        meters = 0;
    }

    Length(float m) {
        meters = m;
    }

    void display() {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Length L1;      
    L1 = 5.5;       

    cout << "Length L1: ";
    L1.display();

    cout << "\nSamriddhi Gautam : BIT28 : Basic to Class Conversion" << endl;

    return 0;
}
