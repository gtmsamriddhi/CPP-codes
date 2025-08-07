//Write a C++ program to create a Circle object dynamically using a pointer. Accept radius, calculate area, display it, and deallocate memory using delete.
#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area() {
        return 3.1416 * radius * radius;
    }

    void displayArea() {
        cout << "Area of Circle = " << area() << endl;
    }
};

int main() {
    Circle* c = new Circle;  

    c->input();              
    c->displayArea();

    delete c; 

    cout << "\nSamriddhi Gautam : BIT28 : Dynamic Object of Class Circle\n";

    return 0;
}
