#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
   
    Distance(int f = 0, float i = 0.0) {
        feet = f;
        inches = i;
    }

    bool operator>(const Distance &d) {
        float total1 = feet * 12 + inches;
        float total2 = d.feet * 12 + d.inches;
        return total1 > total2;
    }

   
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8.5), d2(6, 2.0);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    if (d1 > d2)
        cout << "Distance 1 is greater than Distance 2." << endl;
    else
        cout << "Distance 2 is greater than or equal to Distance 1." << endl;

    cout << "\nSamriddhi Gautam : BIT28 : Relational Operator Overloading" << endl;

    return 0;
}
