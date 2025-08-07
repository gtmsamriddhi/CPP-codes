#include <iostream>
using namespace std;

class Printer; 

class Box {
private:
    float length, width, height;

public:
   
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    friend class Printer;
};

class Printer {
public:
    
    void displayBoxDetails(Box b) {
        cout << "Box Dimensions:\n";
        cout << "Length: " << b.length << " units" << endl;
        cout << "Width: " << b.width << " units" << endl;
        cout << "Height: " << b.height << " units" << endl;
    }
};

int main() {
    
    Box myBox(10.5, 6.0, 4.5);

    Printer p;
    p.displayBoxDetails(myBox);

    cout << "\nSamriddhi Gautam : BIT28 : Friend Class Example" << endl;

    return 0;
}
