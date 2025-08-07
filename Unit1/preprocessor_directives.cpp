#include <iostream>
using namespace std;

#define PI 3.14159
#define SHOW_DETAILS

int main() {
    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    cout << "Area of the circle = " << area << endl;

    #ifdef SHOW_DETAILS
        cout << "You entered radius = " << radius << endl;
        cout << "The value of PI used = " << PI << endl;
        cout << "Samridhi Gautam: BIT28 : Preprocessor Directives" << endl;
    #endif

    return 0;
}
