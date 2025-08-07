//Write a C++ program with a Rectangle class, default constructor initializing length and width to 1, and a function to display area.
#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Default constructor
    Rectangle() {
        length = 1;
        width = 1;
    }

    void displayArea() {
        int area = length * width;
        cout << "Length = " << length << ", Width = " << width << endl;
        cout << "Area = " << area << endl;
    }
};

int main() {
    Rectangle r; 
    r.displayArea();

    cout << "\nSamriddhi Gautam : BIT28 : Default Constructor Demo" << endl;
    return 0;
}
