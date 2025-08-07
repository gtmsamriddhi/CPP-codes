#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to add two complex numbers and return a Complex object
    Complex add(Complex c) {
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
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    c3 = c1.add(c2); 

    cout << "\nResult after addition: ";
    c3.display();

    cout << "\nSamriddhi Gautam : BIT28 : Returning Object from Function" << endl;

    return 0;
}
