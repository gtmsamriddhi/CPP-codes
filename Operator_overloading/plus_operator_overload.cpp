#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

  
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.0), c2(1.5, 4.5), c3;

    c3 = c1 + c2;  
    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();


    cout << "\nSamriddhi Gautam : BIT28 : Operator Overloading (+)" << endl;

    return 0;
}
