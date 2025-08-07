#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is: " << findMax(x, y) << endl;

    float a = 5.6f, b = 2.3f;
    cout << "Max of " << a << " and " << b << " is: " << findMax(a, b) << endl;

   
    char ch1 = 'A', ch2 = 'Z';
    cout << "Max of '" << ch1 << "' and '" << ch2 << "' is: " << findMax(ch1, ch2) << endl;
    cout << "Samriddhi Gautam : BIT28 : Introduction to templates" ;
    return 0;
}
