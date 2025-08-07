#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
   
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    
    float area() {
        return length * width;
    }

   
    void displayArea() {
        cout << "Area of Rectangle = " << area() << endl;
    }
};

int main() {
    Rectangle r;  

    r.input();       
    r.displayArea();  

    cout << "\nSamriddhi Gautam : BIT28 : Class and Object Rectangle\n";

    return 0;
}
