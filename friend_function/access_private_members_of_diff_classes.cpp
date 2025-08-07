#include <iostream>
using namespace std;

class Square; 
class Rectangle {
private:
    float length, breadth;

public:
    
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    friend float totalArea(Rectangle r, Square s);
};

class Square {
private:
    float side;

public:
  
    Square(float s) {
        side = s;
    }

    friend float totalArea(Rectangle r, Square s);
};


float totalArea(Rectangle r, Square s) {
    float rectArea = r.length * r.breadth;
    float squareArea = s.side * s.side;
    return rectArea + squareArea;
}

int main() {
    
    Rectangle rect(5.0, 4.0);
    Square sq(3.0);

   
    float area = totalArea(rect, sq);

  
    cout << "Total Area (Rectangle + Square): " << area << " square units" << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Friend Function Example" << endl;

    return 0;
}
