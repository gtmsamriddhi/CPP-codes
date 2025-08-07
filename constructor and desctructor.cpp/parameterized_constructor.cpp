//Create a Circle class with radius, use a parameterized constructor, and display area.
#include <iostream>
#include <cmath>  
using namespace std;

class Circle {
    float radius;

public:
   
    Circle(float r) {
        radius = r;
    }

   
    void displayArea() {
        float area = M_PI * radius * radius;
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area << endl;
    }
};

int main() {
    Circle c(5.5);  
    c.displayArea();

    cout << "\nSamriddhi Gautam : BIT28 : Parameterized Constructor Demo" << endl;
    return 0;
}