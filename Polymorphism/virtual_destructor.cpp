#include <iostream>
using namespace std;
class Shape {
public:
    Shape() {
        cout << "Shape constructor called." << endl;
    }

    virtual ~Shape() {  
        cout << "Shape destructor called." << endl;
    }
};

class Rectangle : public Shape {
private:
    int* data;
public:
    Rectangle() {
        data = new int[5];  
        cout << "Rectangle constructor called. Memory allocated." << endl;
    }

    ~Rectangle() {
        delete[] data;  // releasing memor
        cout << "Rectangle destructor called. Memory deallocated." << endl;
    }
};

int main() {
   
    Shape* shapePtr = new Rectangle();

    delete shapePtr; 
    cout << "Samriddhi Gautam : BIT28 : Virtual Destructor";
    return 0;
}
