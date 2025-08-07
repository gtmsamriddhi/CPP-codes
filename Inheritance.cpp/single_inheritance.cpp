#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    int width, height;

public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    void displayDimensions() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(5, 7);

    cout << "Rectangle dimensions: ";
    rect.displayDimensions();

    cout << "Area of rectangle: " << rect.area() << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Single Inheritance" << endl;

    return 0;
}
