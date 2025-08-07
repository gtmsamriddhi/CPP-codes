#include <iostream>
#include <cmath>   // for M_PI : predefined constant for value of pi
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual float area() = 0;
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    

    Rectangle rect(4, 5);
    Circle circ(3);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Circle: " << circ.area() << endl;

    Shape* shapePtr;

    shapePtr = &rect;
    cout << "Area via Shape pointer (Rectangle): " << shapePtr->area() << endl;

    shapePtr = &circ;
    cout << "Area via Shape pointer (Circle): " << shapePtr->area() << endl;
    cout << "Samriddhi Gautam : BIT28 : Abstract class using pure virtual Function" ;
    return 0;
}
