#include <iostream>
using namespace std;

//  Function Template for swapping any type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

//  Function Overloading: Separate functions for each type
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapValues(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swapValues(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float fx = 3.5, fy = 7.2;
    char cx = 'A', cy = 'Z';
    string s1 = "Hello", s2 = "World";

    cout << "Before Swapping (Overloaded int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);  
    cout << "After Swapping: x = " << x << ", y = " << y << endl;

    cout << "\nBefore Swapping (Overloaded float): fx = " << fx << ", fy = " << fy << endl;
    swapValues(fx, fy);  
    cout << "After Swapping: fx = " << fx << ", fy = " << fy << endl;

    cout << "\nBefore Swapping (Overloaded char): cx = " << cx << ", cy = " << cy << endl;
    swapValues(cx, cy);  
    cout << "After Swapping: cx = " << cx << ", cy = " << cy << endl;

    cout << "\nBefore Swapping (Template string): s1 = " << s1 << ", s2 = " << s2 << endl;
    swapValues<string>(s1, s2);  
    cout << "After Swapping: s1 = " << s1 << ", s2 = " << s2 << endl;
    cout << "Samriddhi Gautam : BIT28 : Function template vs Function overlaoding" ;
    return 0;
}
