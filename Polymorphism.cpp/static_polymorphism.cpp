#include <iostream>
#include <string>
using namespace std;

// Function Overloading
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(string text) {
    cout << "String: " << text << endl;
}

// Operator Overloading
class Complex {
public:
    float real, imag;

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void show() {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Function Overloading
    display(42);
    display("Hello, World!");

    // Operator Overloading
    Complex c1(2.5, 3.5), c2(1.5, 4.5);
    Complex sum = c1 + c2;
    sum.show();
    cout << "Samriddhi Gautam : BIT 28 : static poylmorphism" ;
    return 0;
}
